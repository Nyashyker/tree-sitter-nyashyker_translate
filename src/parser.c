#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
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
  sym_credit = 22,
  sym_role = 23,
  sym_persons = 24,
  sym_part = 25,
  sym_page = 26,
  sym_page_number = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_source_file_repeat2 = 29,
  aux_sym_persons_repeat1 = 30,
  aux_sym_part_repeat1 = 31,
  aux_sym_page_repeat1 = 32,
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
      if (eof) ADVANCE(109);
      ADVANCE_MAP(
        '\n', 117,
        '#', 114,
        '(', 104,
        ',', 128,
        ':', 116,
        '=', 55,
        0x41a, 156,
        0x41e, 136,
        0x41f, 146,
        0x420, 147,
        0x422, 129,
      );
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == 's') ADVANCE(3);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(111);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(166);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '*') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '*') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '*') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '*') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '*') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '*') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '*') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(112);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '\n', 54,
        '#', 115,
        '=', 61,
        0x41a, 95,
        0x41e, 75,
        0x41f, 85,
        0x420, 86,
        0x422, 68,
      );
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '=') ADVANCE(61);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '#') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '*') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '*') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == ')') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '=') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 51:
      if (lookahead == '/') ADVANCE(107);
      END_STATE();
    case 52:
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == '=') ADVANCE(10);
      END_STATE();
    case 55:
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 56:
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 57:
      if (lookahead == '=') ADVANCE(167);
      END_STATE();
    case 58:
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 59:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == 0x430) ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 0x430) ADVANCE(81);
      END_STATE();
    case 70:
      if (lookahead == 0x430) ADVANCE(126);
      END_STATE();
    case 71:
      if (lookahead == 0x430) ADVANCE(83);
      END_STATE();
    case 72:
      if (lookahead == 0x430) ADVANCE(78);
      END_STATE();
    case 73:
      if (lookahead == 0x430) ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 0x430) ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == 0x431) ADVANCE(92);
      END_STATE();
    case 76:
      if (lookahead == 0x432) ADVANCE(122);
      END_STATE();
    case 77:
      if (lookahead == 0x432) ADVANCE(124);
      END_STATE();
    case 78:
      if (lookahead == 0x432) ADVANCE(120);
      END_STATE();
    case 79:
      if (lookahead == 0x432) ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 0x432) ADVANCE(72);
      END_STATE();
    case 81:
      if (lookahead == 0x433) ADVANCE(102);
      END_STATE();
    case 82:
      if (lookahead == 0x434) ADVANCE(69);
      END_STATE();
    case 83:
      if (lookahead == 0x434) ADVANCE(89);
      END_STATE();
    case 84:
      if (lookahead == 0x434) ADVANCE(73);
      END_STATE();
    case 85:
      if (lookahead == 0x435) ADVANCE(101);
      END_STATE();
    case 86:
      if (lookahead == 0x435) ADVANCE(82);
      END_STATE();
    case 87:
      if (lookahead == 0x435) ADVANCE(94);
      END_STATE();
    case 88:
      if (lookahead == 0x438) ADVANCE(76);
      END_STATE();
    case 89:
      if (lookahead == 0x438) ADVANCE(99);
      END_STATE();
    case 90:
      if (lookahead == 0x438) ADVANCE(77);
      END_STATE();
    case 91:
      if (lookahead == 0x439) ADVANCE(100);
      END_STATE();
    case 92:
      if (lookahead == 0x43a) ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 0x43a) ADVANCE(70);
      END_STATE();
    case 94:
      if (lookahead == 0x43a) ADVANCE(97);
      END_STATE();
    case 95:
      if (lookahead == 0x43b) ADVANCE(103);
      END_STATE();
    case 96:
      if (lookahead == 0x43b) ADVANCE(71);
      END_STATE();
    case 97:
      if (lookahead == 0x43b) ADVANCE(74);
      END_STATE();
    case 98:
      if (lookahead == 0x43d) ADVANCE(88);
      END_STATE();
    case 99:
      if (lookahead == 0x43d) ADVANCE(93);
      END_STATE();
    case 100:
      if (lookahead == 0x43f) ADVANCE(90);
      END_STATE();
    case 101:
      if (lookahead == 0x440) ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == 0x443) ADVANCE(80);
      END_STATE();
    case 103:
      if (lookahead == 0x456) ADVANCE(98);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 107:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 108:
      if (eof) ADVANCE(109);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_link);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == 'h') ADVANCE(7);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '=') ADVANCE(10);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(152);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(142);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(127);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(144);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(139);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(140);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(145);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x431) ADVANCE(153);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(123);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(125);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(121);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(119);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(133);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x433) ADVANCE(163);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(130);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(150);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(134);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(162);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(143);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(155);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(137);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(160);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(138);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x439) ADVANCE(161);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(157);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(131);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(158);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(164);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(132);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(135);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43d) ADVANCE(149);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43d) ADVANCE(154);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43f) ADVANCE(151);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x440) ADVANCE(148);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x443) ADVANCE(141);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x456) ADVANCE(159);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_person);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_part_number);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_page_real_number);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_text);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_sound);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 108},
  [3] = {.lex_state = 108},
  [4] = {.lex_state = 108},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 108},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 108},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 28},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
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
    [sym_source_file] = STATE(27),
    [sym__work] = STATE(6),
    [sym_credit] = STATE(8),
    [sym_part] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_source_file_repeat2] = STATE(14),
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_part_number] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_page_number_token1,
    ACTIONS(18), 1,
      sym_sound,
    STATE(2), 1,
      aux_sym_page_repeat1,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      sym_part_number,
    ACTIONS(15), 2,
      sym_text,
      sym_separator,
  [21] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_page_number_token1,
    ACTIONS(27), 1,
      sym_sound,
    STATE(4), 1,
      aux_sym_page_repeat1,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_part_number,
    ACTIONS(25), 2,
      sym_text,
      sym_separator,
  [42] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym_page_number_token1,
    ACTIONS(35), 1,
      sym_sound,
    STATE(2), 1,
      aux_sym_page_repeat1,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_part_number,
    ACTIONS(33), 2,
      sym_text,
      sym_separator,
  [63] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(29), 1,
      sym_role,
    ACTIONS(37), 5,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
  [77] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    STATE(7), 2,
      sym_credit,
      aux_sym_source_file_repeat1,
    STATE(15), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [95] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    STATE(16), 2,
      sym_credit,
      aux_sym_source_file_repeat1,
    STATE(17), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [113] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(39), 1,
      anon_sym_POUND,
    STATE(15), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(16), 2,
      sym_credit,
      aux_sym_source_file_repeat1,
  [131] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(12), 2,
      sym_page,
      aux_sym_part_repeat1,
  [149] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(9), 2,
      sym_page,
      aux_sym_part_repeat1,
  [167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 2,
      aux_sym_page_number_token1,
      sym_sound,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      sym_part_number,
      sym_text,
      sym_separator,
  [181] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym_page_number_token1,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(12), 2,
      sym_page,
      aux_sym_part_repeat1,
  [199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 2,
      aux_sym_page_number_token1,
      sym_sound,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      sym_part_number,
      sym_text,
      sym_separator,
  [213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [241] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      sym_part_number,
    STATE(16), 2,
      sym_credit,
      aux_sym_source_file_repeat1,
  [255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_part_number,
    STATE(18), 2,
      sym_part,
      aux_sym_source_file_repeat2,
  [283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LF,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_persons_repeat1,
  [296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(80), 1,
      anon_sym_LF,
    STATE(21), 1,
      aux_sym_persons_repeat1,
  [309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_LF,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_persons_repeat1,
  [322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(89), 1,
      sym_page_real_number,
  [332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      anon_sym_POUND,
      sym_part_number,
  [340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_person,
    STATE(32), 1,
      sym_persons,
  [350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      anon_sym_POUND,
      sym_part_number,
  [358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_LF,
    ACTIONS(97), 1,
      anon_sym_COMMA,
  [368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
  [375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COLON,
  [382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_COLON,
  [389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LF,
  [396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_link,
  [403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LF,
  [410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_person,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 77,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 113,
  [SMALL_STATE(9)] = 131,
  [SMALL_STATE(10)] = 149,
  [SMALL_STATE(11)] = 167,
  [SMALL_STATE(12)] = 181,
  [SMALL_STATE(13)] = 199,
  [SMALL_STATE(14)] = 213,
  [SMALL_STATE(15)] = 227,
  [SMALL_STATE(16)] = 241,
  [SMALL_STATE(17)] = 255,
  [SMALL_STATE(18)] = 269,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 296,
  [SMALL_STATE(21)] = 309,
  [SMALL_STATE(22)] = 322,
  [SMALL_STATE(23)] = 332,
  [SMALL_STATE(24)] = 340,
  [SMALL_STATE(25)] = 350,
  [SMALL_STATE(26)] = 358,
  [SMALL_STATE(27)] = 368,
  [SMALL_STATE(28)] = 375,
  [SMALL_STATE(29)] = 382,
  [SMALL_STATE(30)] = 389,
  [SMALL_STATE(31)] = 396,
  [SMALL_STATE(32)] = 403,
  [SMALL_STATE(33)] = 410,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(10),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_persons, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_persons, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__work, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit, 5, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
