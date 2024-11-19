#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
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
  sym_works = 21,
  sym_credits = 22,
  sym_credit = 23,
  sym_role = 24,
  sym_persons = 25,
  sym_part = 26,
  sym_page = 27,
  sym_page_number = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_source_file_repeat2 = 30,
  aux_sym_source_file_repeat3 = 31,
  aux_sym_source_file_repeat4 = 32,
  aux_sym_persons_repeat1 = 33,
  aux_sym_part_repeat1 = 34,
  aux_sym_page_repeat1 = 35,
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
  [sym_works] = "works",
  [sym_credits] = "credits",
  [sym_credit] = "credit",
  [sym_role] = "role",
  [sym_persons] = "persons",
  [sym_part] = "part",
  [sym_page] = "page",
  [sym_page_number] = "page_number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
  [aux_sym_source_file_repeat4] = "source_file_repeat4",
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
  [sym_works] = sym_works,
  [sym_credits] = sym_credits,
  [sym_credit] = sym_credit,
  [sym_role] = sym_role,
  [sym_persons] = sym_persons,
  [sym_part] = sym_part,
  [sym_page] = sym_page,
  [sym_page_number] = sym_page_number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
  [aux_sym_source_file_repeat4] = aux_sym_source_file_repeat4,
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
  [sym_works] = {
    .visible = true,
    .named = true,
  },
  [sym_credits] = {
    .visible = true,
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
  [aux_sym_source_file_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat4] = {
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
  [35] = 9,
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
      if (eof) ADVANCE(118);
      ADVANCE_MAP(
        '#', 122,
        '(', 114,
        ',', 135,
        ':', 123,
        '=', 15,
        0x41a, 163,
        0x41e, 143,
        0x41f, 153,
        0x420, 154,
        0x422, 136,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == 's') ADVANCE(3);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(120);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '*') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '=') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '*') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(173);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '*') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '=') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '*') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '=') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '=') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '=') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '=') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '=') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '=') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(179);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '=') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '*') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead == '*') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(124);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ',') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '*') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == '*') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 53:
      if (lookahead == ' ') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '*') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '*') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == 0x41a) ADVANCE(104);
      if (lookahead == 0x41e) ADVANCE(84);
      if (lookahead == 0x41f) ADVANCE(94);
      if (lookahead == 0x420) ADVANCE(95);
      if (lookahead == 0x422) ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58);
      END_STATE();
    case 59:
      if (lookahead == ')') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 65:
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 66:
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == '*') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 68:
      if (lookahead == '*') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == '*') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == '*') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 72:
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 73:
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 74:
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 75:
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 76:
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == 0x430) ADVANCE(100);
      END_STATE();
    case 78:
      if (lookahead == 0x430) ADVANCE(90);
      END_STATE();
    case 79:
      if (lookahead == 0x430) ADVANCE(133);
      END_STATE();
    case 80:
      if (lookahead == 0x430) ADVANCE(92);
      END_STATE();
    case 81:
      if (lookahead == 0x430) ADVANCE(87);
      END_STATE();
    case 82:
      if (lookahead == 0x430) ADVANCE(88);
      END_STATE();
    case 83:
      if (lookahead == 0x430) ADVANCE(93);
      END_STATE();
    case 84:
      if (lookahead == 0x431) ADVANCE(101);
      END_STATE();
    case 85:
      if (lookahead == 0x432) ADVANCE(129);
      END_STATE();
    case 86:
      if (lookahead == 0x432) ADVANCE(131);
      END_STATE();
    case 87:
      if (lookahead == 0x432) ADVANCE(127);
      END_STATE();
    case 88:
      if (lookahead == 0x432) ADVANCE(125);
      END_STATE();
    case 89:
      if (lookahead == 0x432) ADVANCE(81);
      END_STATE();
    case 90:
      if (lookahead == 0x433) ADVANCE(111);
      END_STATE();
    case 91:
      if (lookahead == 0x434) ADVANCE(78);
      END_STATE();
    case 92:
      if (lookahead == 0x434) ADVANCE(98);
      END_STATE();
    case 93:
      if (lookahead == 0x434) ADVANCE(82);
      END_STATE();
    case 94:
      if (lookahead == 0x435) ADVANCE(110);
      END_STATE();
    case 95:
      if (lookahead == 0x435) ADVANCE(91);
      END_STATE();
    case 96:
      if (lookahead == 0x435) ADVANCE(103);
      END_STATE();
    case 97:
      if (lookahead == 0x438) ADVANCE(85);
      END_STATE();
    case 98:
      if (lookahead == 0x438) ADVANCE(108);
      END_STATE();
    case 99:
      if (lookahead == 0x438) ADVANCE(86);
      END_STATE();
    case 100:
      if (lookahead == 0x439) ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 0x43a) ADVANCE(105);
      END_STATE();
    case 102:
      if (lookahead == 0x43a) ADVANCE(79);
      END_STATE();
    case 103:
      if (lookahead == 0x43a) ADVANCE(106);
      END_STATE();
    case 104:
      if (lookahead == 0x43b) ADVANCE(112);
      END_STATE();
    case 105:
      if (lookahead == 0x43b) ADVANCE(80);
      END_STATE();
    case 106:
      if (lookahead == 0x43b) ADVANCE(83);
      END_STATE();
    case 107:
      if (lookahead == 0x43d) ADVANCE(97);
      END_STATE();
    case 108:
      if (lookahead == 0x43d) ADVANCE(102);
      END_STATE();
    case 109:
      if (lookahead == 0x43f) ADVANCE(99);
      END_STATE();
    case 110:
      if (lookahead == 0x440) ADVANCE(96);
      END_STATE();
    case 111:
      if (lookahead == 0x443) ADVANCE(89);
      END_STATE();
    case 112:
      if (lookahead == 0x456) ADVANCE(107);
      END_STATE();
    case 113:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(113);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 117:
      if (eof) ADVANCE(118);
      if (lookahead == '\n') SKIP(117);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '=') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == 'h') ADVANCE(7);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(159);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(149);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(134);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(151);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(146);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(147);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(152);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x431) ADVANCE(160);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(130);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(132);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(128);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(126);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(140);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x433) ADVANCE(170);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(137);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(157);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(141);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(169);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(150);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(162);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(144);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(167);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(145);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x439) ADVANCE(168);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(164);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(138);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(165);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(171);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(139);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(142);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43d) ADVANCE(156);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43d) ADVANCE(161);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43f) ADVANCE(158);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x440) ADVANCE(155);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x443) ADVANCE(148);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x456) ADVANCE(166);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_person);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_part_number);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '*') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_page_real_number);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_text);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '=') ADVANCE(37);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_sound);
      END_STATE();
    case 181:
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
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 117},
  [6] = {.lex_state = 117},
  [7] = {.lex_state = 117},
  [8] = {.lex_state = 58},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 117},
  [11] = {.lex_state = 58},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 117},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 58},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 58},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 58},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 58},
  [36] = {.lex_state = 47},
  [37] = {.lex_state = 58},
  [38] = {.lex_state = 47},
  [39] = {.lex_state = 47},
  [40] = {.lex_state = 113},
  [41] = {.lex_state = 47},
  [42] = {.lex_state = 47},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 47},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 113},
  [47] = {.lex_state = 47},
  [48] = {.lex_state = 0},
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
    [sym_source_file] = STATE(43),
    [sym_works] = STATE(3),
    [sym_credits] = STATE(8),
    [sym_credit] = STATE(30),
    [sym_part] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_source_file_repeat3] = STATE(8),
    [aux_sym_source_file_repeat4] = STATE(31),
    [sym_comment] = ACTIONS(3),
    [sym_name] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_part_number] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      sym_credit,
    STATE(4), 2,
      sym_works,
      aux_sym_source_file_repeat2,
    STATE(11), 2,
      sym_credits,
      aux_sym_source_file_repeat3,
    STATE(29), 2,
      sym_part,
      aux_sym_source_file_repeat4,
  [31] = 7,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_part_number,
    STATE(30), 1,
      sym_credit,
    STATE(11), 2,
      sym_credits,
      aux_sym_source_file_repeat3,
    STATE(22), 2,
      sym_works,
      aux_sym_source_file_repeat2,
    STATE(29), 2,
      sym_part,
      aux_sym_source_file_repeat4,
  [56] = 7,
    ACTIONS(5), 1,
      sym_name,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_part_number,
    STATE(30), 1,
      sym_credit,
    STATE(12), 2,
      sym_credits,
      aux_sym_source_file_repeat3,
    STATE(22), 2,
      sym_works,
      aux_sym_source_file_repeat2,
    STATE(33), 2,
      sym_part,
      aux_sym_source_file_repeat4,
  [81] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_page_repeat1,
    ACTIONS(17), 2,
      sym_part_number,
      aux_sym_page_number_token1,
    ACTIONS(15), 4,
      sym_comment,
      sym_text,
      sym_sound,
      sym_separator,
  [98] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_page_repeat1,
    ACTIONS(23), 2,
      sym_part_number,
      aux_sym_page_number_token1,
    ACTIONS(21), 4,
      sym_comment,
      sym_text,
      sym_sound,
      sym_separator,
  [115] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_page_repeat1,
    ACTIONS(30), 2,
      sym_part_number,
      aux_sym_page_number_token1,
    ACTIONS(27), 4,
      sym_comment,
      sym_text,
      sym_sound,
      sym_separator,
  [132] = 5,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(32), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_credit,
    STATE(25), 2,
      sym_credits,
      aux_sym_source_file_repeat3,
    STATE(29), 2,
      sym_part,
      aux_sym_source_file_repeat4,
  [150] = 4,
    ACTIONS(34), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(39), 2,
      sym_link,
      anon_sym_POUND,
    ACTIONS(37), 3,
      sym_name,
      sym_part_number,
      aux_sym_page_number_token1,
  [166] = 2,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 6,
      sym_comment,
      sym_part_number,
      aux_sym_page_number_token1,
      sym_text,
      sym_sound,
      sym_separator,
  [178] = 5,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(32), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_credit,
    STATE(25), 2,
      sym_credits,
      aux_sym_source_file_repeat3,
    STATE(33), 2,
      sym_part,
      aux_sym_source_file_repeat4,
  [196] = 5,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(32), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_credit,
    STATE(25), 2,
      sym_credits,
      aux_sym_source_file_repeat3,
    STATE(34), 2,
      sym_part,
      aux_sym_source_file_repeat4,
  [214] = 2,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 6,
      sym_comment,
      sym_part_number,
      aux_sym_page_number_token1,
      sym_text,
      sym_sound,
      sym_separator,
  [226] = 5,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_link,
    ACTIONS(55), 1,
      anon_sym_POUND,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(51), 2,
      sym_name,
      sym_part_number,
  [243] = 2,
    STATE(48), 1,
      sym_role,
    ACTIONS(57), 5,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
  [254] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_link,
    ACTIONS(63), 1,
      anon_sym_POUND,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(59), 2,
      sym_name,
      sym_part_number,
  [271] = 5,
    ACTIONS(65), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_page_number_token1,
    STATE(5), 1,
      sym_page_number,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    STATE(19), 2,
      sym_page,
      aux_sym_part_repeat1,
  [288] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_page_number_token1,
    STATE(5), 1,
      sym_page_number,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(20), 2,
      sym_page,
      aux_sym_part_repeat1,
  [305] = 4,
    ACTIONS(67), 1,
      aux_sym_page_number_token1,
    STATE(5), 1,
      sym_page_number,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(21), 2,
      sym_page,
      aux_sym_part_repeat1,
  [320] = 4,
    ACTIONS(67), 1,
      aux_sym_page_number_token1,
    STATE(5), 1,
      sym_page_number,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(21), 2,
      sym_page,
      aux_sym_part_repeat1,
  [335] = 4,
    ACTIONS(75), 1,
      aux_sym_page_number_token1,
    STATE(5), 1,
      sym_page_number,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(21), 2,
      sym_page,
      aux_sym_part_repeat1,
  [350] = 4,
    ACTIONS(78), 1,
      sym_name,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      sym_part_number,
    STATE(22), 2,
      sym_works,
      aux_sym_source_file_repeat2,
  [364] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_POUND,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(85), 2,
      sym_name,
      sym_part_number,
  [378] = 4,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(59), 2,
      sym_name,
      sym_part_number,
  [392] = 4,
    ACTIONS(91), 1,
      anon_sym_POUND,
    ACTIONS(94), 1,
      sym_part_number,
    STATE(30), 1,
      sym_credit,
    STATE(25), 2,
      sym_credits,
      aux_sym_source_file_repeat3,
  [406] = 4,
    ACTIONS(87), 1,
      anon_sym_POUND,
    ACTIONS(96), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(85), 2,
      sym_name,
      sym_part_number,
  [420] = 4,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_POUND,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(98), 2,
      sym_name,
      sym_part_number,
  [434] = 3,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym_part_number,
    STATE(28), 2,
      sym_part,
      aux_sym_source_file_repeat4,
  [445] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_part,
      aux_sym_source_file_repeat4,
  [456] = 3,
    ACTIONS(109), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(111), 2,
      anon_sym_POUND,
      sym_part_number,
  [467] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_part,
      aux_sym_source_file_repeat4,
  [478] = 3,
    ACTIONS(115), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(117), 2,
      anon_sym_POUND,
      sym_part_number,
  [489] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_part,
      aux_sym_source_file_repeat4,
  [500] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    STATE(28), 2,
      sym_part,
      aux_sym_source_file_repeat4,
  [511] = 3,
    ACTIONS(123), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(37), 2,
      anon_sym_POUND,
      sym_part_number,
  [522] = 3,
    ACTIONS(126), 1,
      anon_sym_LF,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_persons_repeat1,
  [532] = 1,
    ACTIONS(130), 3,
      sym_comment,
      anon_sym_POUND,
      sym_part_number,
  [538] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_LF,
    STATE(39), 1,
      aux_sym_persons_repeat1,
  [548] = 3,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_persons_repeat1,
  [558] = 2,
    ACTIONS(139), 1,
      sym_person,
    STATE(47), 1,
      sym_persons,
  [565] = 2,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(143), 1,
      sym_page_real_number,
  [572] = 2,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(145), 1,
      anon_sym_COMMA,
  [579] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [583] = 1,
    ACTIONS(149), 1,
      anon_sym_LF,
  [587] = 1,
    ACTIONS(151), 1,
      anon_sym_COLON,
  [591] = 1,
    ACTIONS(153), 1,
      sym_person,
  [595] = 1,
    ACTIONS(155), 1,
      anon_sym_LF,
  [599] = 1,
    ACTIONS(157), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 150,
  [SMALL_STATE(10)] = 166,
  [SMALL_STATE(11)] = 178,
  [SMALL_STATE(12)] = 196,
  [SMALL_STATE(13)] = 214,
  [SMALL_STATE(14)] = 226,
  [SMALL_STATE(15)] = 243,
  [SMALL_STATE(16)] = 254,
  [SMALL_STATE(17)] = 271,
  [SMALL_STATE(18)] = 288,
  [SMALL_STATE(19)] = 305,
  [SMALL_STATE(20)] = 320,
  [SMALL_STATE(21)] = 335,
  [SMALL_STATE(22)] = 350,
  [SMALL_STATE(23)] = 364,
  [SMALL_STATE(24)] = 378,
  [SMALL_STATE(25)] = 392,
  [SMALL_STATE(26)] = 406,
  [SMALL_STATE(27)] = 420,
  [SMALL_STATE(28)] = 434,
  [SMALL_STATE(29)] = 445,
  [SMALL_STATE(30)] = 456,
  [SMALL_STATE(31)] = 467,
  [SMALL_STATE(32)] = 478,
  [SMALL_STATE(33)] = 489,
  [SMALL_STATE(34)] = 500,
  [SMALL_STATE(35)] = 511,
  [SMALL_STATE(36)] = 522,
  [SMALL_STATE(37)] = 532,
  [SMALL_STATE(38)] = 538,
  [SMALL_STATE(39)] = 548,
  [SMALL_STATE(40)] = 558,
  [SMALL_STATE(41)] = 565,
  [SMALL_STATE(42)] = 572,
  [SMALL_STATE(43)] = 579,
  [SMALL_STATE(44)] = 583,
  [SMALL_STATE(45)] = 587,
  [SMALL_STATE(46)] = 591,
  [SMALL_STATE(47)] = 595,
  [SMALL_STATE(48)] = 599,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_works, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_works, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_works, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_works, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(14),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_works, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_works, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0), SHIFT_REPEAT(15),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_works, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_works, 4, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat4, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat4, 2, 0, 0), SHIFT_REPEAT(17),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credits, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credits, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit, 5, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
