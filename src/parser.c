#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym_name = 2,
  sym_link = 3,
  anon_sym_POUND = 4,
  anon_sym_COLON = 5,
  anon_sym_LF = 6,
  anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432 = 7,
  anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432 = 8,
  anon_sym_u041au043bu0456u043du0438u0432 = 9,
  anon_sym_u0422u0430u0439u043fu0438u0432 = 10,
  anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430 = 11,
  anon_sym_COMMA = 12,
  sym_person = 13,
  sym_part_number = 14,
  aux_sym_page_number_token1 = 15,
  sym_page_real_number = 16,
  sym_text = 17,
  sym_sound = 18,
  sym_separator = 19,
  sym_source_file = 20,
  sym__work = 21,
  sym__credits = 22,
  sym_credit = 23,
  sym_role = 24,
  sym_persons = 25,
  sym_part = 26,
  sym_page = 27,
  sym_page_number = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_source_file_repeat2 = 30,
  aux_sym_persons_repeat1 = 31,
  aux_sym_part_repeat1 = 32,
  aux_sym_page_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_name] = "name",
  [sym_link] = "link",
  [anon_sym_POUND] = "#",
  [anon_sym_COLON] = ":",
  [anon_sym_LF] = "\n",
  [anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432] = "\u041f\u0435\u0440\u0435\u043a\u043b\u0430\u0434\u0430\u0432",
  [anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432] = "\u0420\u0435\u0434\u0430\u0433\u0443\u0432\u0430\u0432",
  [anon_sym_u041au043bu0456u043du0438u0432] = "\u041a\u043b\u0456\u043d\u0438\u0432",
  [anon_sym_u0422u0430u0439u043fu0438u0432] = "\u0422\u0430\u0439\u043f\u0438\u0432",
  [anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430] = "\u041e\u0431\u043a\u043b\u0430\u0434\u0438\u043d\u043a\u0430",
  [anon_sym_COMMA] = ",",
  [sym_person] = "person",
  [sym_part_number] = "part_number",
  [aux_sym_page_number_token1] = "page_number_token1",
  [sym_page_real_number] = "page_real_number",
  [sym_text] = "text",
  [sym_sound] = "sound",
  [sym_separator] = "separator",
  [sym_source_file] = "source_file",
  [sym__work] = "_work",
  [sym__credits] = "_credits",
  [sym_credit] = "credit",
  [sym_role] = "role",
  [sym_persons] = "persons",
  [sym_part] = "part",
  [sym_page] = "page",
  [sym_page_number] = "page_number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
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
  [anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432] = anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
  [anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432] = anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
  [anon_sym_u041au043bu0456u043du0438u0432] = anon_sym_u041au043bu0456u043du0438u0432,
  [anon_sym_u0422u0430u0439u043fu0438u0432] = anon_sym_u0422u0430u0439u043fu0438u0432,
  [anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430] = anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_person] = sym_person,
  [sym_part_number] = sym_part_number,
  [aux_sym_page_number_token1] = aux_sym_page_number_token1,
  [sym_page_real_number] = sym_page_real_number,
  [sym_text] = sym_text,
  [sym_sound] = sym_sound,
  [sym_separator] = sym_separator,
  [sym_source_file] = sym_source_file,
  [sym__work] = sym__work,
  [sym__credits] = sym__credits,
  [sym_credit] = sym_credit,
  [sym_role] = sym_role,
  [sym_persons] = sym_persons,
  [sym_part] = sym_part,
  [sym_page] = sym_page,
  [sym_page_number] = sym_page_number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
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
  [anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u041au043bu0456u043du0438u0432] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u0422u0430u0439u043fu0438u0432] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_person] = {
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
  [sym__work] = {
    .visible = false,
    .named = true,
  },
  [sym__credits] = {
    .visible = false,
    .named = true,
  },
  [sym_credit] = {
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
};

static TSCharacterRange sym_person_character_set_1[] = {
  {'\'', '\''}, {'-', '-'}, {'1', '9'}, {'A', 'Z'}, {'_', '_'}, {'a', 'z'}, {0x404, 0x404}, {0x406, 0x407},
  {0x410, 0x429}, {0x42c, 0x42c}, {0x42e, 0x449}, {0x44c, 0x44c}, {0x44e, 0x44f}, {0x454, 0x454}, {0x456, 0x457}, {0x490, 0x491},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(130);
      ADVANCE_MAP(
        '#', 135,
        '(', 125,
        ',', 149,
        ':', 137,
        '=', 15,
        0x41a, 177,
        0x41e, 157,
        0x41f, 167,
        0x420, 168,
        0x422, 150,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == 's') ADVANCE(3);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(132);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '*') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '=') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '*') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(187);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(187);
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(187);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '=') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '=') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '=') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '=') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '=') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '=') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '=') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(193);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '=') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '*') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(195);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '(') ADVANCE(125);
      if (lookahead == ',') ADVANCE(149);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(133);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '*') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '*') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(127);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(136);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == 0x41a) ADVANCE(116);
      if (lookahead == 0x41e) ADVANCE(96);
      if (lookahead == 0x41f) ADVANCE(106);
      if (lookahead == 0x420) ADVANCE(107);
      if (lookahead == 0x422) ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(60);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == '=') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '=') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      END_STATE();
    case 63:
      if (lookahead == ')') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 66:
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 70:
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == '*') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == '*') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 73:
      if (lookahead == '*') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == '*') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 76:
      if (lookahead == '/') ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 79:
      if (lookahead == '=') ADVANCE(188);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(19);
      END_STATE();
    case 81:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 82:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 83:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 84:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == 0x430) ADVANCE(112);
      END_STATE();
    case 90:
      if (lookahead == 0x430) ADVANCE(102);
      END_STATE();
    case 91:
      if (lookahead == 0x430) ADVANCE(147);
      END_STATE();
    case 92:
      if (lookahead == 0x430) ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 0x430) ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == 0x430) ADVANCE(100);
      END_STATE();
    case 95:
      if (lookahead == 0x430) ADVANCE(105);
      END_STATE();
    case 96:
      if (lookahead == 0x431) ADVANCE(113);
      END_STATE();
    case 97:
      if (lookahead == 0x432) ADVANCE(143);
      END_STATE();
    case 98:
      if (lookahead == 0x432) ADVANCE(145);
      END_STATE();
    case 99:
      if (lookahead == 0x432) ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == 0x432) ADVANCE(139);
      END_STATE();
    case 101:
      if (lookahead == 0x432) ADVANCE(93);
      END_STATE();
    case 102:
      if (lookahead == 0x433) ADVANCE(123);
      END_STATE();
    case 103:
      if (lookahead == 0x434) ADVANCE(90);
      END_STATE();
    case 104:
      if (lookahead == 0x434) ADVANCE(110);
      END_STATE();
    case 105:
      if (lookahead == 0x434) ADVANCE(94);
      END_STATE();
    case 106:
      if (lookahead == 0x435) ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == 0x435) ADVANCE(103);
      END_STATE();
    case 108:
      if (lookahead == 0x435) ADVANCE(115);
      END_STATE();
    case 109:
      if (lookahead == 0x438) ADVANCE(97);
      END_STATE();
    case 110:
      if (lookahead == 0x438) ADVANCE(120);
      END_STATE();
    case 111:
      if (lookahead == 0x438) ADVANCE(98);
      END_STATE();
    case 112:
      if (lookahead == 0x439) ADVANCE(121);
      END_STATE();
    case 113:
      if (lookahead == 0x43a) ADVANCE(117);
      END_STATE();
    case 114:
      if (lookahead == 0x43a) ADVANCE(91);
      END_STATE();
    case 115:
      if (lookahead == 0x43a) ADVANCE(118);
      END_STATE();
    case 116:
      if (lookahead == 0x43b) ADVANCE(124);
      END_STATE();
    case 117:
      if (lookahead == 0x43b) ADVANCE(92);
      END_STATE();
    case 118:
      if (lookahead == 0x43b) ADVANCE(95);
      END_STATE();
    case 119:
      if (lookahead == 0x43d) ADVANCE(109);
      END_STATE();
    case 120:
      if (lookahead == 0x43d) ADVANCE(114);
      END_STATE();
    case 121:
      if (lookahead == 0x43f) ADVANCE(111);
      END_STATE();
    case 122:
      if (lookahead == 0x440) ADVANCE(108);
      END_STATE();
    case 123:
      if (lookahead == 0x443) ADVANCE(101);
      END_STATE();
    case 124:
      if (lookahead == 0x456) ADVANCE(119);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 128:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 129:
      if (eof) ADVANCE(130);
      if (lookahead == '\n') SKIP(129);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '=') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_link);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == 'h') ADVANCE(7);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(173);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(163);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(148);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(165);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(160);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(161);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(166);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x431) ADVANCE(174);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(144);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(146);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(142);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(140);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(154);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x433) ADVANCE(184);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(151);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(171);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(155);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(183);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(164);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(176);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(158);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(181);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(159);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x439) ADVANCE(182);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(178);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(152);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(179);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(185);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(153);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(156);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43d) ADVANCE(170);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43d) ADVANCE(175);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43f) ADVANCE(172);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x440) ADVANCE(169);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x443) ADVANCE(162);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x456) ADVANCE(180);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_person);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_part_number);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      if (lookahead == '\n') ADVANCE(192);
      if (lookahead == '*') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_page_real_number);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_text);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=') ADVANCE(38);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_sound);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 60},
  [2] = {.lex_state = 60},
  [3] = {.lex_state = 129},
  [4] = {.lex_state = 61},
  [5] = {.lex_state = 61},
  [6] = {.lex_state = 61},
  [7] = {.lex_state = 129},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 61},
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 129},
  [14] = {.lex_state = 129},
  [15] = {.lex_state = 129},
  [16] = {.lex_state = 61},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 60},
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
  [30] = {.lex_state = 61},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 61},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 61},
  [38] = {.lex_state = 48},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 48},
  [41] = {.lex_state = 61},
  [42] = {.lex_state = 62},
  [43] = {.lex_state = 48},
  [44] = {.lex_state = 62},
  [45] = {.lex_state = 48},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 48},
  [49] = {.lex_state = 61},
  [50] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432] = ACTIONS(1),
    [anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432] = ACTIONS(1),
    [anon_sym_u041au043bu0456u043du0438u0432] = ACTIONS(1),
    [anon_sym_u0422u0430u0439u043fu0438u0432] = ACTIONS(1),
    [anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_person] = ACTIONS(1),
    [sym_part_number] = ACTIONS(1),
    [aux_sym_page_number_token1] = ACTIONS(1),
    [sym_page_real_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym__work] = STATE(5),
    [sym__credits] = STATE(6),
    [sym_credit] = STATE(6),
    [sym_part] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_source_file_repeat2] = STATE(26),
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_part_number] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      sym_comment,
    STATE(8), 1,
      sym__work,
    STATE(23), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(9), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [25] = 4,
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
  [42] = 5,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(20), 1,
      sym_comment,
    ACTIONS(22), 1,
      anon_sym_POUND,
    STATE(25), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(11), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [61] = 5,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(22), 1,
      anon_sym_POUND,
    STATE(23), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(9), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [80] = 5,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(22), 1,
      anon_sym_POUND,
    ACTIONS(24), 1,
      sym_comment,
    STATE(23), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(16), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [99] = 4,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym_page_repeat1,
    ACTIONS(30), 2,
      sym_part_number,
      aux_sym_page_number_token1,
    ACTIONS(28), 4,
      sym_comment,
      sym_text,
      sym_sound,
      sym_separator,
  [116] = 5,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(22), 1,
      anon_sym_POUND,
    ACTIONS(32), 1,
      sym_comment,
    STATE(25), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(11), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [135] = 5,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(20), 1,
      sym_comment,
    ACTIONS(22), 1,
      anon_sym_POUND,
    STATE(25), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(16), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [154] = 5,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(22), 1,
      anon_sym_POUND,
    ACTIONS(34), 1,
      sym_comment,
    STATE(29), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(16), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [173] = 5,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(22), 1,
      anon_sym_POUND,
    ACTIONS(36), 1,
      sym_comment,
    STATE(27), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(16), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [192] = 5,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(22), 1,
      anon_sym_POUND,
    ACTIONS(36), 1,
      sym_comment,
    STATE(27), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(10), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [211] = 4,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_page_repeat1,
    ACTIONS(42), 2,
      sym_part_number,
      aux_sym_page_number_token1,
    ACTIONS(40), 4,
      sym_comment,
      sym_text,
      sym_sound,
      sym_separator,
  [228] = 2,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 6,
      sym_comment,
      sym_part_number,
      aux_sym_page_number_token1,
      sym_text,
      sym_sound,
      sym_separator,
  [240] = 2,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 6,
      sym_comment,
      sym_part_number,
      aux_sym_page_number_token1,
      sym_text,
      sym_sound,
      sym_separator,
  [252] = 3,
    ACTIONS(54), 1,
      anon_sym_POUND,
    ACTIONS(52), 2,
      sym_comment,
      sym_part_number,
    STATE(16), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [265] = 4,
    ACTIONS(59), 1,
      aux_sym_page_number_token1,
    STATE(7), 1,
      sym_page_number,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(18), 2,
      sym_page,
      aux_sym_part_repeat1,
  [280] = 4,
    ACTIONS(63), 1,
      aux_sym_page_number_token1,
    STATE(7), 1,
      sym_page_number,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(18), 2,
      sym_page,
      aux_sym_part_repeat1,
  [295] = 2,
    STATE(46), 1,
      sym_role,
    ACTIONS(66), 5,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
  [306] = 4,
    ACTIONS(59), 1,
      aux_sym_page_number_token1,
    STATE(7), 1,
      sym_page_number,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(18), 2,
      sym_page,
      aux_sym_part_repeat1,
  [321] = 4,
    ACTIONS(59), 1,
      aux_sym_page_number_token1,
    ACTIONS(70), 1,
      sym_comment,
    STATE(7), 1,
      sym_page_number,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
  [335] = 3,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      sym_part_number,
    STATE(22), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [346] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [357] = 3,
    ACTIONS(59), 1,
      aux_sym_page_number_token1,
    STATE(7), 1,
      sym_page_number,
    STATE(20), 2,
      sym_page,
      aux_sym_part_repeat1,
  [368] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [379] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [390] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [401] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [412] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [423] = 1,
    ACTIONS(89), 3,
      sym_comment,
      anon_sym_POUND,
      sym_part_number,
  [429] = 2,
    ACTIONS(9), 1,
      sym_part_number,
    STATE(27), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [437] = 1,
    ACTIONS(91), 3,
      sym_comment,
      anon_sym_POUND,
      sym_part_number,
  [443] = 3,
    ACTIONS(93), 1,
      anon_sym_LF,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_persons_repeat1,
  [453] = 2,
    ACTIONS(9), 1,
      sym_part_number,
    STATE(28), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [461] = 2,
    ACTIONS(9), 1,
      sym_part_number,
    STATE(25), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [469] = 2,
    ACTIONS(9), 1,
      sym_part_number,
    STATE(29), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [477] = 1,
    ACTIONS(97), 3,
      sym_comment,
      anon_sym_POUND,
      sym_part_number,
  [483] = 3,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_LF,
    STATE(39), 1,
      aux_sym_persons_repeat1,
  [493] = 3,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_persons_repeat1,
  [503] = 2,
    ACTIONS(106), 1,
      anon_sym_LF,
    ACTIONS(108), 1,
      sym_page_real_number,
  [510] = 2,
    ACTIONS(110), 1,
      sym_person,
    STATE(48), 1,
      sym_persons,
  [517] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_link,
  [524] = 2,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(116), 1,
      anon_sym_COMMA,
  [531] = 1,
    ACTIONS(118), 1,
      sym_link,
  [535] = 1,
    ACTIONS(120), 1,
      anon_sym_LF,
  [539] = 1,
    ACTIONS(122), 1,
      anon_sym_COLON,
  [543] = 1,
    ACTIONS(124), 1,
      anon_sym_COLON,
  [547] = 1,
    ACTIONS(126), 1,
      anon_sym_LF,
  [551] = 1,
    ACTIONS(128), 1,
      sym_person,
  [555] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 61,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 116,
  [SMALL_STATE(9)] = 135,
  [SMALL_STATE(10)] = 154,
  [SMALL_STATE(11)] = 173,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 211,
  [SMALL_STATE(14)] = 228,
  [SMALL_STATE(15)] = 240,
  [SMALL_STATE(16)] = 252,
  [SMALL_STATE(17)] = 265,
  [SMALL_STATE(18)] = 280,
  [SMALL_STATE(19)] = 295,
  [SMALL_STATE(20)] = 306,
  [SMALL_STATE(21)] = 321,
  [SMALL_STATE(22)] = 335,
  [SMALL_STATE(23)] = 346,
  [SMALL_STATE(24)] = 357,
  [SMALL_STATE(25)] = 368,
  [SMALL_STATE(26)] = 379,
  [SMALL_STATE(27)] = 390,
  [SMALL_STATE(28)] = 401,
  [SMALL_STATE(29)] = 412,
  [SMALL_STATE(30)] = 423,
  [SMALL_STATE(31)] = 429,
  [SMALL_STATE(32)] = 437,
  [SMALL_STATE(33)] = 443,
  [SMALL_STATE(34)] = 453,
  [SMALL_STATE(35)] = 461,
  [SMALL_STATE(36)] = 469,
  [SMALL_STATE(37)] = 477,
  [SMALL_STATE(38)] = 483,
  [SMALL_STATE(39)] = 493,
  [SMALL_STATE(40)] = 503,
  [SMALL_STATE(41)] = 510,
  [SMALL_STATE(42)] = 517,
  [SMALL_STATE(43)] = 524,
  [SMALL_STATE(44)] = 531,
  [SMALL_STATE(45)] = 535,
  [SMALL_STATE(46)] = 539,
  [SMALL_STATE(47)] = 543,
  [SMALL_STATE(48)] = 547,
  [SMALL_STATE(49)] = 551,
  [SMALL_STATE(50)] = 555,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(21),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__work, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__work, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit, 5, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
