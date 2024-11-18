#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
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
  aux_sym_text_token1 = 18,
  aux_sym_text_token2 = 19,
  aux_sym_text_token3 = 20,
  aux_sym_sound_token1 = 21,
  anon_sym_STAR = 22,
  anon_sym_DASH_DASH_DASH_LF = 23,
  sym_source_file = 24,
  sym_comment = 25,
  sym__work = 26,
  sym_name = 27,
  sym_link = 28,
  sym_credit = 29,
  sym_role = 30,
  sym_persons = 31,
  sym_part = 32,
  sym_part_number = 33,
  sym_page = 34,
  sym_page_number = 35,
  sym_text = 36,
  sym_sound = 37,
  sym_separator = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_source_file_repeat2 = 40,
  aux_sym_persons_repeat1 = 41,
  aux_sym_part_repeat1 = 42,
  aux_sym_page_repeat1 = 43,
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
  [aux_sym_text_token1] = "text_token1",
  [aux_sym_text_token2] = "text_token2",
  [aux_sym_text_token3] = "text_token3",
  [aux_sym_sound_token1] = "sound_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_DASH_DASH_DASH_LF] = "---\n",
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
  [sym_separator] = "separator",
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
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_text_token2] = aux_sym_text_token2,
  [aux_sym_text_token3] = aux_sym_text_token3,
  [aux_sym_sound_token1] = aux_sym_sound_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DASH_DASH_DASH_LF] = anon_sym_DASH_DASH_DASH_LF,
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
  [sym_separator] = sym_separator,
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
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sound_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH_LF] = {
    .visible = true,
    .named = false,
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
  [sym_separator] = {
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
  [58] = 58,
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
        '*', 193,
        ',', 121,
        '0', 103,
        ':', 105,
        '=', 6,
        'h', 101,
        0x41a, 149,
        0x41e, 129,
        0x41f, 139,
        0x420, 140,
        0x422, 122,
        '.', 104,
        '/', 104,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ',') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(95);
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
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
      if (lookahead == 0x41a) ADVANCE(40);
      if (lookahead == 0x41e) ADVANCE(20);
      if (lookahead == 0x41f) ADVANCE(30);
      if (lookahead == 0x420) ADVANCE(31);
      if (lookahead == 0x422) ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 13:
      if (lookahead == 0x430) ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 0x430) ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 0x430) ADVANCE(118);
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
      if (lookahead == 0x432) ADVANCE(112);
      END_STATE();
    case 22:
      if (lookahead == 0x432) ADVANCE(115);
      END_STATE();
    case 23:
      if (lookahead == 0x432) ADVANCE(109);
      END_STATE();
    case 24:
      if (lookahead == 0x432) ADVANCE(106);
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
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
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
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x41a) ADVANCE(83);
      if (lookahead == 0x41e) ADVANCE(63);
      if (lookahead == 0x41f) ADVANCE(73);
      if (lookahead == 0x420) ADVANCE(74);
      if (lookahead == 0x422) ADVANCE(56);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(93);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x430) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x430) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x430) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x430) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x430) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x430) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x430) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x431) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x432) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x432) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x432) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x432) ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x432) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x433) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x434) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x434) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x434) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x435) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x435) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x435) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x438) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x438) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x438) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x439) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43a) ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43a) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43a) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43b) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43b) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43b) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43d) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43d) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x43f) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x440) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x443) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 0x456) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_https_COLON_SLASH_SLASH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(104);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == ':') ADVANCE(4);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(104);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == 'p') ADVANCE(99);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(104);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == 's') ADVANCE(97);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(104);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == 't') ADVANCE(98);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(104);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (lookahead == 't') ADVANCE(100);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(104);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (('.' <= lookahead && lookahead <= '0')) ADVANCE(104);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_link_token1);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_u041au043bu0456u043du0438u0432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_u0422u0430u0439u043fu0438u0432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(145);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(135);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(119);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(137);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(132);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(133);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x430) ADVANCE(138);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x431) ADVANCE(146);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(113);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(116);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(110);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(107);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x432) ADVANCE(126);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x433) ADVANCE(156);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(123);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(143);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x434) ADVANCE(127);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(155);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(136);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x435) ADVANCE(148);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(130);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(153);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x438) ADVANCE(131);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x439) ADVANCE(154);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(150);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(124);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43a) ADVANCE(151);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(157);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(125);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43b) ADVANCE(128);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43d) ADVANCE(142);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43d) ADVANCE(147);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x43f) ADVANCE(144);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x440) ADVANCE(141);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x443) ADVANCE(134);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_person);
      if (lookahead == 0x456) ADVANCE(152);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_person);
      if (set_contains(sym_person_character_set_1, 16, lookahead)) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead == '*') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_part_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '=') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '=') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(159);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_page_real_number);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(177);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(177);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '-') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '-') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '-') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '*') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '=') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(180);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '-') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == '*') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_text_token3);
      if (lookahead == '\n') ADVANCE(194);
      if (lookahead == '*') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_text_token3);
      if (lookahead == '*') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_text_token3);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (lookahead == '*') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (eof) ADVANCE(51);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(178);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_LF);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 192},
  [3] = {.lex_state = 192},
  [4] = {.lex_state = 192},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 192},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 192},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 192},
  [15] = {.lex_state = 192},
  [16] = {.lex_state = 192},
  [17] = {.lex_state = 192},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 49},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 92},
  [51] = {.lex_state = 49},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
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
    [sym_source_file] = STATE(54),
    [sym__work] = STATE(5),
    [sym_name] = STATE(36),
    [sym_credit] = STATE(6),
    [sym_part] = STATE(8),
    [sym_part_number] = STATE(24),
    [sym_page] = STATE(20),
    [sym_page_number] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_source_file_repeat2] = STATE(8),
    [aux_sym_part_repeat1] = STATE(20),
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
    ACTIONS(17), 1,
      aux_sym_sound_token1,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_LF,
    ACTIONS(13), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(15), 3,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
    STATE(4), 5,
      sym_comment,
      sym_text,
      sym_sound,
      sym_separator,
      aux_sym_page_repeat1,
  [29] = 7,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      aux_sym_sound_token1,
    ACTIONS(19), 1,
      anon_sym_DASH_DASH_DASH_LF,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(15), 3,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
    STATE(2), 5,
      sym_comment,
      sym_text,
      sym_sound,
      sym_separator,
      aux_sym_page_repeat1,
  [58] = 7,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      aux_sym_sound_token1,
    ACTIONS(38), 1,
      anon_sym_DASH_DASH_DASH_LF,
    ACTIONS(30), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(32), 3,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
    STATE(4), 5,
      sym_comment,
      sym_text,
      sym_sound,
      sym_separator,
      aux_sym_page_repeat1,
  [87] = 8,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(41), 1,
      anon_sym_POUND,
    STATE(3), 1,
      sym_page_number,
    STATE(24), 1,
      sym_part_number,
    STATE(7), 2,
      sym_credit,
      aux_sym_source_file_repeat1,
    STATE(10), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(20), 2,
      sym_page,
      aux_sym_part_repeat1,
  [115] = 8,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(41), 1,
      anon_sym_POUND,
    STATE(3), 1,
      sym_page_number,
    STATE(24), 1,
      sym_part_number,
    STATE(10), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(20), 2,
      sym_page,
      aux_sym_part_repeat1,
    STATE(23), 2,
      sym_credit,
      aux_sym_source_file_repeat1,
  [143] = 8,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(41), 1,
      anon_sym_POUND,
    STATE(3), 1,
      sym_page_number,
    STATE(24), 1,
      sym_part_number,
    STATE(12), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(20), 2,
      sym_page,
      aux_sym_part_repeat1,
    STATE(23), 2,
      sym_credit,
      aux_sym_source_file_repeat1,
  [171] = 7,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_page_number,
    STATE(24), 1,
      sym_part_number,
    STATE(13), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(20), 2,
      sym_page,
      aux_sym_part_repeat1,
  [195] = 2,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 8,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_sound_token1,
      anon_sym_DASH_DASH_DASH_LF,
  [209] = 7,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_page_number,
    STATE(24), 1,
      sym_part_number,
    STATE(13), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(20), 2,
      sym_page,
      aux_sym_part_repeat1,
  [233] = 2,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 8,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_sound_token1,
      anon_sym_DASH_DASH_DASH_LF,
  [247] = 7,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_page_number,
    STATE(24), 1,
      sym_part_number,
    STATE(13), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(20), 2,
      sym_page,
      aux_sym_part_repeat1,
  [271] = 7,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(62), 1,
      anon_sym_EQ_EQ,
    STATE(3), 1,
      sym_page_number,
    STATE(24), 1,
      sym_part_number,
    STATE(13), 2,
      sym_part,
      aux_sym_source_file_repeat2,
    STATE(20), 2,
      sym_page,
      aux_sym_part_repeat1,
  [295] = 2,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 8,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_sound_token1,
      anon_sym_DASH_DASH_DASH_LF,
  [309] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 8,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_sound_token1,
      anon_sym_DASH_DASH_DASH_LF,
  [323] = 2,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 8,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_sound_token1,
      anon_sym_DASH_DASH_DASH_LF,
  [337] = 2,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 8,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_text_token1,
      aux_sym_text_token2,
      aux_sym_text_token3,
      aux_sym_sound_token1,
      anon_sym_DASH_DASH_DASH_LF,
  [351] = 3,
    ACTIONS(81), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_role,
    ACTIONS(83), 5,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
  [365] = 2,
    STATE(37), 1,
      sym_role,
    ACTIONS(85), 5,
      anon_sym_u041fu0435u0440u0435u043au043bu0430u0434u0430u0432,
      anon_sym_u0420u0435u0434u0430u0433u0443u0432u0430u0432,
      anon_sym_u041au043bu0456u043du0438u0432,
      anon_sym_u0422u0430u0439u043fu0438u0432,
      anon_sym_u041eu0431u043au043bu0430u0434u0438u043du043au0430,
  [376] = 4,
    ACTIONS(89), 1,
      anon_sym_EQ_EQ,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(22), 2,
      sym_page,
      aux_sym_part_repeat1,
  [391] = 4,
    ACTIONS(93), 1,
      anon_sym_EQ_EQ,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(22), 2,
      sym_page,
      aux_sym_part_repeat1,
  [406] = 4,
    ACTIONS(97), 1,
      anon_sym_EQ_EQ,
    STATE(3), 1,
      sym_page_number,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(22), 2,
      sym_page,
      aux_sym_part_repeat1,
  [421] = 4,
    ACTIONS(100), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(105), 1,
      anon_sym_EQ_EQ,
    STATE(23), 2,
      sym_credit,
      aux_sym_source_file_repeat1,
  [435] = 3,
    ACTIONS(107), 1,
      anon_sym_EQ_EQ,
    STATE(3), 1,
      sym_page_number,
    STATE(21), 2,
      sym_page,
      aux_sym_part_repeat1,
  [446] = 3,
    ACTIONS(109), 1,
      anon_sym_LF,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_persons_repeat1,
  [456] = 3,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_persons_repeat1,
  [466] = 2,
    ACTIONS(120), 1,
      anon_sym_EQ_EQ,
    ACTIONS(118), 2,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [474] = 2,
    ACTIONS(124), 1,
      anon_sym_EQ_EQ,
    ACTIONS(122), 2,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [482] = 2,
    ACTIONS(128), 1,
      anon_sym_EQ_EQ,
    ACTIONS(126), 2,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [490] = 2,
    ACTIONS(132), 1,
      anon_sym_EQ_EQ,
    ACTIONS(130), 2,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [498] = 2,
    ACTIONS(136), 1,
      anon_sym_EQ_EQ,
    ACTIONS(134), 2,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [506] = 3,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_LF,
    STATE(25), 1,
      aux_sym_persons_repeat1,
  [516] = 2,
    ACTIONS(140), 1,
      anon_sym_LF,
    ACTIONS(142), 1,
      sym_page_real_number,
  [523] = 2,
    ACTIONS(144), 1,
      sym_person,
    STATE(28), 1,
      sym_persons,
  [530] = 2,
    ACTIONS(113), 1,
      anon_sym_LF,
    ACTIONS(146), 1,
      anon_sym_COMMA,
  [537] = 2,
    ACTIONS(148), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_link,
  [544] = 1,
    ACTIONS(150), 1,
      anon_sym_COLON,
  [548] = 1,
    ACTIONS(152), 1,
      anon_sym_LF,
  [552] = 1,
    ACTIONS(154), 1,
      anon_sym_LF,
  [556] = 1,
    ACTIONS(156), 1,
      aux_sym_link_token1,
  [560] = 1,
    ACTIONS(158), 1,
      anon_sym_LF,
  [564] = 1,
    ACTIONS(160), 1,
      anon_sym_https_COLON_SLASH_SLASH,
  [568] = 1,
    ACTIONS(162), 1,
      aux_sym_part_number_token1,
  [572] = 1,
    ACTIONS(164), 1,
      anon_sym_EQ_EQ_EQ,
  [576] = 1,
    ACTIONS(166), 1,
      aux_sym_part_number_token1,
  [580] = 1,
    ACTIONS(168), 1,
      anon_sym_EQ_EQ,
  [584] = 1,
    ACTIONS(170), 1,
      anon_sym_EQ_EQ,
  [588] = 1,
    ACTIONS(172), 1,
      anon_sym_COLON,
  [592] = 1,
    ACTIONS(174), 1,
      anon_sym_LF,
  [596] = 1,
    ACTIONS(176), 1,
      aux_sym_comment_token1,
  [600] = 1,
    ACTIONS(178), 1,
      sym_person,
  [604] = 1,
    ACTIONS(180), 1,
      aux_sym_part_number_token1,
  [608] = 1,
    ACTIONS(182), 1,
      anon_sym_LF,
  [612] = 1,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
  [616] = 1,
    ACTIONS(186), 1,
      anon_sym_STAR,
  [620] = 1,
    ACTIONS(188), 1,
      anon_sym_LF,
  [624] = 1,
    ACTIONS(190), 1,
      anon_sym_POUND,
  [628] = 1,
    ACTIONS(192), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 115,
  [SMALL_STATE(7)] = 143,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 195,
  [SMALL_STATE(10)] = 209,
  [SMALL_STATE(11)] = 233,
  [SMALL_STATE(12)] = 247,
  [SMALL_STATE(13)] = 271,
  [SMALL_STATE(14)] = 295,
  [SMALL_STATE(15)] = 309,
  [SMALL_STATE(16)] = 323,
  [SMALL_STATE(17)] = 337,
  [SMALL_STATE(18)] = 351,
  [SMALL_STATE(19)] = 365,
  [SMALL_STATE(20)] = 376,
  [SMALL_STATE(21)] = 391,
  [SMALL_STATE(22)] = 406,
  [SMALL_STATE(23)] = 421,
  [SMALL_STATE(24)] = 435,
  [SMALL_STATE(25)] = 446,
  [SMALL_STATE(26)] = 456,
  [SMALL_STATE(27)] = 466,
  [SMALL_STATE(28)] = 474,
  [SMALL_STATE(29)] = 482,
  [SMALL_STATE(30)] = 490,
  [SMALL_STATE(31)] = 498,
  [SMALL_STATE(32)] = 506,
  [SMALL_STATE(33)] = 516,
  [SMALL_STATE(34)] = 523,
  [SMALL_STATE(35)] = 530,
  [SMALL_STATE(36)] = 537,
  [SMALL_STATE(37)] = 544,
  [SMALL_STATE(38)] = 548,
  [SMALL_STATE(39)] = 552,
  [SMALL_STATE(40)] = 556,
  [SMALL_STATE(41)] = 560,
  [SMALL_STATE(42)] = 564,
  [SMALL_STATE(43)] = 568,
  [SMALL_STATE(44)] = 572,
  [SMALL_STATE(45)] = 576,
  [SMALL_STATE(46)] = 580,
  [SMALL_STATE(47)] = 584,
  [SMALL_STATE(48)] = 588,
  [SMALL_STATE(49)] = 592,
  [SMALL_STATE(50)] = 596,
  [SMALL_STATE(51)] = 600,
  [SMALL_STATE(52)] = 604,
  [SMALL_STATE(53)] = 608,
  [SMALL_STATE(54)] = 612,
  [SMALL_STATE(55)] = 616,
  [SMALL_STATE(56)] = 620,
  [SMALL_STATE(57)] = 624,
  [SMALL_STATE(58)] = 628,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound, 4, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sound, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_separator, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_separator, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(52),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(45),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 4, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 4, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 5, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 5, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_part, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_part, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__work, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__work, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credit, 4, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_credit, 4, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_persons, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_persons, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part_number, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [184] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
