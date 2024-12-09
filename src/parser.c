#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_LF = 2,
  aux_sym_link_token1 = 3,
  aux_sym_name_token1 = 4,
  anon_sym_POUND = 5,
  anon_sym_COLON = 6,
  sym__role_name = 7,
  sym_nickname = 8,
  sym_persons_separator = 9,
  anon_sym_EQ_EQ_EQ = 10,
  anon_sym_EQ_EQ_EQ_LF = 11,
  aux_sym_part_number_token1 = 12,
  anon_sym_EQ_EQ = 13,
  anon_sym_EQ_EQ2 = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  aux_sym_sound_token1 = 17,
  aux_sym_sound_token2 = 18,
  aux_sym_sound_token3 = 19,
  sym_sound_marker = 20,
  sym_separator = 21,
  sym_source_file = 22,
  sym__header = 23,
  sym__empty = 24,
  sym_works = 25,
  sym_link = 26,
  sym_name = 27,
  sym_work_marker = 28,
  sym_credits = 29,
  sym_role = 30,
  sym_role_marker = 31,
  sym_persons = 32,
  sym_part = 33,
  sym_part_marker = 34,
  sym_part_number = 35,
  sym_page = 36,
  sym_page_marker = 37,
  sym_page_number = 38,
  sym_page_real_marker = 39,
  sym_page_real_number = 40,
  sym_sound = 41,
  sym_sound_count = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_source_file_repeat2 = 44,
  aux_sym_source_file_repeat3 = 45,
  aux_sym_works_repeat1 = 46,
  aux_sym_credits_repeat1 = 47,
  aux_sym_persons_repeat1 = 48,
  aux_sym_part_repeat1 = 49,
  aux_sym_page_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LF] = "\n",
  [aux_sym_link_token1] = "link_token1",
  [aux_sym_name_token1] = "name_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_COLON] = ": ",
  [sym__role_name] = "_role_name",
  [sym_nickname] = "nickname",
  [sym_persons_separator] = "persons_separator",
  [anon_sym_EQ_EQ_EQ] = "=== ",
  [anon_sym_EQ_EQ_EQ_LF] = " ===\n",
  [aux_sym_part_number_token1] = "part_number_token1",
  [anon_sym_EQ_EQ] = "== ",
  [anon_sym_EQ_EQ2] = " ==",
  [anon_sym_LPAREN] = " (",
  [anon_sym_RPAREN] = ")",
  [aux_sym_sound_token1] = "sound_token1",
  [aux_sym_sound_token2] = "sound_token2",
  [aux_sym_sound_token3] = "sound_token3",
  [sym_sound_marker] = "sound_marker",
  [sym_separator] = "separator",
  [sym_source_file] = "source_file",
  [sym__header] = "_header",
  [sym__empty] = "_empty",
  [sym_works] = "works",
  [sym_link] = "link",
  [sym_name] = "name",
  [sym_work_marker] = "work_marker",
  [sym_credits] = "credits",
  [sym_role] = "role",
  [sym_role_marker] = "role_marker",
  [sym_persons] = "persons",
  [sym_part] = "part",
  [sym_part_marker] = "part_marker",
  [sym_part_number] = "part_number",
  [sym_page] = "page",
  [sym_page_marker] = "page_marker",
  [sym_page_number] = "page_number",
  [sym_page_real_marker] = "page_real_marker",
  [sym_page_real_number] = "page_real_number",
  [sym_sound] = "sound",
  [sym_sound_count] = "sound_count",
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
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_link_token1] = aux_sym_link_token1,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__role_name] = sym__role_name,
  [sym_nickname] = sym_nickname,
  [sym_persons_separator] = sym_persons_separator,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_LF] = anon_sym_EQ_EQ_EQ_LF,
  [aux_sym_part_number_token1] = aux_sym_part_number_token1,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ2] = anon_sym_EQ_EQ2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_sound_token1] = aux_sym_sound_token1,
  [aux_sym_sound_token2] = aux_sym_sound_token2,
  [aux_sym_sound_token3] = aux_sym_sound_token3,
  [sym_sound_marker] = sym_sound_marker,
  [sym_separator] = sym_separator,
  [sym_source_file] = sym_source_file,
  [sym__header] = sym__header,
  [sym__empty] = sym__empty,
  [sym_works] = sym_works,
  [sym_link] = sym_link,
  [sym_name] = sym_name,
  [sym_work_marker] = sym_work_marker,
  [sym_credits] = sym_credits,
  [sym_role] = sym_role,
  [sym_role_marker] = sym_role_marker,
  [sym_persons] = sym_persons,
  [sym_part] = sym_part,
  [sym_part_marker] = sym_part_marker,
  [sym_part_number] = sym_part_number,
  [sym_page] = sym_page,
  [sym_page_marker] = sym_page_marker,
  [sym_page_number] = sym_page_number,
  [sym_page_real_marker] = sym_page_real_marker,
  [sym_page_real_number] = sym_page_real_number,
  [sym_sound] = sym_sound,
  [sym_sound_count] = sym_sound_count,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
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
  [sym__role_name] = {
    .visible = false,
    .named = true,
  },
  [sym_nickname] = {
    .visible = true,
    .named = true,
  },
  [sym_persons_separator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ_LF] = {
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
  [anon_sym_EQ_EQ2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sound_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sound_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sound_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_sound_marker] = {
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
  [sym__header] = {
    .visible = false,
    .named = true,
  },
  [sym__empty] = {
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
  [sym_part_marker] = {
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
  [sym_page_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_page_number] = {
    .visible = true,
    .named = true,
  },
  [sym_page_real_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_page_real_number] = {
    .visible = true,
    .named = true,
  },
  [sym_sound] = {
    .visible = true,
    .named = true,
  },
  [sym_sound_count] = {
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
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 82,
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
      if (eof) ADVANCE(36);
      ADVANCE_MAP(
        '\n', 38,
        ' ', 17,
        '#', 41,
        ')', 60,
        '-', 51,
        '0', 55,
        '=', 2,
        'h', 50,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead == 0x404 ||
          lookahead == 0x406 ||
          lookahead == 0x407 ||
          (0x410 <= lookahead && lookahead <= 0x429) ||
          lookahead == 0x42e ||
          lookahead == 0x42f ||
          lookahead == 0x490) ADVANCE(43);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '*') ADVANCE(61);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 38,
        ' ', 26,
        '#', 41,
        ')', 60,
        ',', 10,
        ':', 11,
        '=', 2,
        'h', 32,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead == 0x404 ||
          lookahead == 0x406 ||
          lookahead == 0x407 ||
          (0x410 <= lookahead && lookahead <= 0x429) ||
          lookahead == 0x42e ||
          lookahead == 0x42f ||
          lookahead == 0x490) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(39);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(67);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(40);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '=') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(28);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(51);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(4);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 33:
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(5);
      END_STATE();
    case 34:
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(7);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_link_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__role_name);
      if (set_contains(sym__role_name_character_set_1, 9, lookahead)) ADVANCE(43);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__role_name);
      if (set_contains(sym__role_name_character_set_1, 9, lookahead)) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == '0') ADVANCE(55);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == ':') ADVANCE(21);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 'p') ADVANCE(48);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 's') ADVANCE(46);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 't') ADVANCE(47);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 't') ADVANCE(49);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_nickname);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_persons_separator);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_LF);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_part_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ_EQ2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ_EQ2);
      if (lookahead == '=') ADVANCE(4);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_sound_token2);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_sound_token3);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_sound_marker);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_sound_marker);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
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
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 34},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 34},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym_link_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym__role_name] = ACTIONS(1),
    [sym_nickname] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_LF] = ACTIONS(1),
    [aux_sym_part_number_token1] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_sound_token1] = ACTIONS(1),
    [sym_sound_marker] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(89),
    [sym__header] = STATE(23),
    [sym__empty] = STATE(3),
    [sym_works] = STATE(14),
    [sym_name] = STATE(51),
    [sym_work_marker] = STATE(88),
    [sym_part] = STATE(46),
    [sym_part_marker] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_source_file_repeat3] = STATE(46),
    [aux_sym_works_repeat1] = STATE(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym_works,
    STATE(22), 1,
      sym__header,
    STATE(29), 1,
      sym_part_marker,
    STATE(35), 1,
      aux_sym_works_repeat1,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    STATE(51), 1,
      sym_name,
    STATE(88), 1,
      sym_work_marker,
    STATE(4), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(49), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [42] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym_works,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
    STATE(29), 1,
      sym_part_marker,
    STATE(35), 1,
      aux_sym_works_repeat1,
    STATE(51), 1,
      sym_name,
    STATE(88), 1,
      sym_work_marker,
    STATE(37), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(49), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [81] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(19), 1,
      sym_comment,
    STATE(13), 1,
      sym_works,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    STATE(29), 1,
      sym_part_marker,
    STATE(35), 1,
      aux_sym_works_repeat1,
    STATE(51), 1,
      sym_name,
    STATE(88), 1,
      sym_work_marker,
    STATE(37), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [120] = 8,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
      aux_sym_sound_token3,
    ACTIONS(31), 1,
      sym_sound_marker,
    STATE(59), 1,
      sym__empty,
    ACTIONS(23), 2,
      sym_comment,
      sym_separator,
    ACTIONS(27), 2,
      aux_sym_sound_token1,
      aux_sym_sound_token2,
    STATE(6), 2,
      sym_sound,
      aux_sym_page_repeat1,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [150] = 8,
    ACTIONS(29), 1,
      aux_sym_sound_token3,
    ACTIONS(31), 1,
      sym_sound_marker,
    ACTIONS(37), 1,
      anon_sym_LF,
    STATE(56), 1,
      sym__empty,
    ACTIONS(27), 2,
      aux_sym_sound_token1,
      aux_sym_sound_token2,
    ACTIONS(35), 2,
      sym_comment,
      sym_separator,
    STATE(7), 2,
      sym_sound,
      aux_sym_page_repeat1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [180] = 6,
    ACTIONS(47), 1,
      aux_sym_sound_token3,
    ACTIONS(50), 1,
      sym_sound_marker,
    ACTIONS(41), 2,
      sym_comment,
      sym_separator,
    ACTIONS(44), 2,
      aux_sym_sound_token1,
      aux_sym_sound_token2,
    STATE(7), 2,
      sym_sound,
      aux_sym_page_repeat1,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [205] = 2,
    ACTIONS(55), 3,
      aux_sym_sound_token1,
      aux_sym_sound_token2,
      sym_sound_marker,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token3,
      sym_separator,
  [220] = 2,
    ACTIONS(59), 3,
      aux_sym_sound_token1,
      aux_sym_sound_token2,
      sym_sound_marker,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token3,
      sym_separator,
  [235] = 2,
    ACTIONS(63), 3,
      aux_sym_sound_token1,
      aux_sym_sound_token2,
      sym_sound_marker,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token3,
      sym_separator,
  [250] = 2,
    ACTIONS(67), 3,
      aux_sym_sound_token1,
      aux_sym_sound_token2,
      sym_sound_marker,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token3,
      sym_separator,
  [265] = 2,
    ACTIONS(71), 3,
      aux_sym_sound_token1,
      aux_sym_sound_token2,
      sym_sound_marker,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token3,
      sym_separator,
  [280] = 8,
    ACTIONS(73), 1,
      anon_sym_LF,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(77), 1,
      anon_sym_EQ_EQ_EQ,
    STATE(30), 1,
      aux_sym_credits_repeat1,
    STATE(40), 1,
      sym_role,
    STATE(67), 1,
      sym_credits,
    STATE(86), 1,
      sym_role_marker,
    STATE(21), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [306] = 8,
    ACTIONS(75), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_LF,
    ACTIONS(81), 1,
      anon_sym_EQ_EQ_EQ,
    STATE(30), 1,
      aux_sym_credits_repeat1,
    STATE(40), 1,
      sym_role,
    STATE(68), 1,
      sym_credits,
    STATE(86), 1,
      sym_role_marker,
    STATE(20), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [332] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(19), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    STATE(29), 1,
      sym_part_marker,
    STATE(37), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [356] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_part_marker,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    STATE(24), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [380] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_part_marker,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    STATE(25), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(43), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [404] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(87), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    STATE(29), 1,
      sym_part_marker,
    STATE(37), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(43), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [428] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_part_marker,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    STATE(26), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(48), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [452] = 7,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(75), 1,
      anon_sym_POUND,
    STATE(30), 1,
      aux_sym_credits_repeat1,
    STATE(40), 1,
      sym_role,
    STATE(67), 1,
      sym_credits,
    STATE(86), 1,
      sym_role_marker,
    STATE(37), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [475] = 7,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(75), 1,
      anon_sym_POUND,
    STATE(30), 1,
      aux_sym_credits_repeat1,
    STATE(40), 1,
      sym_role,
    STATE(69), 1,
      sym_credits,
    STATE(86), 1,
      sym_role_marker,
    STATE(37), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [498] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(91), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_part_marker,
    STATE(18), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [516] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(93), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_part_marker,
    STATE(15), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(49), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [534] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_part_marker,
    STATE(37), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(43), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [552] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_part_marker,
    STATE(37), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(48), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [570] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_part_marker,
    STATE(37), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(52), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [588] = 5,
    ACTIONS(97), 1,
      anon_sym_POUND,
    STATE(27), 1,
      aux_sym_credits_repeat1,
    STATE(40), 1,
      sym_role,
    STATE(86), 1,
      sym_role_marker,
    ACTIONS(95), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [605] = 5,
    ACTIONS(102), 1,
      anon_sym_POUND,
    STATE(28), 1,
      aux_sym_works_repeat1,
    STATE(51), 1,
      sym_name,
    STATE(88), 1,
      sym_work_marker,
    ACTIONS(100), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [622] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_EQ_EQ,
    STATE(5), 1,
      sym_page_marker,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
    STATE(34), 2,
      sym_page,
      aux_sym_part_repeat1,
  [639] = 5,
    ACTIONS(75), 1,
      anon_sym_POUND,
    STATE(27), 1,
      aux_sym_credits_repeat1,
    STATE(40), 1,
      sym_role,
    STATE(86), 1,
      sym_role_marker,
    ACTIONS(109), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [656] = 4,
    ACTIONS(107), 1,
      anon_sym_EQ_EQ,
    STATE(5), 1,
      sym_page_marker,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(32), 2,
      sym_page,
      aux_sym_part_repeat1,
  [671] = 4,
    ACTIONS(115), 1,
      anon_sym_EQ_EQ,
    STATE(5), 1,
      sym_page_marker,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(32), 2,
      sym_page,
      aux_sym_part_repeat1,
  [686] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_EQ_EQ,
    STATE(5), 1,
      sym_page_marker,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    STATE(31), 2,
      sym_page,
      aux_sym_part_repeat1,
  [703] = 4,
    ACTIONS(107), 1,
      anon_sym_EQ_EQ,
    STATE(5), 1,
      sym_page_marker,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(32), 2,
      sym_page,
      aux_sym_part_repeat1,
  [718] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(28), 1,
      aux_sym_works_repeat1,
    STATE(51), 1,
      sym_name,
    STATE(88), 1,
      sym_work_marker,
    ACTIONS(120), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [735] = 3,
    ACTIONS(122), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(125), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [748] = 3,
    ACTIONS(129), 1,
      anon_sym_LF,
    STATE(37), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    ACTIONS(127), 3,
      sym_comment,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [761] = 4,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      anon_sym_EQ_EQ_EQ,
    STATE(29), 1,
      sym_part_marker,
    STATE(38), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [775] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(95), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [787] = 3,
    ACTIONS(137), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(139), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [799] = 3,
    ACTIONS(141), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(100), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [811] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_POUND,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    STATE(47), 1,
      sym_link,
    STATE(79), 1,
      sym_work_marker,
  [827] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_part_marker,
    STATE(38), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [841] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(147), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [853] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(149), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [865] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_part_marker,
    STATE(38), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [879] = 3,
    ACTIONS(153), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(149), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [891] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_part_marker,
    STATE(38), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [905] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_part_marker,
    STATE(38), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [919] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_part_marker,
    STATE(38), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [933] = 5,
    ACTIONS(143), 1,
      anon_sym_POUND,
    ACTIONS(161), 1,
      sym_comment,
    STATE(41), 1,
      sym_link,
    STATE(42), 1,
      aux_sym_source_file_repeat1,
    STATE(79), 1,
      sym_work_marker,
  [949] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_part_marker,
    STATE(38), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [963] = 1,
    ACTIONS(165), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [970] = 1,
    ACTIONS(167), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [977] = 3,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_page_real_marker,
  [987] = 1,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [993] = 3,
    ACTIONS(175), 1,
      anon_sym_LF,
    ACTIONS(177), 1,
      sym_persons_separator,
    STATE(60), 1,
      aux_sym_persons_repeat1,
  [1003] = 3,
    ACTIONS(177), 1,
      sym_persons_separator,
    ACTIONS(179), 1,
      anon_sym_LF,
    STATE(57), 1,
      aux_sym_persons_repeat1,
  [1013] = 1,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [1019] = 3,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(183), 1,
      sym_persons_separator,
    STATE(60), 1,
      aux_sym_persons_repeat1,
  [1029] = 2,
    ACTIONS(186), 1,
      aux_sym_part_number_token1,
    STATE(76), 1,
      sym_page_number,
  [1036] = 1,
    ACTIONS(188), 2,
      sym_comment,
      anon_sym_POUND,
  [1041] = 2,
    ACTIONS(190), 1,
      aux_sym_part_number_token1,
    STATE(85), 1,
      sym_page_real_number,
  [1048] = 2,
    ACTIONS(192), 1,
      aux_sym_part_number_token1,
    STATE(87), 1,
      sym_part_number,
  [1055] = 1,
    ACTIONS(194), 2,
      sym_comment,
      anon_sym_EQ_EQ,
  [1060] = 2,
    ACTIONS(196), 1,
      sym_nickname,
    STATE(75), 1,
      sym_persons,
  [1067] = 1,
    ACTIONS(198), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [1072] = 1,
    ACTIONS(77), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [1077] = 1,
    ACTIONS(200), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [1082] = 2,
    ACTIONS(202), 1,
      aux_sym_part_number_token1,
    STATE(9), 1,
      sym_sound_count,
  [1089] = 1,
    ACTIONS(181), 2,
      anon_sym_LF,
      sym_persons_separator,
  [1094] = 2,
    ACTIONS(202), 1,
      aux_sym_part_number_token1,
    STATE(11), 1,
      sym_sound_count,
  [1101] = 1,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
  [1105] = 1,
    ACTIONS(206), 1,
      anon_sym_EQ_EQ2,
  [1109] = 1,
    ACTIONS(208), 1,
      anon_sym_LF,
  [1113] = 1,
    ACTIONS(210), 1,
      anon_sym_EQ_EQ2,
  [1117] = 1,
    ACTIONS(212), 1,
      sym_sound_marker,
  [1121] = 1,
    ACTIONS(214), 1,
      anon_sym_LF,
  [1125] = 1,
    ACTIONS(216), 1,
      aux_sym_link_token1,
  [1129] = 1,
    ACTIONS(218), 1,
      sym__role_name,
  [1133] = 1,
    ACTIONS(220), 1,
      sym_nickname,
  [1137] = 1,
    ACTIONS(222), 1,
      aux_sym_name_token1,
  [1141] = 1,
    ACTIONS(224), 1,
      anon_sym_COLON,
  [1145] = 1,
    ACTIONS(226), 1,
      anon_sym_EQ_EQ_EQ_LF,
  [1149] = 1,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
  [1153] = 1,
    ACTIONS(230), 1,
      sym__role_name,
  [1157] = 1,
    ACTIONS(232), 1,
      anon_sym_EQ_EQ_EQ_LF,
  [1161] = 1,
    ACTIONS(234), 1,
      aux_sym_name_token1,
  [1165] = 1,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
  [1169] = 1,
    ACTIONS(238), 1,
      anon_sym_LF,
  [1173] = 1,
    ACTIONS(222), 1,
      aux_sym_link_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 150,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 205,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 235,
  [SMALL_STATE(11)] = 250,
  [SMALL_STATE(12)] = 265,
  [SMALL_STATE(13)] = 280,
  [SMALL_STATE(14)] = 306,
  [SMALL_STATE(15)] = 332,
  [SMALL_STATE(16)] = 356,
  [SMALL_STATE(17)] = 380,
  [SMALL_STATE(18)] = 404,
  [SMALL_STATE(19)] = 428,
  [SMALL_STATE(20)] = 452,
  [SMALL_STATE(21)] = 475,
  [SMALL_STATE(22)] = 498,
  [SMALL_STATE(23)] = 516,
  [SMALL_STATE(24)] = 534,
  [SMALL_STATE(25)] = 552,
  [SMALL_STATE(26)] = 570,
  [SMALL_STATE(27)] = 588,
  [SMALL_STATE(28)] = 605,
  [SMALL_STATE(29)] = 622,
  [SMALL_STATE(30)] = 639,
  [SMALL_STATE(31)] = 656,
  [SMALL_STATE(32)] = 671,
  [SMALL_STATE(33)] = 686,
  [SMALL_STATE(34)] = 703,
  [SMALL_STATE(35)] = 718,
  [SMALL_STATE(36)] = 735,
  [SMALL_STATE(37)] = 748,
  [SMALL_STATE(38)] = 761,
  [SMALL_STATE(39)] = 775,
  [SMALL_STATE(40)] = 787,
  [SMALL_STATE(41)] = 799,
  [SMALL_STATE(42)] = 811,
  [SMALL_STATE(43)] = 827,
  [SMALL_STATE(44)] = 841,
  [SMALL_STATE(45)] = 853,
  [SMALL_STATE(46)] = 865,
  [SMALL_STATE(47)] = 879,
  [SMALL_STATE(48)] = 891,
  [SMALL_STATE(49)] = 905,
  [SMALL_STATE(50)] = 919,
  [SMALL_STATE(51)] = 933,
  [SMALL_STATE(52)] = 949,
  [SMALL_STATE(53)] = 963,
  [SMALL_STATE(54)] = 970,
  [SMALL_STATE(55)] = 977,
  [SMALL_STATE(56)] = 987,
  [SMALL_STATE(57)] = 993,
  [SMALL_STATE(58)] = 1003,
  [SMALL_STATE(59)] = 1013,
  [SMALL_STATE(60)] = 1019,
  [SMALL_STATE(61)] = 1029,
  [SMALL_STATE(62)] = 1036,
  [SMALL_STATE(63)] = 1041,
  [SMALL_STATE(64)] = 1048,
  [SMALL_STATE(65)] = 1055,
  [SMALL_STATE(66)] = 1060,
  [SMALL_STATE(67)] = 1067,
  [SMALL_STATE(68)] = 1072,
  [SMALL_STATE(69)] = 1077,
  [SMALL_STATE(70)] = 1082,
  [SMALL_STATE(71)] = 1089,
  [SMALL_STATE(72)] = 1094,
  [SMALL_STATE(73)] = 1101,
  [SMALL_STATE(74)] = 1105,
  [SMALL_STATE(75)] = 1109,
  [SMALL_STATE(76)] = 1113,
  [SMALL_STATE(77)] = 1117,
  [SMALL_STATE(78)] = 1121,
  [SMALL_STATE(79)] = 1125,
  [SMALL_STATE(80)] = 1129,
  [SMALL_STATE(81)] = 1133,
  [SMALL_STATE(82)] = 1137,
  [SMALL_STATE(83)] = 1141,
  [SMALL_STATE(84)] = 1145,
  [SMALL_STATE(85)] = 1149,
  [SMALL_STATE(86)] = 1153,
  [SMALL_STATE(87)] = 1157,
  [SMALL_STATE(88)] = 1161,
  [SMALL_STATE(89)] = 1165,
  [SMALL_STATE(90)] = 1169,
  [SMALL_STATE(91)] = 1173,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_marker, 5, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_marker, 5, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sound, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound_count, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sound_count, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sound, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_marker, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_marker, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credits, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_works, 1, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(37),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0), SHIFT_REPEAT(64),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 4, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 5, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part_marker, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 4, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_real_number, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_marker, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_work_marker, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part_number, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [236] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_real_marker, 3, 0, 0),
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
