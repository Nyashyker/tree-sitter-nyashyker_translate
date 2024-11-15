package tree_sitter_nyashyker_translate_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_nyashyker_translate "github.com/nyashyker/nyashykertranslate.git/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_nyashyker_translate.Language())
	if language == nil {
		t.Errorf("Error loading NyashykerTranslate grammar")
	}
}
