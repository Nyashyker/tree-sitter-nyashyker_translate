#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
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
  [55] = 55,
  [56] = 54,
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
  [5] = {.lex_state = 57},
  [6] = {.lex_state = 57},
  [7] = {.lex_state = 56},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 56},
  [15] = {.lex_state = 56},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 56},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 56},
  [21] = {.lex_state = 56},
  [22] = {.lex_state = 56},
  [23] = {.lex_state = 56},
  [24] = {.lex_state = 56},
  [25] = {.lex_state = 56},
  [26] = {.lex_state = 56},
  [27] = {.lex_state = 56},
  [28] = {.lex_state = 56},
  [29] = {.lex_state = 56},
  [30] = {.lex_state = 56},
  [31] = {.lex_state = 56},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 56},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 56},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 56},
  [42] = {.lex_state = 56},
  [43] = {.lex_state = 56},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 55},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 56},
  [54] = {.lex_state = 55},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
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
    [sym_source_file] = STATE(48),
    [sym__header] = STATE(21),
    [sym_works] = STATE(7),
    [sym_name] = STATE(8),
    [sym_work_marker] = STATE(49),
    [sym_part] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(29),
    [aux_sym_source_file_repeat2] = STATE(36),
    [aux_sym_works_repeat2] = STATE(20),
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
    STATE(4), 1,
      aux_sym_page_repeat1,
    STATE(30), 1,
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
    STATE(2), 1,
      aux_sym_page_repeat1,
    STATE(24), 1,
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
  [70] = 2,
    ACTIONS(41), 3,
      aux_sym_page_number_token1,
      sym_sound,
      sym_text,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym__empty,
      sym_part_number,
      sym_separator,
  [83] = 2,
    ACTIONS(45), 3,
      aux_sym_page_number_token1,
      sym_sound,
      sym_text,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym__empty,
      sym_part_number,
      sym_separator,
  [96] = 8,
    ACTIONS(47), 1,
      sym__empty,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      sym_part_number,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(14), 1,
      aux_sym_credits_repeat1,
    STATE(27), 1,
      sym_role,
    STATE(42), 1,
      sym_credits,
    STATE(47), 1,
      sym_role_marker,
  [121] = 6,
    ACTIONS(53), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_link,
    STATE(23), 1,
      aux_sym_works_repeat1,
    STATE(52), 1,
      sym_work_marker,
    ACTIONS(55), 2,
      sym__empty,
      sym_part_number,
  [141] = 7,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(60), 1,
      sym__empty,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    STATE(14), 1,
      aux_sym_credits_repeat1,
    STATE(27), 1,
      sym_role,
    STATE(41), 1,
      sym_credits,
    STATE(47), 1,
      sym_role_marker,
  [163] = 3,
    ACTIONS(64), 1,
      sym__empty,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_POUND,
      sym_part_number,
      aux_sym_page_number_token1,
  [176] = 5,
    ACTIONS(69), 1,
      anon_sym_POUND,
    STATE(11), 1,
      aux_sym_credits_repeat1,
    STATE(27), 1,
      sym_role,
    STATE(47), 1,
      sym_role_marker,
    ACTIONS(67), 2,
      sym__empty,
      sym_part_number,
  [193] = 5,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(74), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      sym_page_number,
    STATE(17), 1,
      aux_sym_works_repeat1,
    STATE(18), 2,
      sym_page,
      aux_sym_part_repeat1,
  [210] = 4,
    ACTIONS(74), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(19), 2,
      sym_page,
      aux_sym_part_repeat1,
  [225] = 5,
    ACTIONS(49), 1,
      anon_sym_POUND,
    STATE(11), 1,
      aux_sym_credits_repeat1,
    STATE(27), 1,
      sym_role,
    STATE(47), 1,
      sym_role_marker,
    ACTIONS(78), 2,
      sym__empty,
      sym_part_number,
  [242] = 5,
    ACTIONS(82), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      aux_sym_works_repeat2,
    STATE(49), 1,
      sym_work_marker,
    ACTIONS(80), 2,
      sym__empty,
      sym_part_number,
  [259] = 5,
    ACTIONS(74), 1,
      aux_sym_page_number_token1,
    ACTIONS(85), 1,
      sym_comment,
    STATE(3), 1,
      sym_page_number,
    STATE(12), 1,
      aux_sym_works_repeat1,
    STATE(13), 2,
      sym_page,
      aux_sym_part_repeat1,
  [276] = 3,
    ACTIONS(87), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_works_repeat1,
    ACTIONS(90), 4,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
      aux_sym_page_number_token1,
  [289] = 4,
    ACTIONS(74), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(19), 2,
      sym_page,
      aux_sym_part_repeat1,
  [304] = 4,
    ACTIONS(96), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(19), 2,
      sym_page,
      aux_sym_part_repeat1,
  [319] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_name,
    STATE(15), 1,
      aux_sym_works_repeat2,
    STATE(49), 1,
      sym_work_marker,
    ACTIONS(99), 2,
      sym__empty,
      sym_part_number,
  [336] = 4,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(101), 1,
      sym__empty,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
    STATE(33), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [350] = 3,
    ACTIONS(103), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_works_repeat1,
    ACTIONS(80), 3,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [362] = 3,
    ACTIONS(72), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_works_repeat1,
    ACTIONS(80), 3,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [374] = 3,
    ACTIONS(60), 1,
      sym__empty,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_part_number,
      aux_sym_page_number_token1,
  [386] = 3,
    ACTIONS(72), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_works_repeat1,
    ACTIONS(105), 3,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [398] = 4,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(60), 1,
      sym__empty,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [412] = 3,
    ACTIONS(107), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_works_repeat1,
    ACTIONS(109), 3,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [424] = 3,
    ACTIONS(72), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_works_repeat1,
    ACTIONS(67), 3,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [436] = 4,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(60), 1,
      sym__empty,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    STATE(33), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [450] = 3,
    ACTIONS(60), 1,
      sym__empty,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      sym_part_number,
      aux_sym_page_number_token1,
  [462] = 1,
    ACTIONS(113), 4,
      sym_comment,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [469] = 3,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(34), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [480] = 3,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(34), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [491] = 3,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      sym_part_number,
    STATE(34), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [502] = 1,
    ACTIONS(124), 4,
      sym_comment,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [509] = 3,
    ACTIONS(7), 1,
      sym_part_number,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(34), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [520] = 1,
    ACTIONS(128), 4,
      sym_comment,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [527] = 3,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_persons_repeat1,
  [537] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_LF,
    STATE(40), 1,
      aux_sym_persons_repeat1,
  [547] = 3,
    ACTIONS(136), 1,
      anon_sym_LF,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_persons_repeat1,
  [557] = 1,
    ACTIONS(141), 2,
      sym__empty,
      sym_part_number,
  [562] = 1,
    ACTIONS(143), 2,
      sym__empty,
      sym_part_number,
  [567] = 2,
    ACTIONS(145), 1,
      sym_nickname,
    STATE(55), 1,
      sym_persons,
  [574] = 2,
    ACTIONS(147), 1,
      anon_sym_LF,
    ACTIONS(149), 1,
      sym_page_real_number,
  [581] = 1,
    ACTIONS(136), 2,
      anon_sym_LF,
      anon_sym_COMMA,
  [586] = 1,
    ACTIONS(151), 1,
      anon_sym_LF,
  [590] = 1,
    ACTIONS(153), 1,
      sym__role_name,
  [594] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [598] = 1,
    ACTIONS(157), 1,
      aux_sym_name_token1,
  [602] = 1,
    ACTIONS(159), 1,
      sym__role_name,
  [606] = 1,
    ACTIONS(161), 1,
      anon_sym_COLON,
  [610] = 1,
    ACTIONS(163), 1,
      aux_sym_link_token1,
  [614] = 1,
    ACTIONS(165), 1,
      sym_nickname,
  [618] = 1,
    ACTIONS(167), 1,
      aux_sym_name_token1,
  [622] = 1,
    ACTIONS(169), 1,
      anon_sym_LF,
  [626] = 1,
    ACTIONS(167), 1,
      aux_sym_link_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 83,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 121,
  [SMALL_STATE(9)] = 141,
  [SMALL_STATE(10)] = 163,
  [SMALL_STATE(11)] = 176,
  [SMALL_STATE(12)] = 193,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 225,
  [SMALL_STATE(15)] = 242,
  [SMALL_STATE(16)] = 259,
  [SMALL_STATE(17)] = 276,
  [SMALL_STATE(18)] = 289,
  [SMALL_STATE(19)] = 304,
  [SMALL_STATE(20)] = 319,
  [SMALL_STATE(21)] = 336,
  [SMALL_STATE(22)] = 350,
  [SMALL_STATE(23)] = 362,
  [SMALL_STATE(24)] = 374,
  [SMALL_STATE(25)] = 386,
  [SMALL_STATE(26)] = 398,
  [SMALL_STATE(27)] = 412,
  [SMALL_STATE(28)] = 424,
  [SMALL_STATE(29)] = 436,
  [SMALL_STATE(30)] = 450,
  [SMALL_STATE(31)] = 462,
  [SMALL_STATE(32)] = 469,
  [SMALL_STATE(33)] = 480,
  [SMALL_STATE(34)] = 491,
  [SMALL_STATE(35)] = 502,
  [SMALL_STATE(36)] = 509,
  [SMALL_STATE(37)] = 520,
  [SMALL_STATE(38)] = 527,
  [SMALL_STATE(39)] = 537,
  [SMALL_STATE(40)] = 547,
  [SMALL_STATE(41)] = 557,
  [SMALL_STATE(42)] = 562,
  [SMALL_STATE(43)] = 567,
  [SMALL_STATE(44)] = 574,
  [SMALL_STATE(45)] = 581,
  [SMALL_STATE(46)] = 586,
  [SMALL_STATE(47)] = 590,
  [SMALL_STATE(48)] = 594,
  [SMALL_STATE(49)] = 598,
  [SMALL_STATE(50)] = 602,
  [SMALL_STATE(51)] = 606,
  [SMALL_STATE(52)] = 610,
  [SMALL_STATE(53)] = 614,
  [SMALL_STATE(54)] = 618,
  [SMALL_STATE(55)] = 622,
  [SMALL_STATE(56)] = 626,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat2, 1, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_works_repeat2, 1, 0, 0), SHIFT_REPEAT(56),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credits, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat2, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_works_repeat2, 2, 0, 0), SHIFT_REPEAT(54),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_works, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat2, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(16),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 5, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_marker, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_work_marker, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
