#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
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
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 12,
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
      if (eof) ADVANCE(258);
      if (lookahead == '#') ADVANCE(370);
      if (lookahead == '(') ADVANCE(244);
      if (lookahead == ',') ADVANCE(381);
      if (lookahead == ':') ADVANCE(377);
      if (lookahead == '=') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 0x404 ||
          lookahead == 0x406 ||
          lookahead == 0x407 ||
          (0x410 <= lookahead && lookahead <= 0x429) ||
          lookahead == 0x42e ||
          lookahead == 0x42f ||
          lookahead == 0x490) ADVANCE(379);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(382);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '*') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '=') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '*') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(27);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '=') ADVANCE(207);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(55);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(55);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(25);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(55);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(25);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(29);
      if (lookahead == 't') ADVANCE(38);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(32);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(55);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(46);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(25);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(25);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(38);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(26);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(27);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(40);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(27);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(40);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == 't') ADVANCE(39);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(33);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 't') ADVANCE(40);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(34);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 't') ADVANCE(40);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(34);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(55);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(25);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(27);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(25);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(27);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 't') ADVANCE(40);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(37);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '=') ADVANCE(205);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == ':') ADVANCE(55);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(26);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '=') ADVANCE(230);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '=') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(259);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(383);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '*') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(361);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '\n') SKIP(61);
      if (lookahead == '#') ADVANCE(375);
      if (lookahead == '=') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != 'h') ADVANCE(256);
      END_STATE();
    case 62:
      if (lookahead == '\n') SKIP(61);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead == 't') ADVANCE(256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 63:
      if (lookahead == '\n') SKIP(61);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == 'h') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == 't') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 64:
      if (lookahead == '\n') SKIP(61);
      if (lookahead == '#') ADVANCE(367);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == 'h') ADVANCE(206);
      if (lookahead == 'p') ADVANCE(195);
      if (lookahead == 't') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 65:
      if (lookahead == '\n') SKIP(61);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(89);
      if (lookahead == 't') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 66:
      if (lookahead == '\n') SKIP(61);
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(254);
      if (lookahead == 't') ADVANCE(256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 67:
      if (lookahead == '\n') SKIP(61);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == 'h') ADVANCE(208);
      if (lookahead == 'p') ADVANCE(196);
      if (lookahead == 't') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 68:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == ' ') ADVANCE(72);
      if (lookahead == '/') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(74);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 70:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '/') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(111);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 71:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == ' ') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(111);
      END_STATE();
    case 72:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '=') ADVANCE(108);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(111);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 73:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(111);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(111);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 74:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(111);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(111);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 76:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(111);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(103);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(73);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(98);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 78:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(73);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(98);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(75);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(100);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 80:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(74);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 81:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(74);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 82:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == 't') ADVANCE(101);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(81);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == 't') ADVANCE(101);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(81);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 84:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == 't') ADVANCE(101);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(81);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 85:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead == 't') ADVANCE(100);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(80);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 86:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == 't') ADVANCE(111);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(109);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 87:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == 't') ADVANCE(73);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 88:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == 't') ADVANCE(73);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 89:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == 't') ADVANCE(98);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(85);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 90:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(110);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(111);
      END_STATE();
    case 91:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 't') ADVANCE(103);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(104);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 92:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == 't') ADVANCE(98);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(79);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 93:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == 't') ADVANCE(98);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(79);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 94:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead == 't') ADVANCE(100);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(83);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 95:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 't') ADVANCE(101);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(84);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 96:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 't') ADVANCE(101);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(84);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 97:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 't') ADVANCE(101);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(84);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 98:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(111);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(75);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 99:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(74);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 100:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(73);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(74);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 101:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == ':') ADVANCE(73);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(74);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 102:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 't') ADVANCE(74);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 103:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == ':') ADVANCE(111);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(75);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 104:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(75);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(100);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 105:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead == 't') ADVANCE(100);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(80);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 106:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '=') ADVANCE(111);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(111);
      END_STATE();
    case 107:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '=') ADVANCE(108);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(111);
      END_STATE();
    case 108:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '=') ADVANCE(106);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(111);
      END_STATE();
    case 109:
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == 'p') ADVANCE(111);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(103);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 110:
      if (lookahead == '\n') ADVANCE(260);
      if ((' ' <= lookahead && lookahead <= ',') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(111);
      if (('-' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      if (lookahead == '\n') ADVANCE(260);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(111);
      END_STATE();
    case 112:
      ADVANCE_MAP(
        '\n', 300,
        ' ', 112,
        '#', 363,
        '/', 97,
        ':', 94,
        '=', 41,
        'h', 84,
        'p', 89,
        't', 102,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(112);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 113:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '=') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 114:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead == '*') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 115:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 116:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '-') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 118:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '=') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 119:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '=') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 120:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '=') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 121:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '=') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 122:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '=') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 124:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 125:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 126:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 127:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 128:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 129:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 130:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 131:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 132:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 133:
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 134:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '=') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 135:
      if (lookahead == '\n') ADVANCE(389);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '=') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 136:
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead == '*') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 137:
      if (lookahead == '\n') ADVANCE(390);
      if (lookahead == '*') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 138:
      if (lookahead == '\n') ADVANCE(391);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 139:
      if (lookahead == '\n') ADVANCE(378);
      if (lookahead == '(') ADVANCE(244);
      if (lookahead == ',') ADVANCE(381);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(139);
      END_STATE();
    case 140:
      if (lookahead == '\n') SKIP(140);
      if (lookahead == '#') ADVANCE(371);
      if (lookahead == '=') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != 'h') ADVANCE(256);
      END_STATE();
    case 141:
      if (lookahead == '\n') SKIP(140);
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead == 't') ADVANCE(256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 142:
      if (lookahead == '\n') SKIP(140);
      if (lookahead == '#') ADVANCE(368);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == 'h') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == 't') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 143:
      if (lookahead == '\n') SKIP(140);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == 'h') ADVANCE(206);
      if (lookahead == 'p') ADVANCE(195);
      if (lookahead == 't') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 144:
      if (lookahead == '\n') SKIP(140);
      if (lookahead == '#') ADVANCE(362);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(89);
      if (lookahead == 't') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 145:
      if (lookahead == '\n') SKIP(140);
      if (lookahead == '#') ADVANCE(372);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == 'h') ADVANCE(254);
      if (lookahead == 't') ADVANCE(256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 146:
      if (lookahead == '\n') SKIP(140);
      if (lookahead == '#') ADVANCE(364);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == 'h') ADVANCE(208);
      if (lookahead == 'p') ADVANCE(196);
      if (lookahead == 't') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 147:
      ADVANCE_MAP(
        '\n', 302,
        ' ', 147,
        '#', 362,
        '/', 97,
        ':', 94,
        '=', 41,
        'h', 84,
        'p', 89,
        't', 102,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(147);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 148:
      if (lookahead == '\n') SKIP(148);
      if (lookahead == '#') ADVANCE(375);
      if (lookahead == '=') ADVANCE(227);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != 'h') ADVANCE(256);
      END_STATE();
    case 149:
      if (lookahead == '\n') SKIP(148);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '=') ADVANCE(231);
      if (lookahead == 'h') ADVANCE(237);
      if (lookahead == 't') ADVANCE(256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 150:
      if (lookahead == '\n') SKIP(148);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '=') ADVANCE(222);
      if (lookahead == 'h') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == 't') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 151:
      if (lookahead == '\n') SKIP(148);
      if (lookahead == '#') ADVANCE(367);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '=') ADVANCE(211);
      if (lookahead == 'h') ADVANCE(206);
      if (lookahead == 'p') ADVANCE(195);
      if (lookahead == 't') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 152:
      if (lookahead == '\n') SKIP(148);
      if (lookahead == '#') ADVANCE(363);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(89);
      if (lookahead == 't') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 153:
      if (lookahead == '\n') SKIP(148);
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == 'h') ADVANCE(254);
      if (lookahead == 't') ADVANCE(256);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 154:
      if (lookahead == '\n') SKIP(148);
      if (lookahead == '#') ADVANCE(365);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '=') ADVANCE(213);
      if (lookahead == 'h') ADVANCE(208);
      if (lookahead == 'p') ADVANCE(196);
      if (lookahead == 't') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 155:
      ADVANCE_MAP(
        '\n', 301,
        ' ', 155,
        '#', 363,
        '/', 97,
        ':', 94,
        '=', 95,
        'h', 84,
        'p', 89,
        't', 102,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(155);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 156:
      if (lookahead == ' ') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 'p') ADVANCE(252);
      END_STATE();
    case 158:
      if (lookahead == ' ') ADVANCE(200);
      if (lookahead == ':') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 159:
      if (lookahead == ' ') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '/' || '9' < lookahead)) ADVANCE(249);
      END_STATE();
    case 160:
      if (lookahead == ' ') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '/' || '9' < lookahead)) ADVANCE(73);
      END_STATE();
    case 161:
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 162:
      if (lookahead == ' ') ADVANCE(177);
      if (lookahead == '*') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 163:
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == '=') ADVANCE(171);
      END_STATE();
    case 164:
      if (lookahead == ' ') ADVANCE(198);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ':') ADVANCE(197);
      if (lookahead == 'p') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 165:
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '*') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 166:
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '=') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 167:
      if (lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      if (lookahead == ' ') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '/' || '9' < lookahead)) ADVANCE(111);
      END_STATE();
    case 169:
      if (lookahead == ' ') ADVANCE(180);
      if (lookahead == '*') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 170:
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '*') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 171:
      if (lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 172:
      if (lookahead == ' ') ADVANCE(183);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 173:
      if (lookahead == ')') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 174:
      if (lookahead == '*') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == '*') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 176:
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '=') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 177:
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 178:
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 179:
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 180:
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 181:
      if (lookahead == '*') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 182:
      if (lookahead == '*') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 183:
      if (lookahead == '*') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == '*') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 185:
      if (lookahead == '/') ADVANCE(248);
      END_STATE();
    case 186:
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 187:
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 188:
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 190:
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 191:
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 192:
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(104);
      END_STATE();
    case 193:
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 194:
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 195:
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(192);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 196:
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 197:
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 198:
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 199:
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 200:
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == ':') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(250);
      END_STATE();
    case 201:
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(250);
      END_STATE();
    case 202:
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 203:
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ':') ADVANCE(197);
      if (lookahead == 'p') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 204:
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 205:
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == '=') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(190);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 206:
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead == 'p') ADVANCE(190);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 207:
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 208:
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 209:
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 210:
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 211:
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '=') ADVANCE(207);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 212:
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 213:
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 214:
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 215:
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 216:
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 217:
      if (lookahead == '/') ADVANCE(185);
      END_STATE();
    case 218:
      if (lookahead == ':') ADVANCE(217);
      END_STATE();
    case 219:
      if (lookahead == ':') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 220:
      if (lookahead == ':') ADVANCE(219);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 221:
      if (lookahead == ':') ADVANCE(219);
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 222:
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == '=') ADVANCE(205);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 223:
      if (lookahead == ':') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 224:
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 225:
      if (lookahead == '=') ADVANCE(384);
      END_STATE();
    case 226:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 227:
      if (lookahead == '=') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 't') ADVANCE(254);
      END_STATE();
    case 228:
      if (lookahead == '=') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 't') ADVANCE(253);
      END_STATE();
    case 229:
      if (lookahead == '=') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 't') ADVANCE(237);
      END_STATE();
    case 230:
      if (lookahead == '=') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 231:
      if (lookahead == '=') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(237);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 232:
      if (lookahead == '=') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(111);
      END_STATE();
    case 233:
      if (lookahead == '=') ADVANCE(225);
      END_STATE();
    case 234:
      if (lookahead == '=') ADVANCE(226);
      END_STATE();
    case 235:
      if (lookahead == '=') ADVANCE(234);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 237:
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 238:
      if (lookahead == 'p') ADVANCE(237);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 242:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(242);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(382);
      END_STATE();
    case 243:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(243);
      if (lookahead == 0x404 ||
          lookahead == 0x406 ||
          lookahead == 0x407 ||
          (0x410 <= lookahead && lookahead <= 0x429) ||
          lookahead == 0x42e ||
          lookahead == 0x42f ||
          lookahead == 0x490) ADVANCE(380);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || ':' < lookahead)) ADVANCE(251);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 248:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 249:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(111);
      END_STATE();
    case 250:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(73);
      END_STATE();
    case 251:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(249);
      END_STATE();
    case 252:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(251);
      END_STATE();
    case 253:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 'p') ADVANCE(252);
      END_STATE();
    case 254:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 't') ADVANCE(253);
      END_STATE();
    case 255:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 't') ADVANCE(237);
      END_STATE();
    case 256:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != 't') ADVANCE(254);
      END_STATE();
    case 257:
      if (eof) ADVANCE(258);
      if (lookahead == '\n') SKIP(257);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '=') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(297);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(297);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == 'p') ADVANCE(299);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(295);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == 'p') ADVANCE(282);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(278);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == 'p') ADVANCE(282);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(278);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(279);
      if (lookahead == ':') ADVANCE(295);
      if (lookahead == 'p') ADVANCE(284);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(279);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(283);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(280);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(279);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(283);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(280);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(262);
      if (lookahead == 't') ADVANCE(288);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(265);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(263);
      if (lookahead == 't') ADVANCE(290);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(266);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(264);
      if (lookahead == 't') ADVANCE(289);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(267);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(264);
      if (lookahead == 't') ADVANCE(291);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(267);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(264);
      if (lookahead == 't') ADVANCE(291);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(267);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(90);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(111);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == 's') ADVANCE(294);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(296);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(296);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(261);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(296);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(261);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(296);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(296);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(276);
      if (lookahead == ':') ADVANCE(298);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(276);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(276);
      if (lookahead == ':') ADVANCE(277);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(276);
      if (lookahead == ':') ADVANCE(277);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == 'p') ADVANCE(274);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(277);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(298);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(298);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(298);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(277);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(298);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(277);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(299);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(299);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(299);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(282);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(299);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(282);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == ':') ADVANCE(299);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == 't') ADVANCE(281);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(283);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == ':') ADVANCE(282);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(283);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == ':') ADVANCE(282);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(283);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == ':') ADVANCE(285);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(286);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == ':') ADVANCE(295);
      if (lookahead == 'p') ADVANCE(284);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == ':') ADVANCE(273);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(297);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == ':') ADVANCE(298);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(276);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(111);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(296);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\n') ADVANCE(260);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(298);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '#') ADVANCE(375);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != 'h') ADVANCE(256);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '#') ADVANCE(375);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != 'h') ADVANCE(256);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '#') ADVANCE(371);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != 'h') ADVANCE(256);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(344);
      if (lookahead == 'p') ADVANCE(299);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(344);
      if (lookahead == 'p') ADVANCE(332);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(344);
      if (lookahead == 'p') ADVANCE(282);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(303);
      if (lookahead == 't') ADVANCE(325);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(262);
      if (lookahead == 't') ADVANCE(288);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(324);
      if (lookahead == ':') ADVANCE(298);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(324);
      if (lookahead == ':') ADVANCE(277);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(324);
      if (lookahead == ':') ADVANCE(323);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(250);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == ':') ADVANCE(295);
      if (lookahead == 'p') ADVANCE(284);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == ':') ADVANCE(278);
      if (lookahead == 'p') ADVANCE(283);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == ':') ADVANCE(308);
      if (lookahead == 'p') ADVANCE(333);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(313);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == 'p') ADVANCE(263);
      if (lookahead == 't') ADVANCE(290);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(313);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == 't') ADVANCE(328);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(313);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'p') ADVANCE(305);
      if (lookahead == 't') ADVANCE(329);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(313);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(264);
      if (lookahead == 't') ADVANCE(289);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(313);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(264);
      if (lookahead == 't') ADVANCE(291);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(260);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(185);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(356);
      if (lookahead == 's') ADVANCE(294);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(356);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(356);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(356);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ':') ADVANCE(299);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ':') ADVANCE(332);
      if (lookahead == 't') ADVANCE(331);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(250);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ':') ADVANCE(332);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(250);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == 't') ADVANCE(281);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ':') ADVANCE(282);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(357);
      if (lookahead == 'p') ADVANCE(321);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(357);
      if (lookahead == 'p') ADVANCE(274);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(357);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(357);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(357);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(338);
      if (lookahead == ':') ADVANCE(337);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(250);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(338);
      if (lookahead == ':') ADVANCE(285);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(358);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(358);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '/') ADVANCE(358);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == 'p') ADVANCE(334);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead == 't') ADVANCE(326);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead == 't') ADVANCE(327);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(320);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(260);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(357);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(358);
      if (lookahead == 't') ADVANCE(330);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(358);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ':') ADVANCE(359);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead == 't') ADVANCE(345);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead == 't') ADVANCE(346);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(352);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(357);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(358);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(252);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(343);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(356);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(354);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(350);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(358);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(359);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_name);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(260);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_name);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(356);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_name);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(357);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_name);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(358);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_name);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(359);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_link);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(271);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == 'h') ADVANCE(270);
      if (lookahead == 'p') ADVANCE(268);
      if (lookahead == 't') ADVANCE(292);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(272);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '/') ADVANCE(271);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(268);
      if (lookahead == 't') ADVANCE(292);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(272);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '/') ADVANCE(316);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == 'h') ADVANCE(270);
      if (lookahead == 'p') ADVANCE(268);
      if (lookahead == 't') ADVANCE(292);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '/') ADVANCE(316);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == 'p') ADVANCE(268);
      if (lookahead == 't') ADVANCE(292);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '/') ADVANCE(316);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == 'h') ADVANCE(317);
      if (lookahead == 'p') ADVANCE(307);
      if (lookahead == 't') ADVANCE(336);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '/') ADVANCE(316);
      if (lookahead == ':') ADVANCE(314);
      if (lookahead == 'p') ADVANCE(307);
      if (lookahead == 't') ADVANCE(336);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ':') ADVANCE(342);
      if (lookahead == 'h') ADVANCE(315);
      if (lookahead == 'p') ADVANCE(306);
      if (lookahead == 't') ADVANCE(335);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ':') ADVANCE(342);
      if (lookahead == 'p') ADVANCE(306);
      if (lookahead == 't') ADVANCE(335);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'h') ADVANCE(241);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'h') ADVANCE(353);
      if (lookahead == 't') ADVANCE(360);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'h') ADVANCE(348);
      if (lookahead == 't') ADVANCE(360);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'h') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead == 't') ADVANCE(347);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'p') ADVANCE(349);
      if (lookahead == 't') ADVANCE(347);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 't') ADVANCE(360);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 't') ADVANCE(360);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__role_name);
      if (set_contains(sym__role_name_character_set_1, 9, lookahead)) ADVANCE(379);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(382);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__role_name);
      if (set_contains(sym__role_name_character_set_1, 9, lookahead)) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_nickname);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_part_number);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '*') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_page_real_number);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_text);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=') ADVANCE(129);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_sound);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 61},
  [3] = {.lex_state = 257},
  [4] = {.lex_state = 257},
  [5] = {.lex_state = 257},
  [6] = {.lex_state = 257},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 257},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 140},
  [13] = {.lex_state = 140},
  [14] = {.lex_state = 140},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 61},
  [19] = {.lex_state = 61},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 148},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 148},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 139},
  [40] = {.lex_state = 139},
  [41] = {.lex_state = 139},
  [42] = {.lex_state = 242},
  [43] = {.lex_state = 139},
  [44] = {.lex_state = 139},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 139},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 242},
  [49] = {.lex_state = 243},
  [50] = {.lex_state = 139},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
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
    [sym_works] = STATE(8),
    [sym_credits] = STATE(36),
    [sym_role] = STATE(26),
    [sym_part] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(31),
    [aux_sym_works_repeat1] = STATE(34),
    [aux_sym_credits_repeat1] = STATE(25),
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
    STATE(7), 1,
      sym_works,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    STATE(25), 1,
      aux_sym_credits_repeat1,
    STATE(26), 1,
      sym_role,
    STATE(34), 1,
      aux_sym_works_repeat1,
    STATE(35), 1,
      sym_credits,
    STATE(30), 2,
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
    ACTIONS(36), 1,
      anon_sym_POUND,
    ACTIONS(38), 1,
      sym_part_number,
    STATE(25), 1,
      aux_sym_credits_repeat1,
    STATE(26), 1,
      sym_role,
    STATE(38), 1,
      sym_credits,
    STATE(32), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [118] = 6,
    ACTIONS(36), 1,
      anon_sym_POUND,
    ACTIONS(38), 1,
      sym_part_number,
    STATE(25), 1,
      aux_sym_credits_repeat1,
    STATE(26), 1,
      sym_role,
    STATE(35), 1,
      sym_credits,
    STATE(30), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [138] = 2,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 6,
      sym_comment,
      sym_part_number,
      aux_sym_page_number_token1,
      sym_text,
      sym_sound,
      sym_separator,
  [150] = 5,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(46), 1,
      aux_sym_page_number_token1,
    STATE(4), 1,
      sym_page_number,
    STATE(23), 1,
      aux_sym_source_file_repeat1,
    STATE(16), 2,
      sym_page,
      aux_sym_part_repeat1,
  [167] = 4,
    ACTIONS(46), 1,
      aux_sym_page_number_token1,
    STATE(4), 1,
      sym_page_number,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
  [182] = 3,
    ACTIONS(50), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(53), 4,
      sym_name,
      sym_link,
      anon_sym_POUND,
      sym_part_number,
  [195] = 4,
    ACTIONS(55), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_link,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(57), 3,
      sym_name,
      anon_sym_POUND,
      sym_part_number,
  [210] = 4,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_link,
    STATE(13), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(63), 3,
      sym_name,
      anon_sym_POUND,
      sym_part_number,
  [225] = 5,
    ACTIONS(46), 1,
      aux_sym_page_number_token1,
    ACTIONS(67), 1,
      sym_comment,
    STATE(4), 1,
      sym_page_number,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    STATE(11), 2,
      sym_page,
      aux_sym_part_repeat1,
  [242] = 4,
    ACTIONS(46), 1,
      aux_sym_page_number_token1,
    STATE(4), 1,
      sym_page_number,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
  [257] = 4,
    ACTIONS(73), 1,
      aux_sym_page_number_token1,
    STATE(4), 1,
      sym_page_number,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
  [272] = 3,
    ACTIONS(76), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(53), 3,
      sym_name,
      anon_sym_POUND,
      sym_part_number,
  [284] = 3,
    ACTIONS(79), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(57), 3,
      sym_name,
      anon_sym_POUND,
      sym_part_number,
  [296] = 3,
    ACTIONS(81), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(83), 3,
      sym_name,
      anon_sym_POUND,
      sym_part_number,
  [308] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(83), 3,
      sym_name,
      anon_sym_POUND,
      sym_part_number,
  [320] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(85), 3,
      sym_name,
      anon_sym_POUND,
      sym_part_number,
  [332] = 3,
    ACTIONS(87), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(90), 3,
      anon_sym_POUND,
      sym_part_number,
      aux_sym_page_number_token1,
  [344] = 3,
    ACTIONS(44), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(92), 2,
      anon_sym_POUND,
      sym_part_number,
  [355] = 4,
    ACTIONS(36), 1,
      anon_sym_POUND,
    ACTIONS(94), 1,
      sym_part_number,
    STATE(26), 1,
      sym_role,
    STATE(29), 1,
      aux_sym_credits_repeat1,
  [368] = 3,
    ACTIONS(96), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(98), 2,
      anon_sym_POUND,
      sym_part_number,
  [379] = 3,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      sym_part_number,
    STATE(27), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [390] = 3,
    ACTIONS(105), 1,
      sym_name,
    STATE(28), 1,
      aux_sym_works_repeat1,
    ACTIONS(57), 2,
      anon_sym_POUND,
      sym_part_number,
  [401] = 4,
    ACTIONS(92), 1,
      sym_part_number,
    ACTIONS(108), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_role,
    STATE(29), 1,
      aux_sym_credits_repeat1,
  [414] = 3,
    ACTIONS(38), 1,
      sym_part_number,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [425] = 3,
    ACTIONS(38), 1,
      sym_part_number,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [436] = 3,
    ACTIONS(38), 1,
      sym_part_number,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [447] = 3,
    ACTIONS(38), 1,
      sym_part_number,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [458] = 3,
    ACTIONS(119), 1,
      sym_name,
    STATE(28), 1,
      aux_sym_works_repeat1,
    ACTIONS(121), 2,
      anon_sym_POUND,
      sym_part_number,
  [469] = 2,
    ACTIONS(38), 1,
      sym_part_number,
    STATE(32), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [477] = 2,
    ACTIONS(38), 1,
      sym_part_number,
    STATE(30), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [485] = 1,
    ACTIONS(123), 3,
      sym_comment,
      anon_sym_POUND,
      sym_part_number,
  [491] = 2,
    ACTIONS(38), 1,
      sym_part_number,
    STATE(33), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [499] = 3,
    ACTIONS(125), 1,
      anon_sym_LF,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_persons_repeat1,
  [509] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_LF,
    STATE(41), 1,
      aux_sym_persons_repeat1,
  [519] = 3,
    ACTIONS(131), 1,
      anon_sym_LF,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_persons_repeat1,
  [529] = 2,
    ACTIONS(136), 1,
      sym_nickname,
    STATE(50), 1,
      sym_persons,
  [536] = 2,
    ACTIONS(138), 1,
      anon_sym_LF,
    ACTIONS(140), 1,
      sym_page_real_number,
  [543] = 2,
    ACTIONS(131), 1,
      anon_sym_LF,
    ACTIONS(142), 1,
      anon_sym_COMMA,
  [550] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
  [554] = 1,
    ACTIONS(146), 1,
      anon_sym_LF,
  [558] = 1,
    ACTIONS(148), 1,
      anon_sym_COLON,
  [562] = 1,
    ACTIONS(150), 1,
      sym_nickname,
  [566] = 1,
    ACTIONS(152), 1,
      sym__role_name,
  [570] = 1,
    ACTIONS(154), 1,
      anon_sym_LF,
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
  [SMALL_STATE(10)] = 150,
  [SMALL_STATE(11)] = 167,
  [SMALL_STATE(12)] = 182,
  [SMALL_STATE(13)] = 195,
  [SMALL_STATE(14)] = 210,
  [SMALL_STATE(15)] = 225,
  [SMALL_STATE(16)] = 242,
  [SMALL_STATE(17)] = 257,
  [SMALL_STATE(18)] = 272,
  [SMALL_STATE(19)] = 284,
  [SMALL_STATE(20)] = 296,
  [SMALL_STATE(21)] = 308,
  [SMALL_STATE(22)] = 320,
  [SMALL_STATE(23)] = 332,
  [SMALL_STATE(24)] = 344,
  [SMALL_STATE(25)] = 355,
  [SMALL_STATE(26)] = 368,
  [SMALL_STATE(27)] = 379,
  [SMALL_STATE(28)] = 390,
  [SMALL_STATE(29)] = 401,
  [SMALL_STATE(30)] = 414,
  [SMALL_STATE(31)] = 425,
  [SMALL_STATE(32)] = 436,
  [SMALL_STATE(33)] = 447,
  [SMALL_STATE(34)] = 458,
  [SMALL_STATE(35)] = 469,
  [SMALL_STATE(36)] = 477,
  [SMALL_STATE(37)] = 485,
  [SMALL_STATE(38)] = 491,
  [SMALL_STATE(39)] = 499,
  [SMALL_STATE(40)] = 509,
  [SMALL_STATE(41)] = 519,
  [SMALL_STATE(42)] = 529,
  [SMALL_STATE(43)] = 536,
  [SMALL_STATE(44)] = 543,
  [SMALL_STATE(45)] = 550,
  [SMALL_STATE(46)] = 554,
  [SMALL_STATE(47)] = 558,
  [SMALL_STATE(48)] = 562,
  [SMALL_STATE(49)] = 566,
  [SMALL_STATE(50)] = 570,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 2, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 2, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 3, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 3, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_works_repeat1, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_works_repeat1, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_works_repeat1, 4, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credits, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(15),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_works, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 5, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
