#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym_name = 2,
  sym_link = 3,
  anon_sym_POUND = 4,
  anon_sym_COLON = 5,
  anon_sym_LF = 6,
  sym__role_name = 7,
  anon_sym_COMMA = 8,
  sym_nickname = 9,
  sym_part_number = 10,
  aux_sym_page_number_token1 = 11,
  sym_page_real_number = 12,
  sym_text = 13,
  sym_sound = 14,
  sym_separator = 15,
  sym_source_file = 16,
  sym_works = 17,
  sym_credits = 18,
  sym_role = 19,
  sym_persons = 20,
  sym_part = 21,
  sym_page = 22,
  sym_page_number = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_source_file_repeat2 = 25,
  aux_sym_works_repeat1 = 26,
  aux_sym_credits_repeat1 = 27,
  aux_sym_persons_repeat1 = 28,
  aux_sym_part_repeat1 = 29,
  aux_sym_page_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_name] = "name",
  [sym_link] = "link",
  [anon_sym_POUND] = "#",
  [anon_sym_COLON] = ":",
  [anon_sym_LF] = "\n",
  [sym__role_name] = "_role_name",
  [anon_sym_COMMA] = ",",
  [sym_nickname] = "nickname",
  [sym_part_number] = "part_number",
  [aux_sym_page_number_token1] = "page_number_token1",
  [sym_page_real_number] = "page_real_number",
  [sym_text] = "text",
  [sym_sound] = "sound",
  [sym_separator] = "separator",
  [sym_source_file] = "source_file",
  [sym_works] = "works",
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
  [sym_name] = sym_name,
  [sym_link] = sym_link,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LF] = anon_sym_LF,
  [sym__role_name] = sym__role_name,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_nickname] = sym_nickname,
  [sym_part_number] = sym_part_number,
  [aux_sym_page_number_token1] = aux_sym_page_number_token1,
  [sym_page_real_number] = sym_page_real_number,
  [sym_text] = sym_text,
  [sym_sound] = sym_sound,
  [sym_separator] = sym_separator,
  [sym_source_file] = sym_source_file,
  [sym_works] = sym_works,
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
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
  [sym_text] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_works] = {
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
  [33] = 9,
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
      if (eof) ADVANCE(100);
      if (lookahead == '#') ADVANCE(105);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ',') ADVANCE(110);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == '=') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 0x404 ||
          lookahead == 0x406 ||
          lookahead == 0x407 ||
          (0x410 <= lookahead && lookahead <= 0x429) ||
          lookahead == 0x42e ||
          lookahead == 0x42f ||
          lookahead == 0x490) ADVANCE(108);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(111);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '*') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '=') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '*') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(102);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '/') ADVANCE(9);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '/') ADVANCE(81);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == ':') ADVANCE(11);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == ':') ADVANCE(21);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(10);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(16);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == 'p') ADVANCE(22);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == 's') ADVANCE(12);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == 't') ADVANCE(24);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == 't') ADVANCE(14);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == 't') ADVANCE(18);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == 't') ADVANCE(23);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(15);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(102);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(102);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(102);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(102);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(102);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(112);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '*') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(103);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '=') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '*') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '=') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '=') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '=') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '=') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '=') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '=') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '=') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '*') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '*') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ',') ADVANCE(110);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '*') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '*') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 62:
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 63:
      if (lookahead == ' ') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '*') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '*') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 66:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 67:
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '=') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(111);
      END_STATE();
    case 69:
      if (lookahead == ')') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '*') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == '*') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 72:
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 73:
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 74:
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 75:
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 76:
      if (lookahead == '*') ADVANCE(78);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == '*') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == '*') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == '*') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '*') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '/') ADVANCE(92);
      END_STATE();
    case 82:
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 83:
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 84:
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 86:
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 88:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88);
      if (lookahead == 0x404 ||
          lookahead == 0x406 ||
          lookahead == 0x407 ||
          (0x410 <= lookahead && lookahead <= 0x429) ||
          lookahead == 0x42e ||
          lookahead == 0x42f ||
          lookahead == 0x490) ADVANCE(109);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 92:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 93:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(25);
      END_STATE();
    case 95:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(93);
      END_STATE();
    case 96:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 'p') ADVANCE(95);
      END_STATE();
    case 97:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 't') ADVANCE(96);
      END_STATE();
    case 98:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 't') ADVANCE(97);
      END_STATE();
    case 99:
      if (eof) ADVANCE(100);
      if (lookahead == '\n') SKIP(99);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '=') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_link);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'h') ADVANCE(19);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__role_name);
      if (set_contains(sym__role_name_character_set_1, 9, lookahead)) ADVANCE(108);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__role_name);
      if (set_contains(sym__role_name_character_set_1, 9, lookahead)) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_nickname);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_part_number);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '*') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      if (lookahead == '*') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_page_real_number);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_text);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=') ADVANCE(47);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_sound);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 99},
  [4] = {.lex_state = 99},
  [5] = {.lex_state = 99},
  [6] = {.lex_state = 99},
  [7] = {.lex_state = 68},
  [8] = {.lex_state = 68},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 99},
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
  [23] = {.lex_state = 68},
  [24] = {.lex_state = 68},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 68},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 68},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 68},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 68},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 57},
  [39] = {.lex_state = 57},
  [40] = {.lex_state = 57},
  [41] = {.lex_state = 57},
  [42] = {.lex_state = 68},
  [43] = {.lex_state = 57},
  [44] = {.lex_state = 57},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 57},
  [47] = {.lex_state = 88},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 68},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__role_name] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_nickname] = ACTIONS(1),
    [sym_part_number] = ACTIONS(1),
    [aux_sym_page_number_token1] = ACTIONS(1),
    [sym_page_real_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym_works] = STATE(7),
    [sym_credits] = STATE(35),
    [sym_role] = STATE(24),
    [sym_part] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(29),
    [aux_sym_works_repeat1] = STATE(28),
    [aux_sym_credits_repeat1] = STATE(31),
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_part_number] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      sym_comment,
    STATE(8), 1,
      sym_works,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(24), 1,
      sym_role,
    STATE(28), 1,
      aux_sym_works_repeat1,
    STATE(31), 1,
      aux_sym_credits_repeat1,
    STATE(34), 1,
      sym_credits,
    STATE(22), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [35] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_page_repeat1,
    ACTIONS(18), 2,
      sym_part_number,
      aux_sym_page_number_token1,
    ACTIONS(15), 4,
      sym_comment,
      sym_text,
      sym_sound,
      sym_separator,
  [52] = 4,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_page_repeat1,
    ACTIONS(24), 2,
      sym_part_number,
      aux_sym_page_number_token1,
    ACTIONS(22), 4,
      sym_comment,
      sym_text,
      sym_sound,
      sym_separator,
  [69] = 4,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_page_repeat1,
    ACTIONS(30), 2,
      sym_part_number,
      aux_sym_page_number_token1,
    ACTIONS(28), 4,
      sym_comment,
      sym_text,
      sym_sound,
      sym_separator,
  [86] = 2,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 6,
      sym_comment,
      sym_part_number,
      aux_sym_page_number_token1,
      sym_text,
      sym_sound,
      sym_separator,
  [98] = 6,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(36), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_role,
    STATE(31), 1,
      aux_sym_credits_repeat1,
    STATE(34), 1,
      sym_credits,
    STATE(22), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [118] = 6,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(36), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_role,
    STATE(31), 1,
      aux_sym_credits_repeat1,
    STATE(37), 1,
      sym_credits,
    STATE(30), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [138] = 4,
    ACTIONS(38), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_POUND,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(41), 4,
      sym_name,
      sym_link,
      sym_part_number,
      aux_sym_page_number_token1,
  [154] = 2,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 6,
      sym_comment,
      sym_part_number,
      aux_sym_page_number_token1,
      sym_text,
      sym_sound,
      sym_separator,
  [166] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_page_number_token1,
    STATE(4), 1,
      sym_page_number,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
    STATE(14), 2,
      sym_page,
      aux_sym_part_repeat1,
  [183] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(51), 1,
      aux_sym_page_number_token1,
    STATE(4), 1,
      sym_page_number,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
  [200] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_link,
    ACTIONS(57), 1,
      anon_sym_POUND,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(53), 2,
      sym_name,
      sym_part_number,
  [217] = 4,
    ACTIONS(51), 1,
      aux_sym_page_number_token1,
    STATE(4), 1,
      sym_page_number,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(16), 2,
      sym_page,
      aux_sym_part_repeat1,
  [232] = 5,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_link,
    ACTIONS(67), 1,
      anon_sym_POUND,
    STATE(13), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(63), 2,
      sym_name,
      sym_part_number,
  [249] = 4,
    ACTIONS(71), 1,
      aux_sym_page_number_token1,
    STATE(4), 1,
      sym_page_number,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(16), 2,
      sym_page,
      aux_sym_part_repeat1,
  [264] = 4,
    ACTIONS(51), 1,
      aux_sym_page_number_token1,
    STATE(4), 1,
      sym_page_number,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(16), 2,
      sym_page,
      aux_sym_part_repeat1,
  [279] = 4,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(53), 2,
      sym_name,
      sym_part_number,
  [293] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_POUND,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(78), 2,
      sym_name,
      sym_part_number,
  [307] = 4,
    ACTIONS(80), 1,
      anon_sym_POUND,
    ACTIONS(82), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(78), 2,
      sym_name,
      sym_part_number,
  [321] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_POUND,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(84), 2,
      sym_name,
      sym_part_number,
  [335] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [346] = 3,
    ACTIONS(90), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(92), 2,
      anon_sym_POUND,
      sym_part_number,
  [357] = 3,
    ACTIONS(94), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(96), 2,
      anon_sym_POUND,
      sym_part_number,
  [368] = 3,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      sym_part_number,
    STATE(25), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [379] = 4,
    ACTIONS(53), 1,
      sym_part_number,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      sym_name,
    STATE(26), 1,
      aux_sym_works_repeat1,
  [392] = 4,
    ACTIONS(92), 1,
      sym_part_number,
    ACTIONS(106), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_role,
    STATE(27), 1,
      aux_sym_credits_repeat1,
  [405] = 4,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(109), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      sym_part_number,
    STATE(26), 1,
      aux_sym_works_repeat1,
  [418] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [429] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [440] = 4,
    ACTIONS(36), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      sym_part_number,
    STATE(24), 1,
      sym_role,
    STATE(27), 1,
      aux_sym_credits_repeat1,
  [453] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [464] = 3,
    ACTIONS(121), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(41), 2,
      anon_sym_POUND,
      sym_part_number,
  [475] = 2,
    ACTIONS(9), 1,
      sym_part_number,
    STATE(30), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [483] = 2,
    ACTIONS(9), 1,
      sym_part_number,
    STATE(22), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [491] = 1,
    ACTIONS(124), 3,
      sym_comment,
      anon_sym_POUND,
      sym_part_number,
  [497] = 2,
    ACTIONS(9), 1,
      sym_part_number,
    STATE(32), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [505] = 3,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_persons_repeat1,
  [515] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_LF,
    STATE(40), 1,
      aux_sym_persons_repeat1,
  [525] = 3,
    ACTIONS(132), 1,
      anon_sym_LF,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_persons_repeat1,
  [535] = 2,
    ACTIONS(137), 1,
      anon_sym_LF,
    ACTIONS(139), 1,
      sym_page_real_number,
  [542] = 2,
    ACTIONS(141), 1,
      sym_nickname,
    STATE(44), 1,
      sym_persons,
  [549] = 2,
    ACTIONS(132), 1,
      anon_sym_LF,
    ACTIONS(143), 1,
      anon_sym_COMMA,
  [556] = 1,
    ACTIONS(145), 1,
      anon_sym_LF,
  [560] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [564] = 1,
    ACTIONS(149), 1,
      anon_sym_LF,
  [568] = 1,
    ACTIONS(151), 1,
      sym__role_name,
  [572] = 1,
    ACTIONS(153), 1,
      anon_sym_COLON,
  [576] = 1,
    ACTIONS(155), 1,
      sym_nickname,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 98,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 138,
  [SMALL_STATE(10)] = 154,
  [SMALL_STATE(11)] = 166,
  [SMALL_STATE(12)] = 183,
  [SMALL_STATE(13)] = 200,
  [SMALL_STATE(14)] = 217,
  [SMALL_STATE(15)] = 232,
  [SMALL_STATE(16)] = 249,
  [SMALL_STATE(17)] = 264,
  [SMALL_STATE(18)] = 279,
  [SMALL_STATE(19)] = 293,
  [SMALL_STATE(20)] = 307,
  [SMALL_STATE(21)] = 321,
  [SMALL_STATE(22)] = 335,
  [SMALL_STATE(23)] = 346,
  [SMALL_STATE(24)] = 357,
  [SMALL_STATE(25)] = 368,
  [SMALL_STATE(26)] = 379,
  [SMALL_STATE(27)] = 392,
  [SMALL_STATE(28)] = 405,
  [SMALL_STATE(29)] = 418,
  [SMALL_STATE(30)] = 429,
  [SMALL_STATE(31)] = 440,
  [SMALL_STATE(32)] = 453,
  [SMALL_STATE(33)] = 464,
  [SMALL_STATE(34)] = 475,
  [SMALL_STATE(35)] = 483,
  [SMALL_STATE(36)] = 491,
  [SMALL_STATE(37)] = 497,
  [SMALL_STATE(38)] = 505,
  [SMALL_STATE(39)] = 515,
  [SMALL_STATE(40)] = 525,
  [SMALL_STATE(41)] = 535,
  [SMALL_STATE(42)] = 542,
  [SMALL_STATE(43)] = 549,
  [SMALL_STATE(44)] = 556,
  [SMALL_STATE(45)] = 560,
  [SMALL_STATE(46)] = 564,
  [SMALL_STATE(47)] = 568,
  [SMALL_STATE(48)] = 572,
  [SMALL_STATE(49)] = 576,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 3, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 3, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_works_repeat1, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_works_repeat1, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 4, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_works_repeat1, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(11),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_works, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_works, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credits, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 5, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
