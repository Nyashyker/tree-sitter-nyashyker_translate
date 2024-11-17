#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_POUND = 1,
  anon_sym_COLON = 2,
  aux_sym_name_token1 = 3,
  anon_sym_LF = 4,
  anon_sym_https_COLON_SLASH_SLASH = 5,
  aux_sym_link_token1 = 6,
  anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432 = 7,
  anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432 = 8,
  anon_sym_u041au043bu0456u043du0438u0432 = 9,
  anon_sym_u0422u0430u0439u043fu0438u0432 = 10,
  anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430 = 11,
  anon_sym_COMMA = 12,
  sym_person = 13,
  anon_sym_EQ_EQ_EQ = 14,
  aux_sym_part_token1 = 15,
  anon_sym_EQ_EQ = 16,
  sym_page_real_number = 17,
  aux_sym_sound_token1 = 18,
  anon_sym_STAR = 19,
  sym_separator = 20,
  sym_source_file = 21,
  sym__work = 22,
  sym_credits = 23,
  sym__translate = 24,
  sym_name = 25,
  sym_link = 26,
  sym_role = 27,
  sym_persons = 28,
  sym_part = 29,
  sym_page = 30,
  sym_page_number = 31,
  sym_text = 32,
  sym_sound = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_credits_repeat1 = 35,
  aux_sym__translate_repeat1 = 36,
  aux_sym_persons_repeat1 = 37,
  aux_sym_page_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [anon_sym_COLON] = ":",
  [aux_sym_name_token1] = "name_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_https_COLON_SLASH_SLASH] = "https://",
  [aux_sym_link_token1] = "link_token1",
  [anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432] = "\u041f\u0435\u0440\u0435\u043a\u043b\u0430\u0434\u0430\u0432",
  [anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432] = "\u0420\u0435\u0434\u0430\u0433\u0443\u0432\u0430\u0432",
  [anon_sym_u041au043bu0456u043du0438u0432] = "\u041a\u043b\u0456\u043d\u0438\u0432",
  [anon_sym_u0422u0430u0439u043fu0438u0432] = "\u0422\u0430\u0439\u043f\u0438\u0432",
  [anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430] = "\u041e\u0431\u043a\u043b\u0430\u0434\u0438\u043d\u043a\u0430",
  [anon_sym_COMMA] = ",",
  [sym_person] = "person",
  [anon_sym_EQ_EQ_EQ] = "===",
  [aux_sym_part_token1] = "part_token1",
  [anon_sym_EQ_EQ] = "==",
  [sym_page_real_number] = "page_real_number",
  [aux_sym_sound_token1] = "sound_token1",
  [anon_sym_STAR] = "*",
  [sym_separator] = "separator",
  [sym_source_file] = "source_file",
  [sym__work] = "_work",
  [sym_credits] = "credits",
  [sym__translate] = "_translate",
  [sym_name] = "name",
  [sym_link] = "link",
  [sym_role] = "role",
  [sym_persons] = "persons",
  [sym_part] = "part",
  [sym_page] = "page",
  [sym_page_number] = "page_number",
  [sym_text] = "text",
  [sym_sound] = "sound",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_credits_repeat1] = "credits_repeat1",
  [aux_sym__translate_repeat1] = "_translate_repeat1",
  [aux_sym_persons_repeat1] = "persons_repeat1",
  [aux_sym_page_repeat1] = "page_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_https_COLON_SLASH_SLASH] = anon_sym_https_COLON_SLASH_SLASH,
  [aux_sym_link_token1] = aux_sym_link_token1,
  [anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432] = anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
  [anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432] = anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
  [anon_sym_u041au043bu0456u043du0438u0432] = anon_sym_u041au043bu0456u043du0438u0432,
  [anon_sym_u0422u0430u0439u043fu0438u0432] = anon_sym_u0422u0430u0439u043fu0438u0432,
  [anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430] = anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_person] = sym_person,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [aux_sym_part_token1] = aux_sym_part_token1,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [sym_page_real_number] = sym_page_real_number,
  [aux_sym_sound_token1] = aux_sym_sound_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_separator] = sym_separator,
  [sym_source_file] = sym_source_file,
  [sym__work] = sym__work,
  [sym_credits] = sym_credits,
  [sym__translate] = sym__translate,
  [sym_name] = sym_name,
  [sym_link] = sym_link,
  [sym_role] = sym_role,
  [sym_persons] = sym_persons,
  [sym_part] = sym_part,
  [sym_page] = sym_page,
  [sym_page_number] = sym_page_number,
  [sym_text] = sym_text,
  [sym_sound] = sym_sound,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_credits_repeat1] = aux_sym_credits_repeat1,
  [aux_sym__translate_repeat1] = aux_sym__translate_repeat1,
  [aux_sym_persons_repeat1] = aux_sym_persons_repeat1,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_name_token1] = {
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
  [aux_sym_part_token1] = {
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
  [sym__work] = {
    .visible = false,
    .named = true,
  },
  [sym_credits] = {
    .visible = true,
    .named = true,
  },
  [sym__translate] = {
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
  [aux_sym_credits_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__translate_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_persons_repeat1] = {
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
        '*', 168,
        ',', 124,
        '0', 107,
        ':', 53,
        '=', 6,
        'h', 105,
        0x41a, 152,
        0x41e, 132,
        0x41f, 142,
        0x420, 143,
        0x422, 125,
        '.', 108,
        '/', 108,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ',') ADVANCE(124);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(99);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(165);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
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
      if (lookahead == 0x430) ADVANCE(121);
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
      if (lookahead == 0x432) ADVANCE(115);
      END_STATE();
    case 21:
      if (lookahead == 0x432) ADVANCE(118);
      END_STATE();
    case 22:
      if (lookahead == 0x432) ADVANCE(112);
      END_STATE();
    case 23:
      if (lookahead == 0x432) ADVANCE(109);
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
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 49:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(96);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x41a) ADVANCE(87);
      if (lookahead == 0x41e) ADVANCE(67);
      if (lookahead == 0x41f) ADVANCE(77);
      if (lookahead == 0x420) ADVANCE(78);
      if (lookahead == 0x422) ADVANCE(60);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(96);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x430) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x430) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x430) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x430) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x430) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x430) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x430) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x431) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x432) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x432) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x432) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x432) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x432) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x433) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x434) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x434) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x434) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x435) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x435) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x435) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x438) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x438) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x438) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x439) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x43a) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x43a) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x43a) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x43b) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x43b) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x43b) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x43d) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x43d) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x43f) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x440) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x443) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 0x456) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (eof) ADVANCE(51);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_https_COLON_SLASH_SLASH);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == '0') ADVANCE(107);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(108);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == ':') ADVANCE(4);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(108);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == 'p') ADVANCE(103);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(108);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == 's') ADVANCE(101);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(108);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == 't') ADVANCE(102);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(108);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == 't') ADVANCE(104);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(108);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(108);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(148);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(138);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(122);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(140);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(135);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(136);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(141);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x431) ADVANCE(149);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(116);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(119);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(113);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(110);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(129);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x433) ADVANCE(159);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(126);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(146);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(130);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(158);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(139);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(151);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(133);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(156);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(134);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x439) ADVANCE(157);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(153);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(127);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(154);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(160);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(128);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(131);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43d) ADVANCE(145);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43d) ADVANCE(150);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43f) ADVANCE(147);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x440) ADVANCE(144);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x443) ADVANCE(137);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x456) ADVANCE(155);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_person);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_page_real_number);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 169:
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
  [4] = {.lex_state = 97},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 97},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 97},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 59},
  [13] = {.lex_state = 97},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 97},
  [18] = {.lex_state = 97},
  [19] = {.lex_state = 97},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 48},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 49},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_https_COLON_SLASH_SLASH] = ACTIONS(1),
    [aux_sym_link_token1] = ACTIONS(1),
    [anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432] = ACTIONS(1),
    [anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432] = ACTIONS(1),
    [anon_sym_u041au043bu0456u043du0438u0432] = ACTIONS(1),
    [anon_sym_u0422u0430u0439u043fu0438u0432] = ACTIONS(1),
    [anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_person] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [aux_sym_part_token1] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [sym_page_real_number] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym__work] = STATE(2),
    [sym_credits] = STATE(10),
    [sym__translate] = STATE(5),
    [sym_name] = STATE(31),
    [sym_part] = STATE(21),
    [sym_page] = STATE(5),
    [sym_page_number] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_credits_repeat1] = STATE(22),
    [aux_sym__translate_repeat1] = STATE(5),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(5),
    [anon_sym_EQ_EQ] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(4), 1,
      sym_page_number,
    STATE(11), 1,
      sym_credits,
    STATE(21), 1,
      sym_part,
    STATE(22), 1,
      aux_sym_credits_repeat1,
    STATE(8), 4,
      sym__translate,
      sym_page,
      aux_sym_source_file_repeat1,
      aux_sym__translate_repeat1,
  [28] = 6,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_page_number,
    STATE(21), 1,
      sym_part,
    STATE(7), 4,
      sym__translate,
      sym_page,
      aux_sym_source_file_repeat1,
      aux_sym__translate_repeat1,
  [50] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      aux_sym_name_token1,
    ACTIONS(19), 1,
      aux_sym_sound_token1,
    ACTIONS(21), 1,
      sym_separator,
    ACTIONS(17), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(6), 3,
      sym_text,
      sym_sound,
      aux_sym_page_repeat1,
  [72] = 6,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_page_number,
    STATE(21), 1,
      sym_part,
    STATE(7), 4,
      sym__translate,
      sym_page,
      aux_sym_source_file_repeat1,
      aux_sym__translate_repeat1,
  [94] = 6,
    ACTIONS(15), 1,
      aux_sym_name_token1,
    ACTIONS(19), 1,
      aux_sym_sound_token1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_separator,
    ACTIONS(27), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(9), 3,
      sym_text,
      sym_sound,
      aux_sym_page_repeat1,
  [116] = 6,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(36), 1,
      anon_sym_EQ_EQ,
    STATE(4), 1,
      sym_page_number,
    STATE(21), 1,
      sym_part,
    STATE(7), 4,
      sym__translate,
      sym_page,
      aux_sym_source_file_repeat1,
      aux_sym__translate_repeat1,
  [138] = 6,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_page_number,
    STATE(21), 1,
      sym_part,
    STATE(7), 4,
      sym__translate,
      sym_page,
      aux_sym_source_file_repeat1,
      aux_sym__translate_repeat1,
  [160] = 6,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      aux_sym_name_token1,
    ACTIONS(48), 1,
      aux_sym_sound_token1,
    ACTIONS(51), 1,
      sym_separator,
    ACTIONS(46), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(9), 3,
      sym_text,
      sym_sound,
      aux_sym_page_repeat1,
  [182] = 5,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    STATE(4), 1,
      sym_page_number,
    STATE(21), 1,
      sym_part,
    STATE(8), 4,
      sym__translate,
      sym_page,
      aux_sym_source_file_repeat1,
      aux_sym__translate_repeat1,
  [201] = 5,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    STATE(4), 1,
      sym_page_number,
    STATE(21), 1,
      sym_part,
    STATE(3), 4,
      sym__translate,
      sym_page,
      aux_sym_source_file_repeat1,
      aux_sym__translate_repeat1,
  [220] = 3,
    ACTIONS(54), 1,
      aux_sym_name_token1,
    STATE(36), 1,
      sym_role,
    ACTIONS(56), 5,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
  [234] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 5,
      aux_sym_name_token1,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_separator,
  [245] = 4,
    ACTIONS(64), 1,
      anon_sym_EQ_EQ,
    STATE(4), 1,
      sym_page_number,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(14), 2,
      sym_page,
      aux_sym__translate_repeat1,
  [260] = 2,
    STATE(36), 1,
      sym_role,
    ACTIONS(67), 5,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
  [271] = 4,
    ACTIONS(71), 1,
      anon_sym_EQ_EQ,
    STATE(4), 1,
      sym_page_number,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(14), 2,
      sym_page,
      aux_sym__translate_repeat1,
  [286] = 2,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 5,
      aux_sym_name_token1,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_separator,
  [297] = 2,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 5,
      aux_sym_name_token1,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_separator,
  [308] = 2,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 5,
      aux_sym_name_token1,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_separator,
  [319] = 4,
    ACTIONS(85), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(90), 1,
      anon_sym_EQ_EQ,
    STATE(20), 1,
      aux_sym_credits_repeat1,
  [332] = 3,
    ACTIONS(92), 1,
      anon_sym_EQ_EQ,
    STATE(4), 1,
      sym_page_number,
    STATE(16), 2,
      sym_page,
      aux_sym__translate_repeat1,
  [343] = 4,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(94), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(96), 1,
      anon_sym_EQ_EQ,
    STATE(20), 1,
      aux_sym_credits_repeat1,
  [356] = 2,
    ACTIONS(100), 1,
      anon_sym_EQ_EQ,
    ACTIONS(98), 2,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [364] = 3,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_persons_repeat1,
  [374] = 2,
    ACTIONS(109), 1,
      anon_sym_EQ_EQ,
    ACTIONS(107), 2,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [382] = 3,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_persons_repeat1,
  [392] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym_persons_repeat1,
  [402] = 2,
    ACTIONS(119), 1,
      anon_sym_EQ_EQ,
    ACTIONS(117), 2,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [410] = 2,
    ACTIONS(123), 1,
      anon_sym_EQ_EQ,
    ACTIONS(121), 2,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [418] = 2,
    ACTIONS(127), 1,
      anon_sym_EQ_EQ,
    ACTIONS(125), 2,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [426] = 2,
    ACTIONS(129), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_link,
  [433] = 2,
    ACTIONS(131), 1,
      sym_person,
    STATE(25), 1,
      sym_persons,
  [440] = 2,
    ACTIONS(133), 1,
      anon_sym_LF,
    ACTIONS(135), 1,
      sym_page_real_number,
  [447] = 2,
    ACTIONS(102), 1,
      anon_sym_LF,
    ACTIONS(137), 1,
      anon_sym_COMMA,
  [454] = 1,
    ACTIONS(139), 1,
      aux_sym_part_token1,
  [458] = 1,
    ACTIONS(141), 1,
      anon_sym_COLON,
  [462] = 1,
    ACTIONS(143), 1,
      aux_sym_part_token1,
  [466] = 1,
    ACTIONS(145), 1,
      anon_sym_EQ_EQ,
  [470] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [474] = 1,
    ACTIONS(149), 1,
      anon_sym_https_COLON_SLASH_SLASH,
  [478] = 1,
    ACTIONS(151), 1,
      anon_sym_EQ_EQ,
  [482] = 1,
    ACTIONS(153), 1,
      anon_sym_LF,
  [486] = 1,
    ACTIONS(155), 1,
      anon_sym_LF,
  [490] = 1,
    ACTIONS(157), 1,
      anon_sym_LF,
  [494] = 1,
    ACTIONS(159), 1,
      anon_sym_LF,
  [498] = 1,
    ACTIONS(161), 1,
      anon_sym_EQ_EQ_EQ,
  [502] = 1,
    ACTIONS(163), 1,
      sym_person,
  [506] = 1,
    ACTIONS(165), 1,
      anon_sym_POUND,
  [510] = 1,
    ACTIONS(167), 1,
      aux_sym_part_token1,
  [514] = 1,
    ACTIONS(169), 1,
      anon_sym_LF,
  [518] = 1,
    ACTIONS(171), 1,
      anon_sym_LF,
  [522] = 1,
    ACTIONS(173), 1,
      anon_sym_COLON,
  [526] = 1,
    ACTIONS(175), 1,
      aux_sym_link_token1,
  [530] = 1,
    ACTIONS(177), 1,
      anon_sym_STAR,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 116,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 160,
  [SMALL_STATE(10)] = 182,
  [SMALL_STATE(11)] = 201,
  [SMALL_STATE(12)] = 220,
  [SMALL_STATE(13)] = 234,
  [SMALL_STATE(14)] = 245,
  [SMALL_STATE(15)] = 260,
  [SMALL_STATE(16)] = 271,
  [SMALL_STATE(17)] = 286,
  [SMALL_STATE(18)] = 297,
  [SMALL_STATE(19)] = 308,
  [SMALL_STATE(20)] = 319,
  [SMALL_STATE(21)] = 332,
  [SMALL_STATE(22)] = 343,
  [SMALL_STATE(23)] = 356,
  [SMALL_STATE(24)] = 364,
  [SMALL_STATE(25)] = 374,
  [SMALL_STATE(26)] = 382,
  [SMALL_STATE(27)] = 392,
  [SMALL_STATE(28)] = 402,
  [SMALL_STATE(29)] = 410,
  [SMALL_STATE(30)] = 418,
  [SMALL_STATE(31)] = 426,
  [SMALL_STATE(32)] = 433,
  [SMALL_STATE(33)] = 440,
  [SMALL_STATE(34)] = 447,
  [SMALL_STATE(35)] = 454,
  [SMALL_STATE(36)] = 458,
  [SMALL_STATE(37)] = 462,
  [SMALL_STATE(38)] = 466,
  [SMALL_STATE(39)] = 470,
  [SMALL_STATE(40)] = 474,
  [SMALL_STATE(41)] = 478,
  [SMALL_STATE(42)] = 482,
  [SMALL_STATE(43)] = 486,
  [SMALL_STATE(44)] = 490,
  [SMALL_STATE(45)] = 494,
  [SMALL_STATE(46)] = 498,
  [SMALL_STATE(47)] = 502,
  [SMALL_STATE(48)] = 506,
  [SMALL_STATE(49)] = 510,
  [SMALL_STATE(50)] = 514,
  [SMALL_STATE(51)] = 518,
  [SMALL_STATE(52)] = 522,
  [SMALL_STATE(53)] = 526,
  [SMALL_STATE(54)] = 530,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 4, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 4, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__translate_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__translate_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__translate, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__translate, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 5, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 5, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sound, 4, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credits, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credits, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__work, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__work, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 4, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credits_repeat1, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 4, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_persons, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_persons, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
