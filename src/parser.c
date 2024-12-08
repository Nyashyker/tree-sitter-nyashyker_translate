#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym__empty = 2,
  aux_sym_link_token1 = 3,
  aux_sym_name_token1 = 4,
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
  sym__header = 18,
  sym_works = 19,
  sym_link = 20,
  sym_name = 21,
  sym_work_marker = 22,
  sym_credits = 23,
  sym_role = 24,
  sym_role_marker = 25,
  sym_persons = 26,
  sym_part = 27,
  sym_page = 28,
  sym_page_number = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_source_file_repeat2 = 31,
  aux_sym_works_repeat1 = 32,
  aux_sym_works_repeat2 = 33,
  aux_sym_credits_repeat1 = 34,
  aux_sym_persons_repeat1 = 35,
  aux_sym_part_repeat1 = 36,
  aux_sym_page_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__empty] = "_empty",
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
  [sym__header] = "_header",
  [sym_works] = "works",
  [sym_link] = "link",
  [sym_name] = "name",
  [sym_work_marker] = "work_marker",
  [sym_credits] = "credits",
  [sym_role] = "role",
  [sym_role_marker] = "role_marker",
  [sym_persons] = "persons",
  [sym_part] = "part",
  [sym_page] = "page",
  [sym_page_number] = "page_number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_works_repeat1] = "works_repeat1",
  [aux_sym_works_repeat2] = "works_repeat2",
  [aux_sym_credits_repeat1] = "credits_repeat1",
  [aux_sym_persons_repeat1] = "persons_repeat1",
  [aux_sym_part_repeat1] = "part_repeat1",
  [aux_sym_page_repeat1] = "page_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym__empty] = sym__empty,
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
  [sym__header] = sym__header,
  [sym_works] = sym_works,
  [sym_link] = sym_link,
  [sym_name] = sym_name,
  [sym_work_marker] = sym_work_marker,
  [sym_credits] = sym_credits,
  [sym_role] = sym_role,
  [sym_role_marker] = sym_role_marker,
  [sym_persons] = sym_persons,
  [sym_part] = sym_part,
  [sym_page] = sym_page,
  [sym_page_number] = sym_page_number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_works_repeat1] = aux_sym_works_repeat1,
  [aux_sym_works_repeat2] = aux_sym_works_repeat2,
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
  [sym__empty] = {
    .visible = false,
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
  [sym__header] = {
    .visible = false,
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
  [sym_role_marker] = {
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
  [aux_sym_works_repeat2] = {
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
  [55] = 53,
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
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'h') ADVANCE(73);
      if (lookahead == 0x404 ||
          lookahead == 0x406 ||
          lookahead == 0x407 ||
          (0x410 <= lookahead && lookahead <= 0x429) ||
          lookahead == 0x42e ||
          lookahead == 0x42f ||
          lookahead == 0x490) ADVANCE(66);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 0x404 ||
          lookahead == 0x406 ||
          lookahead == 0x407 ||
          (0x410 <= lookahead && lookahead <= 0x429) ||
          lookahead == 0x42e ||
          lookahead == 0x42f ||
          lookahead == 0x490) ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '*') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(75);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(61);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '*') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '*') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '*') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(62);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '*') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '*') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(7);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 54:
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(9);
      END_STATE();
    case 55:
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(17);
      END_STATE();
    case 56:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '=') ADVANCE(5);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__empty);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_link_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__role_name);
      if (set_contains(sym__role_name_character_set_1, 9, lookahead)) ADVANCE(66);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__role_name);
      if (set_contains(sym__role_name_character_set_1, 9, lookahead)) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == ':') ADVANCE(40);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 'p') ADVANCE(71);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 's') ADVANCE(69);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 't') ADVANCE(70);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 't') ADVANCE(72);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_nickname);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_part_number);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_page_real_number);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_sound);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_text);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 57},
  [3] = {.lex_state = 57},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 56},
  [6] = {.lex_state = 57},
  [7] = {.lex_state = 57},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 56},
  [15] = {.lex_state = 56},
  [16] = {.lex_state = 56},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 56},
  [20] = {.lex_state = 56},
  [21] = {.lex_state = 56},
  [22] = {.lex_state = 56},
  [23] = {.lex_state = 56},
  [24] = {.lex_state = 56},
  [25] = {.lex_state = 56},
  [26] = {.lex_state = 56},
  [27] = {.lex_state = 56},
  [28] = {.lex_state = 56},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 56},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 56},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 56},
  [41] = {.lex_state = 56},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 56},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 55},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 56},
  [53] = {.lex_state = 55},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__empty] = ACTIONS(1),
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
    [sym_source_file] = STATE(46),
    [sym__header] = STATE(22),
    [sym_works] = STATE(5),
    [sym_name] = STATE(35),
    [sym_work_marker] = STATE(47),
    [sym_part] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(23),
    [aux_sym_source_file_repeat2] = STATE(32),
    [aux_sym_works_repeat2] = STATE(10),
    [sym__empty] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [sym_part_number] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      sym__empty,
    ACTIONS(15), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      aux_sym_page_repeat1,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      sym_part_number,
    ACTIONS(11), 2,
      sym_comment,
      sym_separator,
    ACTIONS(17), 2,
      sym_sound,
      sym_text,
  [25] = 7,
    ACTIONS(23), 1,
      sym__empty,
    ACTIONS(25), 1,
      aux_sym_page_number_token1,
    STATE(4), 1,
      aux_sym_page_repeat1,
    STATE(28), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym_part_number,
    ACTIONS(21), 2,
      sym_comment,
      sym_separator,
    ACTIONS(27), 2,
      sym_sound,
      sym_text,
  [50] = 5,
    ACTIONS(34), 1,
      aux_sym_page_number_token1,
    STATE(4), 1,
      aux_sym_page_repeat1,
    ACTIONS(31), 2,
      sym_comment,
      sym_separator,
    ACTIONS(36), 2,
      sym_sound,
      sym_text,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      sym__empty,
      sym_part_number,
  [70] = 8,
    ACTIONS(39), 1,
      sym__empty,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      sym_part_number,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(11), 1,
      aux_sym_credits_repeat1,
    STATE(21), 1,
      sym_role,
    STATE(40), 1,
      sym_credits,
    STATE(45), 1,
      sym_role_marker,
  [95] = 2,
    ACTIONS(47), 3,
      aux_sym_page_number_token1,
      sym_sound,
      sym_text,
    ACTIONS(45), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym__empty,
      sym_part_number,
      sym_separator,
  [108] = 2,
    ACTIONS(51), 3,
      aux_sym_page_number_token1,
      sym_sound,
      sym_text,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym__empty,
      sym_part_number,
      sym_separator,
  [121] = 7,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      sym__empty,
    STATE(11), 1,
      aux_sym_credits_repeat1,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(21), 1,
      sym_role,
    STATE(41), 1,
      sym_credits,
    STATE(45), 1,
      sym_role_marker,
  [143] = 5,
    ACTIONS(55), 1,
      sym_comment,
    ACTIONS(57), 1,
      aux_sym_page_number_token1,
    STATE(2), 1,
      sym_page_number,
    STATE(12), 1,
      aux_sym_works_repeat1,
    STATE(13), 2,
      sym_page,
      aux_sym_part_repeat1,
  [160] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(14), 1,
      aux_sym_works_repeat2,
    STATE(35), 1,
      sym_name,
    STATE(47), 1,
      sym_work_marker,
    ACTIONS(59), 2,
      sym__empty,
      sym_part_number,
  [177] = 5,
    ACTIONS(41), 1,
      anon_sym_POUND,
    STATE(19), 1,
      aux_sym_credits_repeat1,
    STATE(21), 1,
      sym_role,
    STATE(45), 1,
      sym_role_marker,
    ACTIONS(61), 2,
      sym__empty,
      sym_part_number,
  [194] = 5,
    ACTIONS(57), 1,
      aux_sym_page_number_token1,
    ACTIONS(63), 1,
      sym_comment,
    STATE(2), 1,
      sym_page_number,
    STATE(15), 1,
      aux_sym_works_repeat1,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
  [211] = 4,
    ACTIONS(57), 1,
      aux_sym_page_number_token1,
    STATE(2), 1,
      sym_page_number,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(18), 2,
      sym_page,
      aux_sym_part_repeat1,
  [226] = 5,
    ACTIONS(69), 1,
      anon_sym_POUND,
    STATE(14), 1,
      aux_sym_works_repeat2,
    STATE(35), 1,
      sym_name,
    STATE(47), 1,
      sym_work_marker,
    ACTIONS(67), 2,
      sym__empty,
      sym_part_number,
  [243] = 3,
    ACTIONS(72), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_works_repeat1,
    ACTIONS(75), 4,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
      aux_sym_page_number_token1,
  [256] = 3,
    ACTIONS(79), 1,
      sym__empty,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_part_number,
      aux_sym_page_number_token1,
  [269] = 4,
    ACTIONS(57), 1,
      aux_sym_page_number_token1,
    STATE(2), 1,
      sym_page_number,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(18), 2,
      sym_page,
      aux_sym_part_repeat1,
  [284] = 4,
    ACTIONS(86), 1,
      aux_sym_page_number_token1,
    STATE(2), 1,
      sym_page_number,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(18), 2,
      sym_page,
      aux_sym_part_repeat1,
  [299] = 5,
    ACTIONS(91), 1,
      anon_sym_POUND,
    STATE(19), 1,
      aux_sym_credits_repeat1,
    STATE(21), 1,
      sym_role,
    STATE(45), 1,
      sym_role_marker,
    ACTIONS(89), 2,
      sym__empty,
      sym_part_number,
  [316] = 4,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(53), 1,
      sym__empty,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [330] = 3,
    ACTIONS(94), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_works_repeat1,
    ACTIONS(96), 3,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [342] = 4,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(98), 1,
      sym__empty,
    STATE(20), 1,
      aux_sym_source_file_repeat1,
    STATE(34), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [356] = 4,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(53), 1,
      sym__empty,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(34), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [370] = 3,
    ACTIONS(100), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_works_repeat1,
    ACTIONS(67), 3,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [382] = 3,
    ACTIONS(63), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_works_repeat1,
    ACTIONS(89), 3,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [394] = 3,
    ACTIONS(53), 1,
      sym__empty,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      sym_part_number,
      aux_sym_page_number_token1,
  [406] = 3,
    ACTIONS(63), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_works_repeat1,
    ACTIONS(102), 3,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [418] = 3,
    ACTIONS(53), 1,
      sym__empty,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      sym_part_number,
      aux_sym_page_number_token1,
  [430] = 3,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      sym_part_number,
    STATE(29), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [441] = 3,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [452] = 1,
    ACTIONS(113), 4,
      sym_comment,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [459] = 3,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [470] = 1,
    ACTIONS(117), 4,
      sym_comment,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [477] = 3,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [488] = 3,
    ACTIONS(121), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_link,
    STATE(50), 1,
      sym_work_marker,
  [498] = 3,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_persons_repeat1,
  [508] = 3,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_LF,
    STATE(36), 1,
      aux_sym_persons_repeat1,
  [518] = 3,
    ACTIONS(129), 1,
      anon_sym_LF,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_persons_repeat1,
  [528] = 2,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(136), 1,
      sym_page_real_number,
  [535] = 1,
    ACTIONS(138), 2,
      sym__empty,
      sym_part_number,
  [540] = 1,
    ACTIONS(140), 2,
      sym__empty,
      sym_part_number,
  [545] = 1,
    ACTIONS(129), 2,
      anon_sym_LF,
      anon_sym_COMMA,
  [550] = 2,
    ACTIONS(142), 1,
      sym_nickname,
    STATE(54), 1,
      sym_persons,
  [557] = 1,
    ACTIONS(144), 1,
      sym__role_name,
  [561] = 1,
    ACTIONS(146), 1,
      sym__role_name,
  [565] = 1,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
  [569] = 1,
    ACTIONS(150), 1,
      aux_sym_name_token1,
  [573] = 1,
    ACTIONS(152), 1,
      anon_sym_COLON,
  [577] = 1,
    ACTIONS(154), 1,
      anon_sym_LF,
  [581] = 1,
    ACTIONS(156), 1,
      aux_sym_link_token1,
  [585] = 1,
    ACTIONS(158), 1,
      anon_sym_POUND,
  [589] = 1,
    ACTIONS(160), 1,
      sym_nickname,
  [593] = 1,
    ACTIONS(162), 1,
      aux_sym_name_token1,
  [597] = 1,
    ACTIONS(164), 1,
      anon_sym_LF,
  [601] = 1,
    ACTIONS(162), 1,
      aux_sym_link_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 121,
  [SMALL_STATE(9)] = 143,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 177,
  [SMALL_STATE(12)] = 194,
  [SMALL_STATE(13)] = 211,
  [SMALL_STATE(14)] = 226,
  [SMALL_STATE(15)] = 243,
  [SMALL_STATE(16)] = 256,
  [SMALL_STATE(17)] = 269,
  [SMALL_STATE(18)] = 284,
  [SMALL_STATE(19)] = 299,
  [SMALL_STATE(20)] = 316,
  [SMALL_STATE(21)] = 330,
  [SMALL_STATE(22)] = 342,
  [SMALL_STATE(23)] = 356,
  [SMALL_STATE(24)] = 370,
  [SMALL_STATE(25)] = 382,
  [SMALL_STATE(26)] = 394,
  [SMALL_STATE(27)] = 406,
  [SMALL_STATE(28)] = 418,
  [SMALL_STATE(29)] = 430,
  [SMALL_STATE(30)] = 441,
  [SMALL_STATE(31)] = 452,
  [SMALL_STATE(32)] = 459,
  [SMALL_STATE(33)] = 470,
  [SMALL_STATE(34)] = 477,
  [SMALL_STATE(35)] = 488,
  [SMALL_STATE(36)] = 498,
  [SMALL_STATE(37)] = 508,
  [SMALL_STATE(38)] = 518,
  [SMALL_STATE(39)] = 528,
  [SMALL_STATE(40)] = 535,
  [SMALL_STATE(41)] = 540,
  [SMALL_STATE(42)] = 545,
  [SMALL_STATE(43)] = 550,
  [SMALL_STATE(44)] = 557,
  [SMALL_STATE(45)] = 561,
  [SMALL_STATE(46)] = 565,
  [SMALL_STATE(47)] = 569,
  [SMALL_STATE(48)] = 573,
  [SMALL_STATE(49)] = 577,
  [SMALL_STATE(50)] = 581,
  [SMALL_STATE(51)] = 585,
  [SMALL_STATE(52)] = 589,
  [SMALL_STATE(53)] = 593,
  [SMALL_STATE(54)] = 597,
  [SMALL_STATE(55)] = 601,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_works, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credits, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat2, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_works_repeat2, 2, 0, 0), SHIFT_REPEAT(53),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat2, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(9),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 5, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_marker, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [148] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_work_marker, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
