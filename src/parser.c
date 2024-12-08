#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym__empty = 2,
  aux_sym_link_token1 = 3,
  aux_sym_name_token1 = 4,
  anon_sym_POUND = 5,
  anon_sym_COLON = 6,
  anon_sym_LF = 7,
  sym__role_name = 8,
  anon_sym_COMMA = 9,
  sym_nickname = 10,
  sym_part_number = 11,
  aux_sym_page_number_token1 = 12,
  sym_page_real_number = 13,
  sym_sound = 14,
  sym_separator = 15,
  sym_text = 16,
  sym_source_file = 17,
  sym__header = 18,
  sym_works = 19,
  sym_link = 20,
  sym_name = 21,
  sym_work_marker = 22,
  sym_credits = 23,
  sym_role = 24,
  sym_role_marker = 25,
  sym_persons = 26,
  sym_part = 27,
  sym_page = 28,
  sym_page_number = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_source_file_repeat2 = 31,
  aux_sym_source_file_repeat3 = 32,
  aux_sym_works_repeat1 = 33,
  aux_sym_credits_repeat1 = 34,
  aux_sym_persons_repeat1 = 35,
  aux_sym_part_repeat1 = 36,
  aux_sym_page_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__empty] = "_empty",
  [aux_sym_link_token1] = "link_token1",
  [aux_sym_name_token1] = "name_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_COLON] = ": ",
  [anon_sym_LF] = "\n",
  [sym__role_name] = "_role_name",
  [anon_sym_COMMA] = ", ",
  [sym_nickname] = "nickname",
  [sym_part_number] = "part_number",
  [aux_sym_page_number_token1] = "page_number_token1",
  [sym_page_real_number] = "page_real_number",
  [sym_sound] = "sound",
  [sym_separator] = "separator",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym__header] = "_header",
  [sym_works] = "works",
  [sym_link] = "link",
  [sym_name] = "name",
  [sym_work_marker] = "work_marker",
  [sym_credits] = "credits",
  [sym_role] = "role",
  [sym_role_marker] = "role_marker",
  [sym_persons] = "persons",
  [sym_part] = "part",
  [sym_page] = "page",
  [sym_page_number] = "page_number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
  [aux_sym_works_repeat1] = "works_repeat1",
  [aux_sym_credits_repeat1] = "credits_repeat1",
  [aux_sym_persons_repeat1] = "persons_repeat1",
  [aux_sym_part_repeat1] = "part_repeat1",
  [aux_sym_page_repeat1] = "page_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym__empty] = sym__empty,
  [aux_sym_link_token1] = aux_sym_link_token1,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LF] = anon_sym_LF,
  [sym__role_name] = sym__role_name,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_nickname] = sym_nickname,
  [sym_part_number] = sym_part_number,
  [aux_sym_page_number_token1] = aux_sym_page_number_token1,
  [sym_page_real_number] = sym_page_real_number,
  [sym_sound] = sym_sound,
  [sym_separator] = sym_separator,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym__header] = sym__header,
  [sym_works] = sym_works,
  [sym_link] = sym_link,
  [sym_name] = sym_name,
  [sym_work_marker] = sym_work_marker,
  [sym_credits] = sym_credits,
  [sym_role] = sym_role,
  [sym_role_marker] = sym_role_marker,
  [sym_persons] = sym_persons,
  [sym_part] = sym_part,
  [sym_page] = sym_page,
  [sym_page_number] = sym_page_number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
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
  [sym__empty] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_link_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_name_token1] = {
    .visible = false,
    .named = false,
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
  [sym_sound] = {
    .visible = true,
    .named = true,
  },
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__header] = {
    .visible = false,
    .named = true,
  },
  [sym_works] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_work_marker] = {
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
  [sym_role_marker] = {
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
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 65,
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
      if (eof) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'h') ADVANCE(73);
      if (lookahead == 0x404 ||
          lookahead == 0x406 ||
          lookahead == 0x407 ||
          (0x410 <= lookahead && lookahead <= 0x429) ||
          lookahead == 0x42e ||
          lookahead == 0x42f ||
          lookahead == 0x490) ADVANCE(66);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(50);
      if (lookahead == 0x404 ||
          lookahead == 0x406 ||
          lookahead == 0x407 ||
          (0x410 <= lookahead && lookahead <= 0x429) ||
          lookahead == 0x42e ||
          lookahead == 0x42f ||
          lookahead == 0x490) ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '*') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(75);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(61);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '*') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '*') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '*') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(62);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '*') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '*') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(7);
      END_STATE();
    case 44:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 54:
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(9);
      END_STATE();
    case 55:
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(17);
      END_STATE();
    case 56:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '=') ADVANCE(5);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__empty);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_link_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__role_name);
      if (set_contains(sym__role_name_character_set_1, 9, lookahead)) ADVANCE(66);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__role_name);
      if (set_contains(sym__role_name_character_set_1, 9, lookahead)) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == ':') ADVANCE(40);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 'p') ADVANCE(71);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 's') ADVANCE(69);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 't') ADVANCE(70);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 't') ADVANCE(72);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_nickname);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_part_number);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_page_number_token1);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_page_real_number);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_sound);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_text);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 56},
  [4] = {.lex_state = 56},
  [5] = {.lex_state = 57},
  [6] = {.lex_state = 57},
  [7] = {.lex_state = 57},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 57},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 57},
  [12] = {.lex_state = 56},
  [13] = {.lex_state = 56},
  [14] = {.lex_state = 56},
  [15] = {.lex_state = 56},
  [16] = {.lex_state = 56},
  [17] = {.lex_state = 56},
  [18] = {.lex_state = 56},
  [19] = {.lex_state = 56},
  [20] = {.lex_state = 56},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 56},
  [25] = {.lex_state = 56},
  [26] = {.lex_state = 56},
  [27] = {.lex_state = 56},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 56},
  [32] = {.lex_state = 56},
  [33] = {.lex_state = 56},
  [34] = {.lex_state = 56},
  [35] = {.lex_state = 56},
  [36] = {.lex_state = 56},
  [37] = {.lex_state = 56},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 56},
  [40] = {.lex_state = 56},
  [41] = {.lex_state = 56},
  [42] = {.lex_state = 56},
  [43] = {.lex_state = 56},
  [44] = {.lex_state = 56},
  [45] = {.lex_state = 56},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 56},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 56},
  [59] = {.lex_state = 56},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 56},
  [62] = {.lex_state = 56},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 55},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 55},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 56},
  [74] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__empty] = ACTIONS(1),
    [aux_sym_link_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym__role_name] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_nickname] = ACTIONS(1),
    [sym_part_number] = ACTIONS(1),
    [aux_sym_page_number_token1] = ACTIONS(1),
    [sym_page_real_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(70),
    [sym__header] = STATE(44),
    [sym_works] = STATE(8),
    [sym_name] = STATE(30),
    [sym_work_marker] = STATE(71),
    [sym_part] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_source_file_repeat3] = STATE(46),
    [aux_sym_works_repeat1] = STATE(20),
    [sym_comment] = ACTIONS(3),
    [sym__empty] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_part_number] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__empty,
    STATE(4), 1,
      aux_sym_source_file_repeat2,
    STATE(8), 1,
      sym_works,
    STATE(20), 1,
      aux_sym_works_repeat1,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      sym_name,
    STATE(41), 1,
      sym__header,
    STATE(71), 1,
      sym_work_marker,
    STATE(47), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [38] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__empty,
    STATE(10), 1,
      sym_works,
    STATE(14), 1,
      aux_sym_source_file_repeat1,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    STATE(20), 1,
      aux_sym_works_repeat1,
    STATE(30), 1,
      sym_name,
    STATE(71), 1,
      sym_work_marker,
    STATE(47), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [73] = 11,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(17), 1,
      sym__empty,
    ACTIONS(19), 1,
      sym_comment,
    STATE(10), 1,
      sym_works,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    STATE(20), 1,
      aux_sym_works_repeat1,
    STATE(30), 1,
      sym_name,
    STATE(71), 1,
      sym_work_marker,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [108] = 7,
    ACTIONS(25), 1,
      sym__empty,
    ACTIONS(27), 1,
      aux_sym_page_number_token1,
    STATE(6), 1,
      aux_sym_page_repeat1,
    STATE(32), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_part_number,
    ACTIONS(23), 2,
      sym_comment,
      sym_separator,
    ACTIONS(29), 2,
      sym_sound,
      sym_text,
  [133] = 7,
    ACTIONS(35), 1,
      sym__empty,
    ACTIONS(37), 1,
      aux_sym_page_number_token1,
    STATE(7), 1,
      aux_sym_page_repeat1,
    STATE(40), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_part_number,
    ACTIONS(33), 2,
      sym_comment,
      sym_separator,
    ACTIONS(39), 2,
      sym_sound,
      sym_text,
  [158] = 5,
    ACTIONS(46), 1,
      aux_sym_page_number_token1,
    STATE(7), 1,
      aux_sym_page_repeat1,
    ACTIONS(43), 2,
      sym_comment,
      sym_separator,
    ACTIONS(48), 2,
      sym_sound,
      sym_text,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym__empty,
      sym_part_number,
  [178] = 8,
    ACTIONS(51), 1,
      sym__empty,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      sym_part_number,
    STATE(12), 1,
      aux_sym_source_file_repeat2,
    STATE(24), 1,
      aux_sym_credits_repeat1,
    STATE(33), 1,
      sym_role,
    STATE(59), 1,
      sym_credits,
    STATE(69), 1,
      sym_role_marker,
  [203] = 2,
    ACTIONS(59), 3,
      aux_sym_page_number_token1,
      sym_sound,
      sym_text,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym__empty,
      sym_part_number,
      sym_separator,
  [216] = 8,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      sym__empty,
    ACTIONS(63), 1,
      sym_part_number,
    STATE(16), 1,
      aux_sym_source_file_repeat2,
    STATE(24), 1,
      aux_sym_credits_repeat1,
    STATE(33), 1,
      sym_role,
    STATE(58), 1,
      sym_credits,
    STATE(69), 1,
      sym_role_marker,
  [241] = 2,
    ACTIONS(67), 3,
      aux_sym_page_number_token1,
      sym_sound,
      sym_text,
    ACTIONS(65), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym__empty,
      sym_part_number,
      sym_separator,
  [254] = 7,
    ACTIONS(17), 1,
      sym__empty,
    ACTIONS(53), 1,
      anon_sym_POUND,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    STATE(24), 1,
      aux_sym_credits_repeat1,
    STATE(33), 1,
      sym_role,
    STATE(58), 1,
      sym_credits,
    STATE(69), 1,
      sym_role_marker,
  [276] = 6,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(17), 1,
      sym__empty,
    ACTIONS(19), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    STATE(18), 1,
      aux_sym_source_file_repeat1,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [296] = 6,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__empty,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    STATE(39), 1,
      aux_sym_source_file_repeat2,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [316] = 3,
    ACTIONS(73), 1,
      sym__empty,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND,
      sym_part_number,
      aux_sym_page_number_token1,
  [330] = 7,
    ACTIONS(17), 1,
      sym__empty,
    ACTIONS(53), 1,
      anon_sym_POUND,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    STATE(24), 1,
      aux_sym_credits_repeat1,
    STATE(33), 1,
      sym_role,
    STATE(61), 1,
      sym_credits,
    STATE(69), 1,
      sym_role_marker,
  [352] = 6,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(17), 1,
      sym__empty,
    ACTIONS(76), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    STATE(48), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [372] = 6,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym__empty,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
    STATE(48), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [392] = 6,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym__empty,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    STATE(31), 1,
      aux_sym_source_file_repeat2,
    STATE(49), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [412] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(26), 1,
      aux_sym_works_repeat1,
    STATE(30), 1,
      sym_name,
    STATE(71), 1,
      sym_work_marker,
    ACTIONS(82), 2,
      sym__empty,
      sym_part_number,
  [429] = 4,
    ACTIONS(86), 1,
      aux_sym_page_number_token1,
    STATE(5), 1,
      sym_page_number,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(28), 2,
      sym_page,
      aux_sym_part_repeat1,
  [444] = 5,
    ACTIONS(86), 1,
      aux_sym_page_number_token1,
    ACTIONS(88), 1,
      sym_comment,
    STATE(5), 1,
      sym_page_number,
    STATE(23), 1,
      aux_sym_source_file_repeat1,
    STATE(21), 2,
      sym_page,
      aux_sym_part_repeat1,
  [461] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_page_number_token1,
    STATE(5), 1,
      sym_page_number,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    STATE(29), 2,
      sym_page,
      aux_sym_part_repeat1,
  [478] = 5,
    ACTIONS(53), 1,
      anon_sym_POUND,
    STATE(27), 1,
      aux_sym_credits_repeat1,
    STATE(33), 1,
      sym_role,
    STATE(69), 1,
      sym_role_marker,
    ACTIONS(90), 2,
      sym__empty,
      sym_part_number,
  [495] = 3,
    ACTIONS(92), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(95), 4,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
      aux_sym_page_number_token1,
  [508] = 5,
    ACTIONS(99), 1,
      anon_sym_POUND,
    STATE(26), 1,
      aux_sym_works_repeat1,
    STATE(30), 1,
      sym_name,
    STATE(71), 1,
      sym_work_marker,
    ACTIONS(97), 2,
      sym__empty,
      sym_part_number,
  [525] = 5,
    ACTIONS(104), 1,
      anon_sym_POUND,
    STATE(27), 1,
      aux_sym_credits_repeat1,
    STATE(33), 1,
      sym_role,
    STATE(69), 1,
      sym_role_marker,
    ACTIONS(102), 2,
      sym__empty,
      sym_part_number,
  [542] = 4,
    ACTIONS(109), 1,
      aux_sym_page_number_token1,
    STATE(5), 1,
      sym_page_number,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(28), 2,
      sym_page,
      aux_sym_part_repeat1,
  [557] = 4,
    ACTIONS(86), 1,
      aux_sym_page_number_token1,
    STATE(5), 1,
      sym_page_number,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      sym_part_number,
    STATE(28), 2,
      sym_page,
      aux_sym_part_repeat1,
  [572] = 5,
    ACTIONS(114), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_link,
    STATE(38), 1,
      aux_sym_source_file_repeat1,
    STATE(67), 1,
      sym_work_marker,
  [588] = 4,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(17), 1,
      sym__empty,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    STATE(53), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [602] = 3,
    ACTIONS(17), 1,
      sym__empty,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      sym_part_number,
      aux_sym_page_number_token1,
  [614] = 3,
    ACTIONS(118), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(120), 3,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [626] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(102), 3,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [638] = 3,
    ACTIONS(122), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(97), 3,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [650] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(124), 3,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [662] = 3,
    ACTIONS(126), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(124), 3,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [674] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_POUND,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    STATE(37), 1,
      sym_link,
    STATE(67), 1,
      sym_work_marker,
  [690] = 4,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(17), 1,
      sym__empty,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    STATE(48), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [704] = 3,
    ACTIONS(17), 1,
      sym__empty,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      sym_part_number,
      aux_sym_page_number_token1,
  [716] = 4,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(130), 1,
      sym__empty,
    STATE(17), 1,
      aux_sym_source_file_repeat2,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [730] = 4,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(17), 1,
      sym__empty,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    STATE(49), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [744] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(132), 3,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [756] = 4,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(134), 1,
      sym__empty,
    STATE(13), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [770] = 1,
    ACTIONS(136), 4,
      sym_comment,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [777] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [788] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [799] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [810] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [821] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [832] = 3,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      sym_part_number,
    STATE(51), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [843] = 1,
    ACTIONS(153), 4,
      sym_comment,
      sym__empty,
      anon_sym_POUND,
      sym_part_number,
  [850] = 3,
    ACTIONS(9), 1,
      sym_part_number,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(51), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [861] = 3,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_persons_repeat1,
  [871] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_LF,
    STATE(54), 1,
      aux_sym_persons_repeat1,
  [881] = 3,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_persons_repeat1,
  [891] = 1,
    ACTIONS(168), 2,
      sym_comment,
      anon_sym_POUND,
  [896] = 1,
    ACTIONS(170), 2,
      sym__empty,
      sym_part_number,
  [901] = 1,
    ACTIONS(63), 2,
      sym__empty,
      sym_part_number,
  [906] = 2,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(174), 1,
      sym_page_real_number,
  [913] = 1,
    ACTIONS(176), 2,
      sym__empty,
      sym_part_number,
  [918] = 2,
    ACTIONS(178), 1,
      sym_nickname,
    STATE(72), 1,
      sym_persons,
  [925] = 1,
    ACTIONS(163), 2,
      anon_sym_LF,
      anon_sym_COMMA,
  [930] = 1,
    ACTIONS(180), 1,
      sym__role_name,
  [934] = 1,
    ACTIONS(182), 1,
      aux_sym_name_token1,
  [938] = 1,
    ACTIONS(184), 1,
      anon_sym_LF,
  [942] = 1,
    ACTIONS(186), 1,
      aux_sym_link_token1,
  [946] = 1,
    ACTIONS(188), 1,
      anon_sym_COLON,
  [950] = 1,
    ACTIONS(190), 1,
      sym__role_name,
  [954] = 1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
  [958] = 1,
    ACTIONS(194), 1,
      aux_sym_name_token1,
  [962] = 1,
    ACTIONS(196), 1,
      anon_sym_LF,
  [966] = 1,
    ACTIONS(198), 1,
      sym_nickname,
  [970] = 1,
    ACTIONS(182), 1,
      aux_sym_link_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 73,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 133,
  [SMALL_STATE(7)] = 158,
  [SMALL_STATE(8)] = 178,
  [SMALL_STATE(9)] = 203,
  [SMALL_STATE(10)] = 216,
  [SMALL_STATE(11)] = 241,
  [SMALL_STATE(12)] = 254,
  [SMALL_STATE(13)] = 276,
  [SMALL_STATE(14)] = 296,
  [SMALL_STATE(15)] = 316,
  [SMALL_STATE(16)] = 330,
  [SMALL_STATE(17)] = 352,
  [SMALL_STATE(18)] = 372,
  [SMALL_STATE(19)] = 392,
  [SMALL_STATE(20)] = 412,
  [SMALL_STATE(21)] = 429,
  [SMALL_STATE(22)] = 444,
  [SMALL_STATE(23)] = 461,
  [SMALL_STATE(24)] = 478,
  [SMALL_STATE(25)] = 495,
  [SMALL_STATE(26)] = 508,
  [SMALL_STATE(27)] = 525,
  [SMALL_STATE(28)] = 542,
  [SMALL_STATE(29)] = 557,
  [SMALL_STATE(30)] = 572,
  [SMALL_STATE(31)] = 588,
  [SMALL_STATE(32)] = 602,
  [SMALL_STATE(33)] = 614,
  [SMALL_STATE(34)] = 626,
  [SMALL_STATE(35)] = 638,
  [SMALL_STATE(36)] = 650,
  [SMALL_STATE(37)] = 662,
  [SMALL_STATE(38)] = 674,
  [SMALL_STATE(39)] = 690,
  [SMALL_STATE(40)] = 704,
  [SMALL_STATE(41)] = 716,
  [SMALL_STATE(42)] = 730,
  [SMALL_STATE(43)] = 744,
  [SMALL_STATE(44)] = 756,
  [SMALL_STATE(45)] = 770,
  [SMALL_STATE(46)] = 777,
  [SMALL_STATE(47)] = 788,
  [SMALL_STATE(48)] = 799,
  [SMALL_STATE(49)] = 810,
  [SMALL_STATE(50)] = 821,
  [SMALL_STATE(51)] = 832,
  [SMALL_STATE(52)] = 843,
  [SMALL_STATE(53)] = 850,
  [SMALL_STATE(54)] = 861,
  [SMALL_STATE(55)] = 871,
  [SMALL_STATE(56)] = 881,
  [SMALL_STATE(57)] = 891,
  [SMALL_STATE(58)] = 896,
  [SMALL_STATE(59)] = 901,
  [SMALL_STATE(60)] = 906,
  [SMALL_STATE(61)] = 913,
  [SMALL_STATE(62)] = 918,
  [SMALL_STATE(63)] = 925,
  [SMALL_STATE(64)] = 930,
  [SMALL_STATE(65)] = 934,
  [SMALL_STATE(66)] = 938,
  [SMALL_STATE(67)] = 942,
  [SMALL_STATE(68)] = 946,
  [SMALL_STATE(69)] = 950,
  [SMALL_STATE(70)] = 954,
  [SMALL_STATE(71)] = 958,
  [SMALL_STATE(72)] = 962,
  [SMALL_STATE(73)] = 966,
  [SMALL_STATE(74)] = 970,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_number, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(15),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_works, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credits, 1, 0, 0),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0), SHIFT_REPEAT(22),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 5, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_marker, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_work_marker, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [192] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
