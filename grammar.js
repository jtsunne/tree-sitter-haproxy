module.exports = grammar({
  name: "haproxy",

  // extras: игнорируем пробелы и комментарии, но не переводы строки,
  // чтобы их можно было обрабатывать явно.
  extras: ($) => [/[ \t]+/, $.comment],

  rules: {
    // Файл состоит из набора верхнеуровневых элементов:
    // секций, строк директив или пустых строк.
    source_file: ($) =>
      repeat(choice($.section, $.directive_line, $.blank_line)),

    // Секция состоит из заголовка и набора строк-директив.
    // Используем prec.right, чтобы директивы не "отрывались" от секции.
    section: ($) =>
      prec.right(seq($.section_header_line, repeat($.directive_line))),

    // Заголовок секции:
    // - Для 'global' и 'defaults' строка должна содержать только ключевое слово и перевод строки.
    // - Для 'frontend', 'backend', 'listen' после ключевого слова должен идти идентификатор, затем перевод строки.
    section_header_line: ($) =>
      choice(
        seq("global", $.newline),
        seq("defaults", $.newline),
        seq(choice("frontend", "backend", "listen"), $.identifier, $.newline),
      ),

    // Строка директивы: одна или более "слов" и перевод строки.
    directive_line: ($) => seq(repeat1($.word), $.newline),

    // Пустая строка — это просто перевод строки.
    blank_line: ($) => $.newline,

    // Идентификатор для секций (для 'frontend', 'backend', 'listen')
    identifier: ($) => token(/[A-Za-z0-9-]+/),

    // Комментарий начинается с '#' и продолжается до конца строки.
    comment: ($) => token(seq("#", /.*/)),

    // Слово — последовательность символов, отличных от пробелов, символа '#' и перевода строки.
    word: ($) => token(/[^\s#\r\n]+/),

    // Токен перевода строки (поддержка Unix/Windows).
    newline: ($) => token(/\r?\n/),
  },
});
