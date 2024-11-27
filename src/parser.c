#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  aux_sym_link_token1 = 2,
  aux_sym_name_token1 = 3,
  sym_work_marker = 4,
  anon_sym_POUND = 5,
  anon_sym_COLON = 6,
  anon_sym_LF = 7,
  sym__role_name = 8,
  anon_sym_COMMA = 9,
  sym_nickname = 10,
  sym_part_number = 11,
  aux_sym_page_number_token1 = 12,
  sym_page_real_number = 13,
  sym_sound = 14,
  sym_separator = 15,
  sym_text = 16,
  sym_source_file = 17,
  sym_works = 18,
  sym_link = 19,
  sym_name = 20,
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
  [sym_work_marker] = "work_marker",
  [anon_sym_POUND] = "#",
  [anon_sym_COLON] = ":",
  [anon_sym_LF] = "\n",
  [sym__role_name] = "_role_name",
  [anon_sym_COMMA] = ",",
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
  [sym_work_marker] = sym_work_marker,
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
  [sym_work_marker] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(56);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == 'h') ADVANCE(71);
      if (lookahead == 0x404 ||
          lookahead == 0x406 ||
          lookahead == 0x407 ||
          (0x410 <= lookahead && lookahead <= 0x429) ||
          lookahead == 0x42e ||
          lookahead == 0x42f ||
          lookahead == 0x490) ADVANCE(64);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '*') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(73);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(58);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '=') ADVANCE(4);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(72);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '*') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '*') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '*') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == 0x404 ||
          lookahead == 0x406 ||
          lookahead == 0x407 ||
          (0x410 <= lookahead && lookahead <= 0x429) ||
          lookahead == 0x42e ||
          lookahead == 0x42f ||
          lookahead == 0x490) ADVANCE(65);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(59);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(18);
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
      if (lookahead == '#') ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '=') ADVANCE(75);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
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
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '=') ADVANCE(74);
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
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(8);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '=') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_link_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_work_marker);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__role_name);
      if (set_contains(sym__role_name_character_set_1, 9, lookahead)) ADVANCE(64);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__role_name);
      if (set_contains(sym__role_name_character_set_1, 9, lookahead)) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == ':') ADVANCE(39);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 'p') ADVANCE(69);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 's') ADVANCE(67);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 't') ADVANCE(68);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 't') ADVANCE(70);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_nickname);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_part_number);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_page_real_number);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_sound);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_text);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 55},
  [4] = {.lex_state = 55},
  [5] = {.lex_state = 55},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 55},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 55},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 46},
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
    [sym_source_file] = STATE(48),
    [sym_works] = STATE(8),
    [sym_name] = STATE(17),
    [sym_credits] = STATE(36),
    [sym_role] = STATE(33),
    [sym_part] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(24),
    [aux_sym_works_repeat1] = STATE(18),
    [aux_sym_credits_repeat1] = STATE(26),
    [sym_comment] = ACTIONS(3),
    [sym_work_marker] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_part_number] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      sym_work_marker,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      sym_comment,
    STATE(6), 1,
      sym_works,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    STATE(17), 1,
      sym_name,
    STATE(18), 1,
      aux_sym_works_repeat1,
    STATE(26), 1,
      aux_sym_credits_repeat1,
    STATE(33), 1,
      sym_role,
    STATE(35), 1,
      sym_credits,
    STATE(31), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [38] = 5,
    ACTIONS(17), 1,
      aux_sym_page_number_token1,
    STATE(4), 1,
      aux_sym_page_repeat1,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      sym_part_number,
    ACTIONS(15), 2,
      sym_comment,
      sym_separator,
    ACTIONS(19), 2,
      sym_sound,
      sym_text,
  [57] = 5,
    ACTIONS(25), 1,
      aux_sym_page_number_token1,
    STATE(5), 1,
      aux_sym_page_repeat1,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_part_number,
    ACTIONS(23), 2,
      sym_comment,
      sym_separator,
    ACTIONS(27), 2,
      sym_sound,
      sym_text,
  [76] = 5,
    ACTIONS(34), 1,
      aux_sym_page_number_token1,
    STATE(5), 1,
      aux_sym_page_repeat1,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_part_number,
    ACTIONS(31), 2,
      sym_comment,
      sym_separator,
    ACTIONS(36), 2,
      sym_sound,
      sym_text,
  [95] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_part_number,
    STATE(26), 1,
      aux_sym_credits_repeat1,
    STATE(33), 1,
      sym_role,
    STATE(37), 1,
      sym_credits,
    STATE(30), 2,
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
  [127] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_part_number,
    STATE(26), 1,
      aux_sym_credits_repeat1,
    STATE(33), 1,
      sym_role,
    STATE(35), 1,
      sym_credits,
    STATE(31), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [147] = 2,
    ACTIONS(45), 3,
      aux_sym_page_number_token1,
      sym_sound,
      sym_text,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_part_number,
      sym_separator,
  [159] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_work_marker,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    STATE(22), 1,
      sym_link,
    ACTIONS(50), 2,
      anon_sym_POUND,
      sym_part_number,
  [176] = 4,
    ACTIONS(52), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_work_marker,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(57), 3,
      anon_sym_POUND,
      sym_part_number,
      aux_sym_page_number_token1,
  [191] = 5,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      sym_page_number,
    STATE(13), 1,
      aux_sym_source_file_repeat1,
    STATE(14), 2,
      sym_page,
      aux_sym_part_repeat1,
  [208] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(61), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      sym_page_number,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    STATE(15), 2,
      sym_page,
      aux_sym_part_repeat1,
  [225] = 4,
    ACTIONS(61), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(16), 2,
      sym_page,
      aux_sym_part_repeat1,
  [240] = 4,
    ACTIONS(61), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(16), 2,
      sym_page,
      aux_sym_part_repeat1,
  [255] = 4,
    ACTIONS(69), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(16), 2,
      sym_page,
      aux_sym_part_repeat1,
  [270] = 5,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_work_marker,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    STATE(20), 1,
      sym_link,
    ACTIONS(77), 2,
      anon_sym_POUND,
      sym_part_number,
  [287] = 4,
    ACTIONS(5), 1,
      sym_work_marker,
    STATE(17), 1,
      sym_name,
    STATE(19), 1,
      aux_sym_works_repeat1,
    ACTIONS(79), 2,
      anon_sym_POUND,
      sym_part_number,
  [301] = 4,
    ACTIONS(81), 1,
      sym_work_marker,
    STATE(17), 1,
      sym_name,
    STATE(19), 1,
      aux_sym_works_repeat1,
    ACTIONS(50), 2,
      anon_sym_POUND,
      sym_part_number,
  [315] = 4,
    ACTIONS(84), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_work_marker,
    STATE(21), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(50), 2,
      anon_sym_POUND,
      sym_part_number,
  [329] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_work_marker,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(90), 2,
      anon_sym_POUND,
      sym_part_number,
  [343] = 4,
    ACTIONS(88), 1,
      sym_work_marker,
    ACTIONS(92), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(90), 2,
      anon_sym_POUND,
      sym_part_number,
  [357] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_work_marker,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(96), 2,
      anon_sym_POUND,
      sym_part_number,
  [371] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [382] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(100), 2,
      anon_sym_POUND,
      sym_part_number,
  [393] = 4,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(102), 1,
      sym_part_number,
    STATE(27), 1,
      aux_sym_credits_repeat1,
    STATE(33), 1,
      sym_role,
  [406] = 4,
    ACTIONS(100), 1,
      sym_part_number,
    ACTIONS(104), 1,
      anon_sym_POUND,
    STATE(27), 1,
      aux_sym_credits_repeat1,
    STATE(33), 1,
      sym_role,
  [419] = 3,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      sym_part_number,
    STATE(28), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [430] = 2,
    ACTIONS(114), 1,
      sym_work_marker,
    ACTIONS(112), 3,
      sym_comment,
      anon_sym_POUND,
      sym_part_number,
  [439] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [450] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [461] = 2,
    ACTIONS(122), 1,
      sym_work_marker,
    ACTIONS(120), 3,
      sym_comment,
      anon_sym_POUND,
      sym_part_number,
  [470] = 3,
    ACTIONS(124), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(126), 2,
      anon_sym_POUND,
      sym_part_number,
  [481] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [492] = 2,
    ACTIONS(9), 1,
      sym_part_number,
    STATE(30), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [500] = 2,
    ACTIONS(9), 1,
      sym_part_number,
    STATE(31), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [508] = 2,
    ACTIONS(9), 1,
      sym_part_number,
    STATE(34), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [516] = 3,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_persons_repeat1,
  [526] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_LF,
    STATE(41), 1,
      aux_sym_persons_repeat1,
  [536] = 1,
    ACTIONS(136), 3,
      sym_comment,
      anon_sym_POUND,
      sym_part_number,
  [542] = 3,
    ACTIONS(138), 1,
      anon_sym_LF,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_persons_repeat1,
  [552] = 2,
    ACTIONS(143), 1,
      sym_nickname,
    STATE(51), 1,
      sym_persons,
  [559] = 1,
    ACTIONS(138), 2,
      anon_sym_LF,
      anon_sym_COMMA,
  [564] = 2,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(147), 1,
      sym_page_real_number,
  [571] = 1,
    ACTIONS(149), 1,
      anon_sym_COLON,
  [575] = 1,
    ACTIONS(151), 1,
      anon_sym_LF,
  [579] = 1,
    ACTIONS(153), 1,
      aux_sym_name_token1,
  [583] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [587] = 1,
    ACTIONS(157), 1,
      sym_nickname,
  [591] = 1,
    ACTIONS(159), 1,
      sym__role_name,
  [595] = 1,
    ACTIONS(161), 1,
      anon_sym_LF,
  [599] = 1,
    ACTIONS(163), 1,
      aux_sym_link_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 127,
  [SMALL_STATE(9)] = 147,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 176,
  [SMALL_STATE(12)] = 191,
  [SMALL_STATE(13)] = 208,
  [SMALL_STATE(14)] = 225,
  [SMALL_STATE(15)] = 240,
  [SMALL_STATE(16)] = 255,
  [SMALL_STATE(17)] = 270,
  [SMALL_STATE(18)] = 287,
  [SMALL_STATE(19)] = 301,
  [SMALL_STATE(20)] = 315,
  [SMALL_STATE(21)] = 329,
  [SMALL_STATE(22)] = 343,
  [SMALL_STATE(23)] = 357,
  [SMALL_STATE(24)] = 371,
  [SMALL_STATE(25)] = 382,
  [SMALL_STATE(26)] = 393,
  [SMALL_STATE(27)] = 406,
  [SMALL_STATE(28)] = 419,
  [SMALL_STATE(29)] = 430,
  [SMALL_STATE(30)] = 439,
  [SMALL_STATE(31)] = 450,
  [SMALL_STATE(32)] = 461,
  [SMALL_STATE(33)] = 470,
  [SMALL_STATE(34)] = 481,
  [SMALL_STATE(35)] = 492,
  [SMALL_STATE(36)] = 500,
  [SMALL_STATE(37)] = 508,
  [SMALL_STATE(38)] = 516,
  [SMALL_STATE(39)] = 526,
  [SMALL_STATE(40)] = 536,
  [SMALL_STATE(41)] = 542,
  [SMALL_STATE(42)] = 552,
  [SMALL_STATE(43)] = 559,
  [SMALL_STATE(44)] = 564,
  [SMALL_STATE(45)] = 571,
  [SMALL_STATE(46)] = 575,
  [SMALL_STATE(47)] = 579,
  [SMALL_STATE(48)] = 583,
  [SMALL_STATE(49)] = 587,
  [SMALL_STATE(50)] = 591,
  [SMALL_STATE(51)] = 595,
  [SMALL_STATE(52)] = 599,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 3, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_works_repeat1, 1, 0, 0), SHIFT_REPEAT(52),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_works, 1, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_works_repeat1, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_works_repeat1, 4, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 4, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credits, 1, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(12),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 5, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
