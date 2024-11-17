#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  anon_sym_POUND = 2,
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
  [anon_sym_COLON] = ":",
  [anon_sym_POUND] = "#",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_POUND] = anon_sym_POUND,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
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
        '#', 53,
        '(', 50,
        '*', 127,
        ',', 83,
        '0', 71,
        ':', 52,
        '=', 7,
        'h', 69,
        0x41a, 111,
        0x41e, 91,
        0x41f, 101,
        0x420, 102,
        0x422, 84,
        '.', 72,
        '/', 72,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ',') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == 0x41a) ADVANCE(40);
      if (lookahead == 0x41e) ADVANCE(20);
      if (lookahead == 0x41f) ADVANCE(30);
      if (lookahead == 0x420) ADVANCE(31);
      if (lookahead == 0x422) ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 8:
      if (lookahead == 'h') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 0x430) ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 0x430) ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 0x430) ADVANCE(81);
      END_STATE();
    case 16:
      if (lookahead == 0x430) ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 0x430) ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 0x430) ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 0x430) ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 0x431) ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 0x432) ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == 0x432) ADVANCE(79);
      END_STATE();
    case 23:
      if (lookahead == 0x432) ADVANCE(75);
      END_STATE();
    case 24:
      if (lookahead == 0x432) ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == 0x432) ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 0x433) ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == 0x434) ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 0x434) ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 0x434) ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 0x435) ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 0x435) ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 0x435) ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 0x438) ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 0x438) ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 0x438) ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 0x439) ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 0x43a) ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 0x43a) ADVANCE(15);
      END_STATE();
    case 39:
      if (lookahead == 0x43a) ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 0x43b) ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 0x43b) ADVANCE(16);
      END_STATE();
    case 42:
      if (lookahead == 0x43b) ADVANCE(19);
      END_STATE();
    case 43:
      if (lookahead == 0x43d) ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == 0x43d) ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == 0x43f) ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 0x440) ADVANCE(32);
      END_STATE();
    case 47:
      if (lookahead == 0x443) ADVANCE(25);
      END_STATE();
    case 48:
      if (lookahead == 0x456) ADVANCE(43);
      END_STATE();
    case 49:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (eof) ADVANCE(51);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_https_COLON_SLASH_SLASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == ':') ADVANCE(5);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(72);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == 'p') ADVANCE(67);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(72);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == 's') ADVANCE(65);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(72);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == 't') ADVANCE(66);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(72);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == 't') ADVANCE(68);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(72);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(72);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(107);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(97);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(82);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(99);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(94);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(95);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(100);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x431) ADVANCE(108);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(78);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(80);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(76);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(74);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(88);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x433) ADVANCE(118);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(85);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(105);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(89);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(117);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(98);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(110);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(92);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(115);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(93);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x439) ADVANCE(116);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(112);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(86);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(113);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(119);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(87);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(90);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43d) ADVANCE(104);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43d) ADVANCE(109);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43f) ADVANCE(106);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x440) ADVANCE(103);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x443) ADVANCE(96);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x456) ADVANCE(114);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_person);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_part_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_page_real_number);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 61},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 61},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 61},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 59},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
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
    [sym_source_file] = STATE(37),
    [sym__work] = STATE(2),
    [sym_credits] = STATE(12),
    [sym__translate] = STATE(9),
    [sym_name] = STATE(32),
    [sym_role] = STATE(53),
    [sym_part] = STATE(25),
    [sym_page] = STATE(9),
    [sym_page_number] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_credits_repeat1] = STATE(5),
    [aux_sym__translate_repeat1] = STATE(9),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432] = ACTIONS(5),
    [anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432] = ACTIONS(5),
    [anon_sym_u041au043bu0456u043du0438u0432] = ACTIONS(5),
    [anon_sym_u0422u0430u0439u043fu0438u0432] = ACTIONS(5),
    [anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430] = ACTIONS(5),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ,
    STATE(3), 1,
      sym_page_number,
    STATE(5), 1,
      aux_sym_credits_repeat1,
    STATE(13), 1,
      sym_credits,
    STATE(25), 1,
      sym_part,
    STATE(53), 1,
      sym_role,
    STATE(7), 4,
      sym__translate,
      sym_page,
      aux_sym_source_file_repeat1,
      aux_sym__translate_repeat1,
    ACTIONS(5), 5,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
  [35] = 6,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym_name_token1,
    ACTIONS(17), 1,
      aux_sym_sound_token1,
    ACTIONS(19), 1,
      sym_separator,
    ACTIONS(15), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(8), 3,
      sym_text,
      sym_sound,
      aux_sym_page_repeat1,
  [57] = 6,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_page_number,
    STATE(25), 1,
      sym_part,
    STATE(11), 4,
      sym__translate,
      sym_page,
      aux_sym_source_file_repeat1,
      aux_sym__translate_repeat1,
  [79] = 5,
    ACTIONS(23), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(25), 1,
      anon_sym_EQ_EQ,
    STATE(10), 1,
      aux_sym_credits_repeat1,
    STATE(53), 1,
      sym_role,
    ACTIONS(5), 5,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
  [99] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym_name_token1,
    ACTIONS(34), 1,
      aux_sym_sound_token1,
    ACTIONS(37), 1,
      sym_separator,
    ACTIONS(32), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(6), 3,
      sym_text,
      sym_sound,
      aux_sym_page_repeat1,
  [121] = 6,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_page_number,
    STATE(25), 1,
      sym_part,
    STATE(11), 4,
      sym__translate,
      sym_page,
      aux_sym_source_file_repeat1,
      aux_sym__translate_repeat1,
  [143] = 6,
    ACTIONS(13), 1,
      aux_sym_name_token1,
    ACTIONS(17), 1,
      aux_sym_sound_token1,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      sym_separator,
    ACTIONS(44), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(6), 3,
      sym_text,
      sym_sound,
      aux_sym_page_repeat1,
  [165] = 6,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_page_number,
    STATE(25), 1,
      sym_part,
    STATE(11), 4,
      sym__translate,
      sym_page,
      aux_sym_source_file_repeat1,
      aux_sym__translate_repeat1,
  [187] = 5,
    ACTIONS(53), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(55), 1,
      anon_sym_EQ_EQ,
    STATE(10), 1,
      aux_sym_credits_repeat1,
    STATE(53), 1,
      sym_role,
    ACTIONS(50), 5,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
  [207] = 6,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(62), 1,
      anon_sym_EQ_EQ,
    STATE(3), 1,
      sym_page_number,
    STATE(25), 1,
      sym_part,
    STATE(11), 4,
      sym__translate,
      sym_page,
      aux_sym_source_file_repeat1,
      aux_sym__translate_repeat1,
  [229] = 5,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ,
    STATE(3), 1,
      sym_page_number,
    STATE(25), 1,
      sym_part,
    STATE(7), 4,
      sym__translate,
      sym_page,
      aux_sym_source_file_repeat1,
      aux_sym__translate_repeat1,
  [248] = 5,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ,
    STATE(3), 1,
      sym_page_number,
    STATE(25), 1,
      sym_part,
    STATE(4), 4,
      sym__translate,
      sym_page,
      aux_sym_source_file_repeat1,
      aux_sym__translate_repeat1,
  [267] = 2,
    ACTIONS(67), 1,
      anon_sym_EQ_EQ,
    ACTIONS(65), 6,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
      anon_sym_EQ_EQ_EQ,
  [279] = 2,
    ACTIONS(71), 1,
      anon_sym_EQ_EQ,
    ACTIONS(69), 6,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
      anon_sym_EQ_EQ_EQ,
  [291] = 2,
    ACTIONS(75), 1,
      anon_sym_EQ_EQ,
    ACTIONS(73), 6,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
      anon_sym_EQ_EQ_EQ,
  [303] = 2,
    ACTIONS(79), 1,
      anon_sym_EQ_EQ,
    ACTIONS(77), 6,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
      anon_sym_EQ_EQ_EQ,
  [315] = 2,
    ACTIONS(83), 1,
      anon_sym_EQ_EQ,
    ACTIONS(81), 6,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
      anon_sym_EQ_EQ_EQ,
  [327] = 4,
    ACTIONS(87), 1,
      anon_sym_EQ_EQ,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(19), 2,
      sym_page,
      aux_sym__translate_repeat1,
  [342] = 2,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 5,
      aux_sym_name_token1,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_separator,
  [353] = 2,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 5,
      aux_sym_name_token1,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_separator,
  [364] = 4,
    ACTIONS(100), 1,
      anon_sym_EQ_EQ,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(19), 2,
      sym_page,
      aux_sym__translate_repeat1,
  [379] = 2,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 5,
      aux_sym_name_token1,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_separator,
  [390] = 2,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 5,
      aux_sym_name_token1,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_separator,
  [401] = 3,
    ACTIONS(110), 1,
      anon_sym_EQ_EQ,
    STATE(3), 1,
      sym_page_number,
    STATE(22), 2,
      sym_page,
      aux_sym__translate_repeat1,
  [412] = 3,
    ACTIONS(112), 1,
      anon_sym_LF,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_persons_repeat1,
  [422] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_LF,
    STATE(28), 1,
      aux_sym_persons_repeat1,
  [432] = 3,
    ACTIONS(118), 1,
      anon_sym_LF,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_persons_repeat1,
  [442] = 2,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(125), 1,
      sym_page_real_number,
  [449] = 2,
    ACTIONS(127), 1,
      sym_person,
    STATE(16), 1,
      sym_persons,
  [456] = 2,
    ACTIONS(118), 1,
      anon_sym_LF,
    ACTIONS(129), 1,
      anon_sym_COMMA,
  [463] = 2,
    ACTIONS(131), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_link,
  [470] = 1,
    ACTIONS(133), 1,
      anon_sym_LF,
  [474] = 1,
    ACTIONS(135), 1,
      aux_sym_link_token1,
  [478] = 1,
    ACTIONS(137), 1,
      anon_sym_https_COLON_SLASH_SLASH,
  [482] = 1,
    ACTIONS(139), 1,
      aux_sym_part_token1,
  [486] = 1,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
  [490] = 1,
    ACTIONS(143), 1,
      aux_sym_part_token1,
  [494] = 1,
    ACTIONS(145), 1,
      aux_sym_name_token1,
  [498] = 1,
    ACTIONS(147), 1,
      anon_sym_EQ_EQ,
  [502] = 1,
    ACTIONS(149), 1,
      anon_sym_LF,
  [506] = 1,
    ACTIONS(151), 1,
      anon_sym_STAR,
  [510] = 1,
    ACTIONS(153), 1,
      anon_sym_LF,
  [514] = 1,
    ACTIONS(155), 1,
      anon_sym_COLON,
  [518] = 1,
    ACTIONS(157), 1,
      sym_person,
  [522] = 1,
    ACTIONS(159), 1,
      anon_sym_LF,
  [526] = 1,
    ACTIONS(161), 1,
      anon_sym_LF,
  [530] = 1,
    ACTIONS(163), 1,
      anon_sym_EQ_EQ_EQ,
  [534] = 1,
    ACTIONS(165), 1,
      anon_sym_EQ_EQ,
  [538] = 1,
    ACTIONS(167), 1,
      anon_sym_POUND,
  [542] = 1,
    ACTIONS(169), 1,
      anon_sym_LF,
  [546] = 1,
    ACTIONS(171), 1,
      aux_sym_part_token1,
  [550] = 1,
    ACTIONS(173), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 99,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 143,
  [SMALL_STATE(9)] = 165,
  [SMALL_STATE(10)] = 187,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 229,
  [SMALL_STATE(13)] = 248,
  [SMALL_STATE(14)] = 267,
  [SMALL_STATE(15)] = 279,
  [SMALL_STATE(16)] = 291,
  [SMALL_STATE(17)] = 303,
  [SMALL_STATE(18)] = 315,
  [SMALL_STATE(19)] = 327,
  [SMALL_STATE(20)] = 342,
  [SMALL_STATE(21)] = 353,
  [SMALL_STATE(22)] = 364,
  [SMALL_STATE(23)] = 379,
  [SMALL_STATE(24)] = 390,
  [SMALL_STATE(25)] = 401,
  [SMALL_STATE(26)] = 412,
  [SMALL_STATE(27)] = 422,
  [SMALL_STATE(28)] = 432,
  [SMALL_STATE(29)] = 442,
  [SMALL_STATE(30)] = 449,
  [SMALL_STATE(31)] = 456,
  [SMALL_STATE(32)] = 463,
  [SMALL_STATE(33)] = 470,
  [SMALL_STATE(34)] = 474,
  [SMALL_STATE(35)] = 478,
  [SMALL_STATE(36)] = 482,
  [SMALL_STATE(37)] = 486,
  [SMALL_STATE(38)] = 490,
  [SMALL_STATE(39)] = 494,
  [SMALL_STATE(40)] = 498,
  [SMALL_STATE(41)] = 502,
  [SMALL_STATE(42)] = 506,
  [SMALL_STATE(43)] = 510,
  [SMALL_STATE(44)] = 514,
  [SMALL_STATE(45)] = 518,
  [SMALL_STATE(46)] = 522,
  [SMALL_STATE(47)] = 526,
  [SMALL_STATE(48)] = 530,
  [SMALL_STATE(49)] = 534,
  [SMALL_STATE(50)] = 538,
  [SMALL_STATE(51)] = 542,
  [SMALL_STATE(52)] = 546,
  [SMALL_STATE(53)] = 550,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credits, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credits, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 4, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 4, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__work, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__work, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_credits_repeat1, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_persons, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_persons, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__translate_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__translate_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 4, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 4, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__translate, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__translate, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 5, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 5, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sound, 4, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [141] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 4, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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
