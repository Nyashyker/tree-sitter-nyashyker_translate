#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_LF = 3,
  anon_sym_https_COLON_SLASH_SLASH = 4,
  aux_sym_link_token1 = 5,
  anon_sym_COLON = 6,
  anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432 = 7,
  anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432 = 8,
  anon_sym_u041au043bu0456u043du0438u0432 = 9,
  anon_sym_u0422u0430u0439u043fu0438u0432 = 10,
  anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430 = 11,
  anon_sym_COMMA = 12,
  sym_person = 13,
  anon_sym_EQ_EQ_EQ = 14,
  aux_sym_part_number_token1 = 15,
  anon_sym_EQ_EQ = 16,
  sym_page_real_number = 17,
  aux_sym_sound_token1 = 18,
  anon_sym_STAR = 19,
  sym_separator = 20,
  sym_source_file = 21,
  sym_comment = 22,
  sym__work = 23,
  sym_name = 24,
  sym_link = 25,
  sym_credit = 26,
  sym_role = 27,
  sym_persons = 28,
  sym_part = 29,
  sym_part_number = 30,
  sym_page = 31,
  sym_page_number = 32,
  sym_text = 33,
  sym_sound = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_source_file_repeat2 = 36,
  aux_sym_persons_repeat1 = 37,
  aux_sym_part_repeat1 = 38,
  aux_sym_page_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_https_COLON_SLASH_SLASH] = "https://",
  [aux_sym_link_token1] = "link_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432] = "\u041f\u0435\u0440\u0435\u043a\u043b\u0430\u0434\u0430\u0432",
  [anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432] = "\u0420\u0435\u0434\u0430\u0433\u0443\u0432\u0430\u0432",
  [anon_sym_u041au043bu0456u043du0438u0432] = "\u041a\u043b\u0456\u043d\u0438\u0432",
  [anon_sym_u0422u0430u0439u043fu0438u0432] = "\u0422\u0430\u0439\u043f\u0438\u0432",
  [anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430] = "\u041e\u0431\u043a\u043b\u0430\u0434\u0438\u043d\u043a\u0430",
  [anon_sym_COMMA] = ",",
  [sym_person] = "person",
  [anon_sym_EQ_EQ_EQ] = "===",
  [aux_sym_part_number_token1] = "part_number_token1",
  [anon_sym_EQ_EQ] = "==",
  [sym_page_real_number] = "page_real_number",
  [aux_sym_sound_token1] = "sound_token1",
  [anon_sym_STAR] = "*",
  [sym_separator] = "separator",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym__work] = "_work",
  [sym_name] = "name",
  [sym_link] = "link",
  [sym_credit] = "credit",
  [sym_role] = "role",
  [sym_persons] = "persons",
  [sym_part] = "part",
  [sym_part_number] = "part_number",
  [sym_page] = "page",
  [sym_page_number] = "page_number",
  [sym_text] = "text",
  [sym_sound] = "sound",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_persons_repeat1] = "persons_repeat1",
  [aux_sym_part_repeat1] = "part_repeat1",
  [aux_sym_page_repeat1] = "page_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_https_COLON_SLASH_SLASH] = anon_sym_https_COLON_SLASH_SLASH,
  [aux_sym_link_token1] = aux_sym_link_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432] = anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
  [anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432] = anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
  [anon_sym_u041au043bu0456u043du0438u0432] = anon_sym_u041au043bu0456u043du0438u0432,
  [anon_sym_u0422u0430u0439u043fu0438u0432] = anon_sym_u0422u0430u0439u043fu0438u0432,
  [anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430] = anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_person] = sym_person,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [aux_sym_part_number_token1] = aux_sym_part_number_token1,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [sym_page_real_number] = sym_page_real_number,
  [aux_sym_sound_token1] = aux_sym_sound_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_separator] = sym_separator,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym__work] = sym__work,
  [sym_name] = sym_name,
  [sym_link] = sym_link,
  [sym_credit] = sym_credit,
  [sym_role] = sym_role,
  [sym_persons] = sym_persons,
  [sym_part] = sym_part,
  [sym_part_number] = sym_part_number,
  [sym_page] = sym_page,
  [sym_page_number] = sym_page_number,
  [sym_text] = sym_text,
  [sym_sound] = sym_sound,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_https_COLON_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_link_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_part_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_page_real_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_sound_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__work] = {
    .visible = false,
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
  [sym_part_number] = {
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
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_sound] = {
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
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
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
      if (eof) ADVANCE(51);
      ADVANCE_MAP(
        '#', 52,
        '(', 50,
        '*', 170,
        ',', 126,
        '0', 108,
        ':', 110,
        '=', 6,
        'h', 106,
        0x41a, 154,
        0x41e, 134,
        0x41f, 144,
        0x420, 145,
        0x422, 127,
        '.', 109,
        '/', 109,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ',') ADVANCE(126);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(167);
      END_STATE();
    case 7:
      if (lookahead == 'h') ADVANCE(11);
      if (lookahead == 0x41a) ADVANCE(39);
      if (lookahead == 0x41e) ADVANCE(19);
      if (lookahead == 0x41f) ADVANCE(29);
      if (lookahead == 0x420) ADVANCE(30);
      if (lookahead == 0x422) ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 0x430) ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 0x430) ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 0x430) ADVANCE(123);
      END_STATE();
    case 15:
      if (lookahead == 0x430) ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 0x430) ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 0x430) ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 0x430) ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 0x431) ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 0x432) ADVANCE(117);
      END_STATE();
    case 21:
      if (lookahead == 0x432) ADVANCE(120);
      END_STATE();
    case 22:
      if (lookahead == 0x432) ADVANCE(114);
      END_STATE();
    case 23:
      if (lookahead == 0x432) ADVANCE(111);
      END_STATE();
    case 24:
      if (lookahead == 0x432) ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 0x433) ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == 0x434) ADVANCE(13);
      END_STATE();
    case 27:
      if (lookahead == 0x434) ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 0x434) ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 0x435) ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 0x435) ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 0x435) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 0x438) ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == 0x438) ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 0x438) ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 0x439) ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 0x43a) ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 0x43a) ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == 0x43a) ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 0x43b) ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 0x43b) ADVANCE(15);
      END_STATE();
    case 41:
      if (lookahead == 0x43b) ADVANCE(18);
      END_STATE();
    case 42:
      if (lookahead == 0x43d) ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 0x43d) ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == 0x43f) ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == 0x440) ADVANCE(31);
      END_STATE();
    case 46:
      if (lookahead == 0x443) ADVANCE(24);
      END_STATE();
    case 47:
      if (lookahead == 0x456) ADVANCE(42);
      END_STATE();
    case 48:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 49:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(97);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '=') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x41a) ADVANCE(87);
      if (lookahead == 0x41e) ADVANCE(67);
      if (lookahead == 0x41f) ADVANCE(77);
      if (lookahead == 0x420) ADVANCE(78);
      if (lookahead == 0x422) ADVANCE(60);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(97);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x430) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x430) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x430) ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x430) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x430) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x430) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x430) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x431) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x432) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x432) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x432) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x432) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x432) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x433) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x434) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x434) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x434) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x435) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x435) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x435) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x438) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x438) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x438) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x439) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43a) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43a) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43a) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43b) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43b) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43b) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43d) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43d) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43f) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x440) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x443) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x456) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (eof) ADVANCE(51);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_https_COLON_SLASH_SLASH);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == '0') ADVANCE(108);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == ':') ADVANCE(4);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(109);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == 'p') ADVANCE(104);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(109);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == 's') ADVANCE(102);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(109);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == 't') ADVANCE(103);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(109);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == 't') ADVANCE(105);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(109);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(109);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(150);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(140);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(124);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(142);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(137);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(138);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(143);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x431) ADVANCE(151);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(118);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(121);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(115);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(112);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(131);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x433) ADVANCE(161);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(128);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(148);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(132);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(160);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(141);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(153);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(135);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(158);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(136);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x439) ADVANCE(159);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(155);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(129);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(156);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(162);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(130);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(133);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43d) ADVANCE(147);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43d) ADVANCE(152);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43f) ADVANCE(149);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x440) ADVANCE(146);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x443) ADVANCE(139);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x456) ADVANCE(157);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_person);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_part_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(164);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_page_real_number);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 98},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 98},
  [7] = {.lex_state = 98},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 59},
  [13] = {.lex_state = 98},
  [14] = {.lex_state = 98},
  [15] = {.lex_state = 98},
  [16] = {.lex_state = 98},
  [17] = {.lex_state = 98},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 96},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 49},
  [57] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_https_COLON_SLASH_SLASH] = ACTIONS(1),
    [aux_sym_link_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432] = ACTIONS(1),
    [anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432] = ACTIONS(1),
    [anon_sym_u041au043bu0456u043du0438u0432] = ACTIONS(1),
    [anon_sym_u0422u0430u0439u043fu0438u0432] = ACTIONS(1),
    [anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_person] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [aux_sym_part_number_token1] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [sym_page_real_number] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym__work] = STATE(3),
    [sym_name] = STATE(33),
    [sym_credit] = STATE(5),
    [sym_part] = STATE(8),
    [sym_part_number] = STATE(23),
    [sym_page] = STATE(18),
    [sym_page_number] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_source_file_repeat2] = STATE(8),
    [aux_sym_part_repeat1] = STATE(18),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(5),
    [anon_sym_EQ_EQ] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      aux_sym_sound_token1,
    ACTIONS(19), 1,
      sym_separator,
    ACTIONS(15), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(6), 4,
      sym_comment,
      sym_text,
      sym_sound,
      aux_sym_page_repeat1,
  [26] = 8,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(21), 1,
      anon_sym_POUND,
    STATE(2), 1,
      sym_page_number,
    STATE(23), 1,
      sym_part_number,
    STATE(4), 2,
      sym_credit,
      aux_sym_source_file_repeat1,
    STATE(9), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(18), 2,
      sym_page,
      aux_sym_part_repeat1,
  [54] = 8,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(21), 1,
      anon_sym_POUND,
    STATE(2), 1,
      sym_page_number,
    STATE(23), 1,
      sym_part_number,
    STATE(10), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(18), 2,
      sym_page,
      aux_sym_part_repeat1,
    STATE(22), 2,
      sym_credit,
      aux_sym_source_file_repeat1,
  [82] = 8,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(21), 1,
      anon_sym_POUND,
    STATE(2), 1,
      sym_page_number,
    STATE(23), 1,
      sym_part_number,
    STATE(9), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(18), 2,
      sym_page,
      aux_sym_part_repeat1,
    STATE(22), 2,
      sym_credit,
      aux_sym_source_file_repeat1,
  [110] = 7,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(17), 1,
      aux_sym_sound_token1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_separator,
    ACTIONS(25), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(7), 4,
      sym_comment,
      sym_text,
      sym_sound,
      aux_sym_page_repeat1,
  [136] = 7,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_POUND,
    ACTIONS(34), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      aux_sym_sound_token1,
    ACTIONS(42), 1,
      sym_separator,
    ACTIONS(37), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(7), 4,
      sym_comment,
      sym_text,
      sym_sound,
      aux_sym_page_repeat1,
  [162] = 7,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_page_number,
    STATE(23), 1,
      sym_part_number,
    STATE(11), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(18), 2,
      sym_page,
      aux_sym_part_repeat1,
  [186] = 7,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_page_number,
    STATE(23), 1,
      sym_part_number,
    STATE(11), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(18), 2,
      sym_page,
      aux_sym_part_repeat1,
  [210] = 7,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_page_number,
    STATE(23), 1,
      sym_part_number,
    STATE(11), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(18), 2,
      sym_page,
      aux_sym_part_repeat1,
  [234] = 7,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(56), 1,
      anon_sym_EQ_EQ,
    STATE(2), 1,
      sym_page_number,
    STATE(23), 1,
      sym_part_number,
    STATE(11), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(18), 2,
      sym_page,
      aux_sym_part_repeat1,
  [258] = 3,
    ACTIONS(59), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_role,
    ACTIONS(61), 5,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
  [272] = 2,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 6,
      anon_sym_POUND,
      aux_sym_comment_token1,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_separator,
  [284] = 2,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 6,
      anon_sym_POUND,
      aux_sym_comment_token1,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_separator,
  [296] = 2,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 6,
      anon_sym_POUND,
      aux_sym_comment_token1,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_separator,
  [308] = 2,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 6,
      anon_sym_POUND,
      aux_sym_comment_token1,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_separator,
  [320] = 2,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 6,
      anon_sym_POUND,
      aux_sym_comment_token1,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_separator,
  [332] = 4,
    ACTIONS(85), 1,
      anon_sym_EQ_EQ,
    STATE(2), 1,
      sym_page_number,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(21), 2,
      sym_page,
      aux_sym_part_repeat1,
  [347] = 2,
    STATE(42), 1,
      sym_role,
    ACTIONS(87), 5,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
  [358] = 4,
    ACTIONS(91), 1,
      anon_sym_EQ_EQ,
    STATE(2), 1,
      sym_page_number,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(21), 2,
      sym_page,
      aux_sym_part_repeat1,
  [373] = 4,
    ACTIONS(95), 1,
      anon_sym_EQ_EQ,
    STATE(2), 1,
      sym_page_number,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(21), 2,
      sym_page,
      aux_sym_part_repeat1,
  [388] = 4,
    ACTIONS(98), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(103), 1,
      anon_sym_EQ_EQ,
    STATE(22), 2,
      sym_credit,
      aux_sym_source_file_repeat1,
  [402] = 3,
    ACTIONS(105), 1,
      anon_sym_EQ_EQ,
    STATE(2), 1,
      sym_page_number,
    STATE(20), 2,
      sym_page,
      aux_sym_part_repeat1,
  [413] = 2,
    ACTIONS(109), 1,
      anon_sym_EQ_EQ,
    ACTIONS(107), 2,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [421] = 2,
    ACTIONS(113), 1,
      anon_sym_EQ_EQ,
    ACTIONS(111), 2,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [429] = 2,
    ACTIONS(117), 1,
      anon_sym_EQ_EQ,
    ACTIONS(115), 2,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [437] = 3,
    ACTIONS(119), 1,
      anon_sym_LF,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_persons_repeat1,
  [447] = 3,
    ACTIONS(124), 1,
      anon_sym_LF,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_persons_repeat1,
  [457] = 2,
    ACTIONS(130), 1,
      anon_sym_EQ_EQ,
    ACTIONS(128), 2,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [465] = 3,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_persons_repeat1,
  [475] = 2,
    ACTIONS(136), 1,
      anon_sym_EQ_EQ,
    ACTIONS(134), 2,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [483] = 2,
    ACTIONS(138), 1,
      sym_person,
    STATE(29), 1,
      sym_persons,
  [490] = 2,
    ACTIONS(140), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_link,
  [497] = 2,
    ACTIONS(142), 1,
      anon_sym_LF,
    ACTIONS(144), 1,
      sym_page_real_number,
  [504] = 2,
    ACTIONS(119), 1,
      anon_sym_LF,
    ACTIONS(146), 1,
      anon_sym_COMMA,
  [511] = 1,
    ACTIONS(148), 1,
      aux_sym_part_number_token1,
  [515] = 1,
    ACTIONS(150), 1,
      aux_sym_comment_token1,
  [519] = 1,
    ACTIONS(152), 1,
      anon_sym_EQ_EQ,
  [523] = 1,
    ACTIONS(154), 1,
      aux_sym_part_number_token1,
  [527] = 1,
    ACTIONS(156), 1,
      anon_sym_LF,
  [531] = 1,
    ACTIONS(158), 1,
      anon_sym_COLON,
  [535] = 1,
    ACTIONS(160), 1,
      anon_sym_COLON,
  [539] = 1,
    ACTIONS(162), 1,
      anon_sym_EQ_EQ,
  [543] = 1,
    ACTIONS(164), 1,
      aux_sym_part_number_token1,
  [547] = 1,
    ACTIONS(166), 1,
      anon_sym_LF,
  [551] = 1,
    ACTIONS(168), 1,
      anon_sym_LF,
  [555] = 1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [559] = 1,
    ACTIONS(172), 1,
      anon_sym_LF,
  [563] = 1,
    ACTIONS(174), 1,
      anon_sym_POUND,
  [567] = 1,
    ACTIONS(176), 1,
      sym_person,
  [571] = 1,
    ACTIONS(178), 1,
      anon_sym_STAR,
  [575] = 1,
    ACTIONS(180), 1,
      anon_sym_https_COLON_SLASH_SLASH,
  [579] = 1,
    ACTIONS(182), 1,
      anon_sym_LF,
  [583] = 1,
    ACTIONS(184), 1,
      anon_sym_LF,
  [587] = 1,
    ACTIONS(186), 1,
      anon_sym_EQ_EQ_EQ,
  [591] = 1,
    ACTIONS(188), 1,
      aux_sym_link_token1,
  [595] = 1,
    ACTIONS(190), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 186,
  [SMALL_STATE(10)] = 210,
  [SMALL_STATE(11)] = 234,
  [SMALL_STATE(12)] = 258,
  [SMALL_STATE(13)] = 272,
  [SMALL_STATE(14)] = 284,
  [SMALL_STATE(15)] = 296,
  [SMALL_STATE(16)] = 308,
  [SMALL_STATE(17)] = 320,
  [SMALL_STATE(18)] = 332,
  [SMALL_STATE(19)] = 347,
  [SMALL_STATE(20)] = 358,
  [SMALL_STATE(21)] = 373,
  [SMALL_STATE(22)] = 388,
  [SMALL_STATE(23)] = 402,
  [SMALL_STATE(24)] = 413,
  [SMALL_STATE(25)] = 421,
  [SMALL_STATE(26)] = 429,
  [SMALL_STATE(27)] = 437,
  [SMALL_STATE(28)] = 447,
  [SMALL_STATE(29)] = 457,
  [SMALL_STATE(30)] = 465,
  [SMALL_STATE(31)] = 475,
  [SMALL_STATE(32)] = 483,
  [SMALL_STATE(33)] = 490,
  [SMALL_STATE(34)] = 497,
  [SMALL_STATE(35)] = 504,
  [SMALL_STATE(36)] = 511,
  [SMALL_STATE(37)] = 515,
  [SMALL_STATE(38)] = 519,
  [SMALL_STATE(39)] = 523,
  [SMALL_STATE(40)] = 527,
  [SMALL_STATE(41)] = 531,
  [SMALL_STATE(42)] = 535,
  [SMALL_STATE(43)] = 539,
  [SMALL_STATE(44)] = 543,
  [SMALL_STATE(45)] = 547,
  [SMALL_STATE(46)] = 551,
  [SMALL_STATE(47)] = 555,
  [SMALL_STATE(48)] = 559,
  [SMALL_STATE(49)] = 563,
  [SMALL_STATE(50)] = 567,
  [SMALL_STATE(51)] = 571,
  [SMALL_STATE(52)] = 575,
  [SMALL_STATE(53)] = 579,
  [SMALL_STATE(54)] = 583,
  [SMALL_STATE(55)] = 587,
  [SMALL_STATE(56)] = 591,
  [SMALL_STATE(57)] = 595,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(39),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(44),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 4, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 5, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 5, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sound, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_part, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_part, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__work, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__work, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 4, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 4, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_persons, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_persons, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part_number, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
