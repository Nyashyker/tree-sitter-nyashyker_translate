#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 52
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
  [51] = 51,
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
      if (eof) ADVANCE(138);
      ADVANCE_MAP(
        '#', 143,
        '(', 133,
        ',', 157,
        ':', 145,
        '=', 41,
        0x41a, 185,
        0x41e, 165,
        0x41f, 175,
        0x420, 176,
        0x422, 158,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == 's') ADVANCE(3);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(140);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '*') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '*') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '=') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '*') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '*') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '*') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '=') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '=') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '=') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '=') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '=') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '=') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '*') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '*') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '*') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '*') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '*') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 58:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '*') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 60:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 62:
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '=') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 63:
      if (lookahead == '\n') ADVANCE(202);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '=') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 64:
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '*') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 65:
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '*') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 66:
      if (lookahead == '\n') ADVANCE(204);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 67:
      if (lookahead == '\n') ADVANCE(195);
      END_STATE();
    case 68:
      if (lookahead == '\n') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == '\n') ADVANCE(146);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ',') ADVANCE(157);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(69);
      END_STATE();
    case 70:
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == ' ') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == ' ') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 74:
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == 0x41a) ADVANCE(124);
      if (lookahead == 0x41e) ADVANCE(104);
      if (lookahead == 0x41f) ADVANCE(114);
      if (lookahead == 0x420) ADVANCE(115);
      if (lookahead == 0x422) ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74);
      END_STATE();
    case 75:
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '=') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(75);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 76:
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '=') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(76);
      END_STATE();
    case 77:
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '=') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(77);
      END_STATE();
    case 78:
      if (lookahead == ')') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == '*') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '*') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 81:
      if (lookahead == '*') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == '*') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 84:
      if (lookahead == '/') ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(84);
      END_STATE();
    case 86:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 87:
      if (lookahead == '=') ADVANCE(196);
      END_STATE();
    case 88:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 89:
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 90:
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 91:
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 97:
      if (lookahead == 0x430) ADVANCE(120);
      END_STATE();
    case 98:
      if (lookahead == 0x430) ADVANCE(110);
      END_STATE();
    case 99:
      if (lookahead == 0x430) ADVANCE(155);
      END_STATE();
    case 100:
      if (lookahead == 0x430) ADVANCE(112);
      END_STATE();
    case 101:
      if (lookahead == 0x430) ADVANCE(107);
      END_STATE();
    case 102:
      if (lookahead == 0x430) ADVANCE(108);
      END_STATE();
    case 103:
      if (lookahead == 0x430) ADVANCE(113);
      END_STATE();
    case 104:
      if (lookahead == 0x431) ADVANCE(121);
      END_STATE();
    case 105:
      if (lookahead == 0x432) ADVANCE(151);
      END_STATE();
    case 106:
      if (lookahead == 0x432) ADVANCE(153);
      END_STATE();
    case 107:
      if (lookahead == 0x432) ADVANCE(149);
      END_STATE();
    case 108:
      if (lookahead == 0x432) ADVANCE(147);
      END_STATE();
    case 109:
      if (lookahead == 0x432) ADVANCE(101);
      END_STATE();
    case 110:
      if (lookahead == 0x433) ADVANCE(131);
      END_STATE();
    case 111:
      if (lookahead == 0x434) ADVANCE(98);
      END_STATE();
    case 112:
      if (lookahead == 0x434) ADVANCE(118);
      END_STATE();
    case 113:
      if (lookahead == 0x434) ADVANCE(102);
      END_STATE();
    case 114:
      if (lookahead == 0x435) ADVANCE(130);
      END_STATE();
    case 115:
      if (lookahead == 0x435) ADVANCE(111);
      END_STATE();
    case 116:
      if (lookahead == 0x435) ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == 0x438) ADVANCE(105);
      END_STATE();
    case 118:
      if (lookahead == 0x438) ADVANCE(128);
      END_STATE();
    case 119:
      if (lookahead == 0x438) ADVANCE(106);
      END_STATE();
    case 120:
      if (lookahead == 0x439) ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 0x43a) ADVANCE(125);
      END_STATE();
    case 122:
      if (lookahead == 0x43a) ADVANCE(99);
      END_STATE();
    case 123:
      if (lookahead == 0x43a) ADVANCE(126);
      END_STATE();
    case 124:
      if (lookahead == 0x43b) ADVANCE(132);
      END_STATE();
    case 125:
      if (lookahead == 0x43b) ADVANCE(100);
      END_STATE();
    case 126:
      if (lookahead == 0x43b) ADVANCE(103);
      END_STATE();
    case 127:
      if (lookahead == 0x43d) ADVANCE(117);
      END_STATE();
    case 128:
      if (lookahead == 0x43d) ADVANCE(122);
      END_STATE();
    case 129:
      if (lookahead == 0x43f) ADVANCE(119);
      END_STATE();
    case 130:
      if (lookahead == 0x440) ADVANCE(116);
      END_STATE();
    case 131:
      if (lookahead == 0x443) ADVANCE(109);
      END_STATE();
    case 132:
      if (lookahead == 0x456) ADVANCE(127);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 136:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 137:
      if (eof) ADVANCE(138);
      if (lookahead == '\n') SKIP(137);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '=') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_link);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == 'h') ADVANCE(7);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(181);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(171);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(156);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(173);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(168);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(169);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(174);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x431) ADVANCE(182);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(152);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(154);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(150);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(148);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(162);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x433) ADVANCE(192);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(159);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(179);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(163);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(191);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(172);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(184);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(166);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(189);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(167);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x439) ADVANCE(190);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(186);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(160);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(187);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(193);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(161);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(164);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43d) ADVANCE(178);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43d) ADVANCE(183);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43f) ADVANCE(180);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x440) ADVANCE(177);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x443) ADVANCE(170);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x456) ADVANCE(188);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_person);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_part_number);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '*') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_page_real_number);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_text);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=') ADVANCE(57);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_sound);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 74},
  [2] = {.lex_state = 75},
  [3] = {.lex_state = 75},
  [4] = {.lex_state = 75},
  [5] = {.lex_state = 75},
  [6] = {.lex_state = 75},
  [7] = {.lex_state = 75},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 137},
  [15] = {.lex_state = 137},
  [16] = {.lex_state = 137},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 137},
  [20] = {.lex_state = 76},
  [21] = {.lex_state = 75},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 76},
  [24] = {.lex_state = 137},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 74},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 75},
  [30] = {.lex_state = 75},
  [31] = {.lex_state = 76},
  [32] = {.lex_state = 75},
  [33] = {.lex_state = 69},
  [34] = {.lex_state = 69},
  [35] = {.lex_state = 69},
  [36] = {.lex_state = 69},
  [37] = {.lex_state = 75},
  [38] = {.lex_state = 77},
  [39] = {.lex_state = 69},
  [40] = {.lex_state = 75},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 69},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 69},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 76},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
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
    [sym_source_file] = STATE(41),
    [sym__work] = STATE(4),
    [sym__credits] = STATE(3),
    [sym_credit] = STATE(3),
    [sym_part] = STATE(9),
    [sym_page] = STATE(17),
    [sym_page_number] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_source_file_repeat2] = STATE(9),
    [aux_sym_part_repeat1] = STATE(17),
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_part_number] = ACTIONS(9),
    [aux_sym_page_number_token1] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      aux_sym_page_number_token1,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_page_number,
    STATE(12), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
    STATE(7), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [29] = 8,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      aux_sym_page_number_token1,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_comment,
    STATE(15), 1,
      sym_page_number,
    STATE(10), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
    STATE(21), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [58] = 8,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      aux_sym_page_number_token1,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      sym_comment,
    STATE(15), 1,
      sym_page_number,
    STATE(10), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
    STATE(5), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [87] = 8,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      aux_sym_page_number_token1,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_page_number,
    STATE(12), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
    STATE(21), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [116] = 8,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      aux_sym_page_number_token1,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym_comment,
    STATE(15), 1,
      sym_page_number,
    STATE(10), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
    STATE(5), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [145] = 8,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      aux_sym_page_number_token1,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_comment,
    STATE(15), 1,
      sym_page_number,
    STATE(13), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
    STATE(21), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [174] = 7,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      aux_sym_page_number_token1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_comment,
    STATE(15), 1,
      sym_page_number,
    STATE(11), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
  [198] = 7,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      aux_sym_page_number_token1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_comment,
    STATE(15), 1,
      sym_page_number,
    STATE(11), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
  [222] = 7,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      aux_sym_page_number_token1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_comment,
    STATE(15), 1,
      sym_page_number,
    STATE(11), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
  [246] = 6,
    ACTIONS(37), 1,
      sym_part_number,
    ACTIONS(40), 1,
      aux_sym_page_number_token1,
    STATE(15), 1,
      sym_page_number,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(11), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
  [268] = 7,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      aux_sym_page_number_token1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_comment,
    STATE(15), 1,
      sym_page_number,
    STATE(11), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
  [292] = 7,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      aux_sym_page_number_token1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_comment,
    STATE(15), 1,
      sym_page_number,
    STATE(11), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
  [316] = 4,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_page_repeat1,
    ACTIONS(53), 3,
      sym_comment,
      sym_part_number,
      aux_sym_page_number_token1,
    ACTIONS(55), 3,
      sym_text,
      sym_sound,
      sym_separator,
  [333] = 4,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      aux_sym_page_repeat1,
    ACTIONS(59), 3,
      sym_comment,
      sym_part_number,
      aux_sym_page_number_token1,
    ACTIONS(61), 3,
      sym_text,
      sym_sound,
      sym_separator,
  [350] = 4,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_page_repeat1,
    ACTIONS(68), 2,
      sym_part_number,
      aux_sym_page_number_token1,
    ACTIONS(65), 4,
      sym_comment,
      sym_text,
      sym_sound,
      sym_separator,
  [367] = 4,
    STATE(15), 1,
      sym_page_number,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(72), 2,
      sym_part_number,
      aux_sym_page_number_token1,
    STATE(22), 2,
      sym_page,
      aux_sym_part_repeat1,
  [383] = 4,
    STATE(15), 1,
      sym_page_number,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(76), 2,
      sym_part_number,
      aux_sym_page_number_token1,
    STATE(22), 2,
      sym_page,
      aux_sym_part_repeat1,
  [399] = 2,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 6,
      sym_comment,
      sym_part_number,
      aux_sym_page_number_token1,
      sym_text,
      sym_sound,
      sym_separator,
  [411] = 5,
    ACTIONS(82), 1,
      sym_part_number,
    ACTIONS(84), 1,
      aux_sym_page_number_token1,
    STATE(15), 1,
      sym_page_number,
    STATE(12), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
  [429] = 4,
    ACTIONS(86), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_POUND,
    ACTIONS(91), 2,
      sym_part_number,
      aux_sym_page_number_token1,
    STATE(21), 3,
      sym__credits,
      sym_credit,
      aux_sym_source_file_repeat1,
  [445] = 5,
    ACTIONS(95), 1,
      sym_part_number,
    ACTIONS(97), 1,
      aux_sym_page_number_token1,
    STATE(15), 1,
      sym_page_number,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(22), 2,
      sym_page,
      aux_sym_part_repeat1,
  [463] = 5,
    ACTIONS(82), 1,
      sym_part_number,
    ACTIONS(84), 1,
      aux_sym_page_number_token1,
    STATE(15), 1,
      sym_page_number,
    STATE(13), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
  [481] = 2,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 6,
      sym_comment,
      sym_part_number,
      aux_sym_page_number_token1,
      sym_text,
      sym_sound,
      sym_separator,
  [493] = 4,
    STATE(15), 1,
      sym_page_number,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(106), 2,
      sym_part_number,
      aux_sym_page_number_token1,
    STATE(22), 2,
      sym_page,
      aux_sym_part_repeat1,
  [509] = 5,
    ACTIONS(82), 1,
      sym_part_number,
    ACTIONS(84), 1,
      aux_sym_page_number_token1,
    STATE(15), 1,
      sym_page_number,
    STATE(8), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(17), 2,
      sym_page,
      aux_sym_part_repeat1,
  [527] = 2,
    STATE(47), 1,
      sym_role,
    ACTIONS(108), 5,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
  [538] = 4,
    ACTIONS(11), 1,
      aux_sym_page_number_token1,
    ACTIONS(110), 1,
      sym_comment,
    STATE(15), 1,
      sym_page_number,
    STATE(18), 2,
      sym_page,
      aux_sym_part_repeat1,
  [552] = 2,
    ACTIONS(112), 2,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(114), 2,
      sym_part_number,
      aux_sym_page_number_token1,
  [561] = 2,
    ACTIONS(116), 2,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(118), 2,
      sym_part_number,
      aux_sym_page_number_token1,
  [570] = 3,
    ACTIONS(84), 1,
      aux_sym_page_number_token1,
    STATE(15), 1,
      sym_page_number,
    STATE(25), 2,
      sym_page,
      aux_sym_part_repeat1,
  [581] = 2,
    ACTIONS(120), 2,
      sym_comment,
      anon_sym_POUND,
    ACTIONS(122), 2,
      sym_part_number,
      aux_sym_page_number_token1,
  [590] = 3,
    ACTIONS(124), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_persons_repeat1,
  [600] = 3,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_LF,
    STATE(35), 1,
      aux_sym_persons_repeat1,
  [610] = 3,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_persons_repeat1,
  [620] = 2,
    ACTIONS(135), 1,
      anon_sym_LF,
    ACTIONS(137), 1,
      sym_page_real_number,
  [627] = 2,
    ACTIONS(139), 1,
      sym_person,
    STATE(42), 1,
      sym_persons,
  [634] = 2,
    ACTIONS(141), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_link,
  [641] = 2,
    ACTIONS(130), 1,
      anon_sym_LF,
    ACTIONS(145), 1,
      anon_sym_COMMA,
  [648] = 1,
    ACTIONS(147), 1,
      sym_person,
  [652] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [656] = 1,
    ACTIONS(151), 1,
      anon_sym_LF,
  [660] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [664] = 1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
  [668] = 1,
    ACTIONS(153), 1,
      anon_sym_COLON,
  [672] = 1,
    ACTIONS(155), 1,
      anon_sym_LF,
  [676] = 1,
    ACTIONS(157), 1,
      anon_sym_COLON,
  [680] = 1,
    ACTIONS(159), 1,
      sym_link,
  [684] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
  [688] = 1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
  [692] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 198,
  [SMALL_STATE(10)] = 222,
  [SMALL_STATE(11)] = 246,
  [SMALL_STATE(12)] = 268,
  [SMALL_STATE(13)] = 292,
  [SMALL_STATE(14)] = 316,
  [SMALL_STATE(15)] = 333,
  [SMALL_STATE(16)] = 350,
  [SMALL_STATE(17)] = 367,
  [SMALL_STATE(18)] = 383,
  [SMALL_STATE(19)] = 399,
  [SMALL_STATE(20)] = 411,
  [SMALL_STATE(21)] = 429,
  [SMALL_STATE(22)] = 445,
  [SMALL_STATE(23)] = 463,
  [SMALL_STATE(24)] = 481,
  [SMALL_STATE(25)] = 493,
  [SMALL_STATE(26)] = 509,
  [SMALL_STATE(27)] = 527,
  [SMALL_STATE(28)] = 538,
  [SMALL_STATE(29)] = 552,
  [SMALL_STATE(30)] = 561,
  [SMALL_STATE(31)] = 570,
  [SMALL_STATE(32)] = 581,
  [SMALL_STATE(33)] = 590,
  [SMALL_STATE(34)] = 600,
  [SMALL_STATE(35)] = 610,
  [SMALL_STATE(36)] = 620,
  [SMALL_STATE(37)] = 627,
  [SMALL_STATE(38)] = 634,
  [SMALL_STATE(39)] = 641,
  [SMALL_STATE(40)] = 648,
  [SMALL_STATE(41)] = 652,
  [SMALL_STATE(42)] = 656,
  [SMALL_STATE(43)] = 660,
  [SMALL_STATE(44)] = 664,
  [SMALL_STATE(45)] = 668,
  [SMALL_STATE(46)] = 672,
  [SMALL_STATE(47)] = 676,
  [SMALL_STATE(48)] = 680,
  [SMALL_STATE(49)] = 684,
  [SMALL_STATE(50)] = 688,
  [SMALL_STATE(51)] = 692,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(28),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(36),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_part, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_part, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_part, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__work, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__work, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__work, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__work, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit, 5, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit, 5, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
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
