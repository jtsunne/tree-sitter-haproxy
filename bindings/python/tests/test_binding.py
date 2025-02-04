from unittest import TestCase

import tree_sitter
import tree_sitter_haproxy


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_haproxy.language())
        except Exception:
            self.fail("Error loading Haproxy grammar")
