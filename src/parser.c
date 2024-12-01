#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  aux_sym_link_token1 = 2,
  aux_sym_name_token1 = 3,
  anon_sym_POUND = 4,
  anon_sym_COLON = 5,
  anon_sym_LF = 6,
  sym__role_name = 7,
  anon_sym_COMMA = 8,
  sym_nickname = 9,
  sym_part_number = 10,
  aux_sym_page_number_token1 = 11,
  sym_page_real_number = 12,
  sym_sound = 13,
  sym_separator = 14,
  sym_text = 15,
  sym_source_file = 16,
  sym_works = 17,
  sym_link = 18,
  sym_name = 19,
  sym_work_marker = 20,
  sym_credits = 21,
  sym_role = 22,
  sym_persons = 23,
  sym_part = 24,
  sym_page = 25,
  sym_page_number = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_source_file_repeat2 = 28,
  aux_sym_works_repeat1 = 29,
  aux_sym_credits_repeat1 = 30,
  aux_sym_persons_repeat1 = 31,
  aux_sym_part_repeat1 = 32,
  aux_sym_page_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [aux_sym_link_token1] = "link_token1",
  [aux_sym_name_token1] = "name_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_COLON] = ": ",
  [anon_sym_LF] = "\n",
  [sym__role_name] = "_role_name",
  [anon_sym_COMMA] = ", ",
  [sym_nickname] = "nickname",
  [sym_part_number] = "part_number",
  [aux_sym_page_number_token1] = "page_number_token1",
  [sym_page_real_number] = "page_real_number",
  [sym_sound] = "sound",
  [sym_separator] = "separator",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym_works] = "works",
  [sym_link] = "link",
  [sym_name] = "name",
  [sym_work_marker] = "work_marker",
  [sym_credits] = "credits",
  [sym_role] = "role",
  [sym_persons] = "persons",
  [sym_part] = "part",
  [sym_page] = "page",
  [sym_page_number] = "page_number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_works_repeat1] = "works_repeat1",
  [aux_sym_credits_repeat1] = "credits_repeat1",
  [aux_sym_persons_repeat1] = "persons_repeat1",
  [aux_sym_part_repeat1] = "part_repeat1",
  [aux_sym_page_repeat1] = "page_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [aux_sym_link_token1] = aux_sym_link_token1,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LF] = anon_sym_LF,
  [sym__role_name] = sym__role_name,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_nickname] = sym_nickname,
  [sym_part_number] = sym_part_number,
  [aux_sym_page_number_token1] = aux_sym_page_number_token1,
  [sym_page_real_number] = sym_page_real_number,
  [sym_sound] = sym_sound,
  [sym_separator] = sym_separator,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym_works] = sym_works,
  [sym_link] = sym_link,
  [sym_name] = sym_name,
  [sym_work_marker] = sym_work_marker,
  [sym_credits] = sym_credits,
  [sym_role] = sym_role,
  [sym_persons] = sym_persons,
  [sym_part] = sym_part,
  [sym_page] = sym_page,
  [sym_page_number] = sym_page_number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_works_repeat1] = aux_sym_works_repeat1,
  [aux_sym_credits_repeat1] = aux_sym_credits_repeat1,
  [aux_sym_persons_repeat1] = aux_sym_persons_repeat1,
  [aux_sym_part_repeat1] = aux_sym_part_repeat1,
  [aux_sym_page_repeat1] = aux_sym_page_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_link_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym__role_name] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_nickname] = {
    .visible = true,
    .named = true,
  },
  [sym_part_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_page_number_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_page_real_number] = {
    .visible = true,
    .named = true,
  },
  [sym_sound] = {
    .visible = true,
    .named = true,
  },
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_works] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_work_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_credits] = {
    .visible = true,
    .named = true,
  },
  [sym_role] = {
    .visible = true,
    .named = true,
  },
  [sym_persons] = {
    .visible = true,
    .named = true,
  },
  [sym_part] = {
    .visible = true,
    .named = true,
  },
  [sym_page] = {
    .visible = true,
    .named = true,
  },
  [sym_page_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_works_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_credits_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_persons_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_part_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_page_repeat1] = {
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
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 47,
};

static TSCharacterRange sym__role_name_character_set_1[] = {
  {'\'', '\''}, {'-', '-'}, {'_', '_'}, {0x430, 0x449}, {0x44c, 0x44c}, {0x44e, 0x44f}, {0x454, 0x454}, {0x456, 0x457},
  {0x491, 0x491},
};

static TSCharacterRange sym_nickname_character_set_1[] = {
  {'\'', '\''}, {'-', '-'}, {'1', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0x404, 0x404}, {0x406, 0x407},
  {0x410, 0x429}, {0x42c, 0x42c}, {0x42e, 0x449}, {0x44c, 0x44c}, {0x44e, 0x44f}, {0x454, 0x454}, {0x456, 0x457}, {0x490, 0x491},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == 'h') ADVANCE(72);
      if (lookahead == 0x404 ||
          lookahead == 0x406 ||
          lookahead == 0x407 ||
          (0x410 <= lookahead && lookahead <= 0x429) ||
          lookahead == 0x42e ||
          lookahead == 0x42f ||
          lookahead == 0x490) ADVANCE(65);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '*') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(74);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(60);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '*') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '*') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '*') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(61);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '*') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '*') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '/') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(6);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 54:
      if (lookahead == 0x404 ||
          lookahead == 0x406 ||
          lookahead == 0x407 ||
          (0x410 <= lookahead && lookahead <= 0x429) ||
          lookahead == 0x42e ||
          lookahead == 0x42f ||
          lookahead == 0x490) ADVANCE(66);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(16);
      END_STATE();
    case 55:
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(8);
      END_STATE();
    case 56:
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(73);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '=') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_link_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__role_name);
      if (set_contains(sym__role_name_character_set_1, 9, lookahead)) ADVANCE(65);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__role_name);
      if (set_contains(sym__role_name_character_set_1, 9, lookahead)) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == ':') ADVANCE(39);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 'p') ADVANCE(70);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 's') ADVANCE(68);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 't') ADVANCE(69);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 't') ADVANCE(71);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_nickname);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_part_number);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_page_real_number);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_sound);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_text);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 57},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 57},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 57},
  [8] = {.lex_state = 57},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 56},
  [45] = {.lex_state = 54},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 46},
  [48] = {.lex_state = 54},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 46},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 56},
  [54] = {.lex_state = 54},
  [55] = {.lex_state = 54},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_link_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym__role_name] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_nickname] = ACTIONS(1),
    [sym_part_number] = ACTIONS(1),
    [aux_sym_page_number_token1] = ACTIONS(1),
    [sym_page_real_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(49),
    [sym_works] = STATE(9),
    [sym_name] = STATE(16),
    [sym_work_marker] = STATE(54),
    [sym_credits] = STATE(33),
    [sym_role] = STATE(28),
    [sym_part] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(27),
    [aux_sym_works_repeat1] = STATE(19),
    [aux_sym_credits_repeat1] = STATE(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [sym_part_number] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(9), 1,
      sym_comment,
    STATE(6), 1,
      sym_works,
    STATE(16), 1,
      sym_name,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    STATE(19), 1,
      aux_sym_works_repeat1,
    STATE(23), 1,
      aux_sym_credits_repeat1,
    STATE(28), 1,
      sym_role,
    STATE(39), 1,
      sym_credits,
    STATE(54), 1,
      sym_work_marker,
    STATE(32), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [38] = 5,
    ACTIONS(15), 1,
      aux_sym_page_number_token1,
    STATE(4), 1,
      aux_sym_page_repeat1,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      sym_part_number,
    ACTIONS(13), 2,
      sym_comment,
      sym_separator,
    ACTIONS(17), 2,
      sym_sound,
      sym_text,
  [57] = 5,
    ACTIONS(23), 1,
      aux_sym_page_number_token1,
    STATE(5), 1,
      aux_sym_page_repeat1,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym_part_number,
    ACTIONS(21), 2,
      sym_comment,
      sym_separator,
    ACTIONS(25), 2,
      sym_sound,
      sym_text,
  [76] = 5,
    ACTIONS(32), 1,
      aux_sym_page_number_token1,
    STATE(5), 1,
      aux_sym_page_repeat1,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym_part_number,
    ACTIONS(29), 2,
      sym_comment,
      sym_separator,
    ACTIONS(34), 2,
      sym_sound,
      sym_text,
  [95] = 6,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(37), 1,
      anon_sym_POUND,
    STATE(23), 1,
      aux_sym_credits_repeat1,
    STATE(28), 1,
      sym_role,
    STATE(36), 1,
      sym_credits,
    STATE(29), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [115] = 2,
    ACTIONS(41), 3,
      aux_sym_page_number_token1,
      sym_sound,
      sym_text,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_part_number,
      sym_separator,
  [127] = 2,
    ACTIONS(45), 3,
      aux_sym_page_number_token1,
      sym_sound,
      sym_text,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_part_number,
      sym_separator,
  [139] = 6,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(37), 1,
      anon_sym_POUND,
    STATE(23), 1,
      aux_sym_credits_repeat1,
    STATE(28), 1,
      sym_role,
    STATE(39), 1,
      sym_credits,
    STATE(32), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [159] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(47), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      sym_page_number,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    STATE(13), 2,
      sym_page,
      aux_sym_part_repeat1,
  [176] = 4,
    ACTIONS(47), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(15), 2,
      sym_page,
      aux_sym_part_repeat1,
  [191] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(54), 1,
      sym_part_number,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    STATE(31), 1,
      sym_link,
    STATE(51), 1,
      sym_work_marker,
  [210] = 4,
    ACTIONS(47), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(15), 2,
      sym_page,
      aux_sym_part_repeat1,
  [225] = 5,
    ACTIONS(47), 1,
      aux_sym_page_number_token1,
    ACTIONS(58), 1,
      sym_comment,
    STATE(3), 1,
      sym_page_number,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    STATE(11), 2,
      sym_page,
      aux_sym_part_repeat1,
  [242] = 4,
    ACTIONS(62), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(15), 2,
      sym_page,
      aux_sym_part_repeat1,
  [257] = 6,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_POUND,
    ACTIONS(70), 1,
      sym_part_number,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
    STATE(22), 1,
      sym_link,
    STATE(51), 1,
      sym_work_marker,
  [276] = 5,
    ACTIONS(54), 1,
      sym_part_number,
    ACTIONS(72), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_name,
    STATE(17), 1,
      aux_sym_works_repeat1,
    STATE(54), 1,
      sym_work_marker,
  [292] = 3,
    ACTIONS(75), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(78), 3,
      anon_sym_POUND,
      sym_part_number,
      aux_sym_page_number_token1,
  [304] = 4,
    STATE(16), 1,
      sym_name,
    STATE(17), 1,
      aux_sym_works_repeat1,
    STATE(54), 1,
      sym_work_marker,
    ACTIONS(80), 2,
      anon_sym_POUND,
      sym_part_number,
  [318] = 3,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [329] = 3,
    ACTIONS(9), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(84), 2,
      anon_sym_POUND,
      sym_part_number,
  [340] = 3,
    ACTIONS(86), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(54), 2,
      anon_sym_POUND,
      sym_part_number,
  [351] = 4,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      sym_part_number,
    STATE(26), 1,
      aux_sym_credits_repeat1,
    STATE(28), 1,
      sym_role,
  [364] = 3,
    ACTIONS(9), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(90), 2,
      anon_sym_POUND,
      sym_part_number,
  [375] = 3,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      sym_part_number,
    STATE(25), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [386] = 4,
    ACTIONS(90), 1,
      sym_part_number,
    ACTIONS(97), 1,
      anon_sym_POUND,
    STATE(26), 1,
      aux_sym_credits_repeat1,
    STATE(28), 1,
      sym_role,
  [399] = 3,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [410] = 3,
    ACTIONS(102), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(104), 2,
      anon_sym_POUND,
      sym_part_number,
  [421] = 3,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [432] = 3,
    ACTIONS(9), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(108), 2,
      anon_sym_POUND,
      sym_part_number,
  [443] = 3,
    ACTIONS(110), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(108), 2,
      anon_sym_POUND,
      sym_part_number,
  [454] = 3,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [465] = 2,
    ACTIONS(7), 1,
      sym_part_number,
    STATE(32), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [473] = 1,
    ACTIONS(114), 3,
      sym_comment,
      anon_sym_POUND,
      sym_part_number,
  [479] = 1,
    ACTIONS(116), 3,
      sym_comment,
      anon_sym_POUND,
      sym_part_number,
  [485] = 2,
    ACTIONS(7), 1,
      sym_part_number,
    STATE(20), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [493] = 3,
    ACTIONS(118), 1,
      anon_sym_LF,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_persons_repeat1,
  [503] = 1,
    ACTIONS(122), 3,
      sym_comment,
      anon_sym_POUND,
      sym_part_number,
  [509] = 2,
    ACTIONS(7), 1,
      sym_part_number,
    STATE(29), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [517] = 3,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(124), 1,
      anon_sym_LF,
    STATE(41), 1,
      aux_sym_persons_repeat1,
  [527] = 3,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_persons_repeat1,
  [537] = 2,
    ACTIONS(131), 1,
      anon_sym_LF,
    ACTIONS(133), 1,
      sym_page_real_number,
  [544] = 1,
    ACTIONS(126), 2,
      anon_sym_LF,
      anon_sym_COMMA,
  [549] = 2,
    ACTIONS(135), 1,
      sym_nickname,
    STATE(52), 1,
      sym_persons,
  [556] = 2,
    ACTIONS(137), 1,
      aux_sym_name_token1,
    ACTIONS(139), 1,
      sym__role_name,
  [563] = 1,
    ACTIONS(141), 1,
      anon_sym_COLON,
  [567] = 1,
    ACTIONS(137), 1,
      aux_sym_link_token1,
  [571] = 1,
    ACTIONS(139), 1,
      sym__role_name,
  [575] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
  [579] = 1,
    ACTIONS(145), 1,
      anon_sym_LF,
  [583] = 1,
    ACTIONS(147), 1,
      aux_sym_link_token1,
  [587] = 1,
    ACTIONS(149), 1,
      anon_sym_LF,
  [591] = 1,
    ACTIONS(151), 1,
      sym_nickname,
  [595] = 1,
    ACTIONS(153), 1,
      aux_sym_name_token1,
  [599] = 1,
    ACTIONS(137), 1,
      aux_sym_name_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 127,
  [SMALL_STATE(9)] = 139,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 176,
  [SMALL_STATE(12)] = 191,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 225,
  [SMALL_STATE(15)] = 242,
  [SMALL_STATE(16)] = 257,
  [SMALL_STATE(17)] = 276,
  [SMALL_STATE(18)] = 292,
  [SMALL_STATE(19)] = 304,
  [SMALL_STATE(20)] = 318,
  [SMALL_STATE(21)] = 329,
  [SMALL_STATE(22)] = 340,
  [SMALL_STATE(23)] = 351,
  [SMALL_STATE(24)] = 364,
  [SMALL_STATE(25)] = 375,
  [SMALL_STATE(26)] = 386,
  [SMALL_STATE(27)] = 399,
  [SMALL_STATE(28)] = 410,
  [SMALL_STATE(29)] = 421,
  [SMALL_STATE(30)] = 432,
  [SMALL_STATE(31)] = 443,
  [SMALL_STATE(32)] = 454,
  [SMALL_STATE(33)] = 465,
  [SMALL_STATE(34)] = 473,
  [SMALL_STATE(35)] = 479,
  [SMALL_STATE(36)] = 485,
  [SMALL_STATE(37)] = 493,
  [SMALL_STATE(38)] = 503,
  [SMALL_STATE(39)] = 509,
  [SMALL_STATE(40)] = 517,
  [SMALL_STATE(41)] = 527,
  [SMALL_STATE(42)] = 537,
  [SMALL_STATE(43)] = 544,
  [SMALL_STATE(44)] = 549,
  [SMALL_STATE(45)] = 556,
  [SMALL_STATE(46)] = 563,
  [SMALL_STATE(47)] = 567,
  [SMALL_STATE(48)] = 571,
  [SMALL_STATE(49)] = 575,
  [SMALL_STATE(50)] = 579,
  [SMALL_STATE(51)] = 583,
  [SMALL_STATE(52)] = 587,
  [SMALL_STATE(53)] = 591,
  [SMALL_STATE(54)] = 595,
  [SMALL_STATE(55)] = 599,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 1, 0, 0), SHIFT_REPEAT(47),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 1, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_works, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 4, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credits, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(14),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 5, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_work_marker, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
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

TS_PUBLIC const TSLanguage *tree_sitter_nyashyker_translate(void) {
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
