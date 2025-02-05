#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_global_defaults = 1,
  sym_fbl_set = 2,
  aux_sym_section_name_token1 = 3,
  sym_comment = 4,
  sym_word = 5,
  sym_newline = 6,
  sym_source_file = 7,
  sym_section = 8,
  sym_section_header_line = 9,
  sym_directive_line = 10,
  sym_blank_line = 11,
  sym_section_name = 12,
  sym_identifier = 13,
  aux_sym_source_file_repeat1 = 14,
  aux_sym_section_repeat1 = 15,
  aux_sym_directive_line_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_global_defaults] = "global_defaults",
  [sym_fbl_set] = "fbl_set",
  [aux_sym_section_name_token1] = "section_name_token1",
  [sym_comment] = "comment",
  [sym_word] = "word",
  [sym_newline] = "newline",
  [sym_source_file] = "source_file",
  [sym_section] = "section",
  [sym_section_header_line] = "section_header_line",
  [sym_directive_line] = "directive_line",
  [sym_blank_line] = "blank_line",
  [sym_section_name] = "section_name",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_directive_line_repeat1] = "directive_line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_global_defaults] = sym_global_defaults,
  [sym_fbl_set] = sym_fbl_set,
  [aux_sym_section_name_token1] = aux_sym_section_name_token1,
  [sym_comment] = sym_comment,
  [sym_word] = sym_word,
  [sym_newline] = sym_newline,
  [sym_source_file] = sym_source_file,
  [sym_section] = sym_section,
  [sym_section_header_line] = sym_section_header_line,
  [sym_directive_line] = sym_directive_line,
  [sym_blank_line] = sym_blank_line,
  [sym_section_name] = sym_section_name,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_directive_line_repeat1] = aux_sym_directive_line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_global_defaults] = {
    .visible = true,
    .named = true,
  },
  [sym_fbl_set] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_section_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_header_line] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_line] = {
    .visible = true,
    .named = true,
  },
  [sym_blank_line] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_line_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      ADVANCE_MAP(
        '\n', 37,
        '\r', 1,
        '#', 35,
        'b', 7,
        'd', 13,
        'f', 27,
        'g', 20,
        'l', 17,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_global_defaults);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_fbl_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'k') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'l') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'o') ADVANCE(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 's') ADVANCE(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_global_defaults] = ACTIONS(1),
    [sym_fbl_set] = ACTIONS(1),
    [aux_sym_section_name_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym_section] = STATE(2),
    [sym_section_header_line] = STATE(4),
    [sym_directive_line] = STATE(2),
    [sym_blank_line] = STATE(2),
    [sym_identifier] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_global_defaults] = ACTIONS(7),
    [sym_fbl_set] = ACTIONS(9),
    [aux_sym_section_name_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_newline] = ACTIONS(13),
  },
  [2] = {
    [sym_section] = STATE(3),
    [sym_section_header_line] = STATE(4),
    [sym_directive_line] = STATE(3),
    [sym_blank_line] = STATE(3),
    [sym_identifier] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_global_defaults] = ACTIONS(7),
    [sym_fbl_set] = ACTIONS(9),
    [aux_sym_section_name_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_newline] = ACTIONS(13),
  },
  [3] = {
    [sym_section] = STATE(3),
    [sym_section_header_line] = STATE(4),
    [sym_directive_line] = STATE(3),
    [sym_blank_line] = STATE(3),
    [sym_identifier] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_global_defaults] = ACTIONS(19),
    [sym_fbl_set] = ACTIONS(22),
    [aux_sym_section_name_token1] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [sym_newline] = ACTIONS(28),
  },
  [4] = {
    [sym_directive_line] = STATE(5),
    [sym_identifier] = STATE(12),
    [aux_sym_section_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_global_defaults] = ACTIONS(33),
    [sym_fbl_set] = ACTIONS(33),
    [aux_sym_section_name_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_newline] = ACTIONS(31),
  },
  [5] = {
    [sym_directive_line] = STATE(6),
    [sym_identifier] = STATE(12),
    [aux_sym_section_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_global_defaults] = ACTIONS(37),
    [sym_fbl_set] = ACTIONS(37),
    [aux_sym_section_name_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_newline] = ACTIONS(35),
  },
  [6] = {
    [sym_directive_line] = STATE(6),
    [sym_identifier] = STATE(12),
    [aux_sym_section_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_global_defaults] = ACTIONS(41),
    [sym_fbl_set] = ACTIONS(41),
    [aux_sym_section_name_token1] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
    [sym_newline] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(48), 3,
      sym_global_defaults,
      sym_fbl_set,
      aux_sym_section_name_token1,
  [13] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(52), 3,
      sym_global_defaults,
      sym_fbl_set,
      aux_sym_section_name_token1,
  [26] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(56), 3,
      sym_global_defaults,
      sym_fbl_set,
      aux_sym_section_name_token1,
  [39] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(60), 3,
      sym_global_defaults,
      sym_fbl_set,
      aux_sym_section_name_token1,
  [52] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(64), 3,
      sym_global_defaults,
      sym_fbl_set,
      aux_sym_section_name_token1,
  [65] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_word,
    ACTIONS(68), 1,
      sym_newline,
    STATE(13), 1,
      aux_sym_directive_line_repeat1,
  [78] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_word,
    ACTIONS(72), 1,
      sym_newline,
    STATE(14), 1,
      aux_sym_directive_line_repeat1,
  [91] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_word,
    ACTIONS(77), 1,
      sym_newline,
    STATE(14), 1,
      aux_sym_directive_line_repeat1,
  [104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_section_name_token1,
    STATE(19), 1,
      sym_section_name,
  [114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      sym_word,
      sym_newline,
  [122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_newline,
  [129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
  [136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_newline,
  [143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 13,
  [SMALL_STATE(9)] = 26,
  [SMALL_STATE(10)] = 39,
  [SMALL_STATE(11)] = 52,
  [SMALL_STATE(12)] = 65,
  [SMALL_STATE(13)] = 78,
  [SMALL_STATE(14)] = 91,
  [SMALL_STATE(15)] = 104,
  [SMALL_STATE(16)] = 114,
  [SMALL_STATE(17)] = 122,
  [SMALL_STATE(18)] = 129,
  [SMALL_STATE(19)] = 136,
  [SMALL_STATE(20)] = 143,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blank_line, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blank_line, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header_line, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header_line, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header_line, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header_line, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_line, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_line, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_line, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_line_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_line_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [85] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 1, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_haproxy(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
