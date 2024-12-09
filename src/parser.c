#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
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
  sym_text = 22,
  sym_source_file = 23,
  sym__header = 24,
  sym__empty = 25,
  sym_works = 26,
  sym_link = 27,
  sym_name = 28,
  sym_work_marker = 29,
  sym_credits = 30,
  sym_role = 31,
  sym_role_marker = 32,
  sym_persons = 33,
  sym_part = 34,
  sym_part_marker = 35,
  sym_part_number = 36,
  sym_page = 37,
  sym_page_marker = 38,
  sym_page_number = 39,
  sym_page_real_marker = 40,
  sym_page_real_number = 41,
  sym_sound = 42,
  sym_sound_count = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_source_file_repeat2 = 45,
  aux_sym_source_file_repeat3 = 46,
  aux_sym_works_repeat1 = 47,
  aux_sym_credits_repeat1 = 48,
  aux_sym_persons_repeat1 = 49,
  aux_sym_part_repeat1 = 50,
  aux_sym_page_repeat1 = 51,
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
  [sym_text] = "text",
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
  [sym_text] = sym_text,
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
        ',', 14,
        ':', 15,
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
      if (lookahead == '=') ADVANCE(12);
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
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(67);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(40);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(42);
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
      if (lookahead == '-') ADVANCE(10);
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
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(11);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '*') ADVANCE(7);
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
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_sound_token2);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_sound_token3);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_sound_marker);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_sound_marker);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_text);
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
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 1},
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
    STATE(5), 2,
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
  [81] = 7,
    ACTIONS(23), 1,
      anon_sym_LF,
    ACTIONS(27), 1,
      sym_sound_marker,
    STATE(59), 1,
      sym__empty,
    STATE(6), 2,
      sym_sound,
      aux_sym_page_repeat1,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(21), 3,
      sym_comment,
      sym_separator,
      sym_text,
    ACTIONS(25), 3,
      aux_sym_sound_token1,
      aux_sym_sound_token2,
      aux_sym_sound_token3,
  [110] = 12,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
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
  [149] = 7,
    ACTIONS(27), 1,
      sym_sound_marker,
    ACTIONS(35), 1,
      anon_sym_LF,
    STATE(56), 1,
      sym__empty,
    STATE(7), 2,
      sym_sound,
      aux_sym_page_repeat1,
    ACTIONS(25), 3,
      aux_sym_sound_token1,
      aux_sym_sound_token2,
      aux_sym_sound_token3,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(33), 3,
      sym_comment,
      sym_separator,
      sym_text,
  [178] = 5,
    ACTIONS(45), 1,
      sym_sound_marker,
    STATE(7), 2,
      sym_sound,
      aux_sym_page_repeat1,
    ACTIONS(39), 3,
      sym_comment,
      sym_separator,
      sym_text,
    ACTIONS(42), 3,
      aux_sym_sound_token1,
      aux_sym_sound_token2,
      aux_sym_sound_token3,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [202] = 2,
    ACTIONS(50), 4,
      aux_sym_sound_token1,
      aux_sym_sound_token2,
      aux_sym_sound_token3,
      sym_sound_marker,
    ACTIONS(48), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      sym_separator,
      sym_text,
  [218] = 2,
    ACTIONS(54), 4,
      aux_sym_sound_token1,
      aux_sym_sound_token2,
      aux_sym_sound_token3,
      sym_sound_marker,
    ACTIONS(52), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      sym_separator,
      sym_text,
  [234] = 2,
    ACTIONS(58), 4,
      aux_sym_sound_token1,
      aux_sym_sound_token2,
      aux_sym_sound_token3,
      sym_sound_marker,
    ACTIONS(56), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      sym_separator,
      sym_text,
  [250] = 2,
    ACTIONS(62), 4,
      aux_sym_sound_token1,
      aux_sym_sound_token2,
      aux_sym_sound_token3,
      sym_sound_marker,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      sym_separator,
      sym_text,
  [266] = 2,
    ACTIONS(66), 4,
      aux_sym_sound_token1,
      aux_sym_sound_token2,
      aux_sym_sound_token3,
      sym_sound_marker,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      sym_separator,
      sym_text,
  [282] = 8,
    ACTIONS(68), 1,
      anon_sym_LF,
    ACTIONS(70), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
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
  [308] = 8,
    ACTIONS(70), 1,
      anon_sym_POUND,
    ACTIONS(74), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
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
  [334] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
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
  [358] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(78), 1,
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
  [382] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(80), 1,
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
  [406] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(82), 1,
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
  [430] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(84), 1,
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
  [454] = 7,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(70), 1,
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
  [477] = 7,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(70), 1,
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
  [500] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(86), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_part_marker,
    STATE(18), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [518] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(88), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_part_marker,
    STATE(15), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(49), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [536] = 5,
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
  [554] = 5,
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
  [572] = 5,
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
  [590] = 5,
    ACTIONS(92), 1,
      anon_sym_POUND,
    STATE(27), 1,
      aux_sym_credits_repeat1,
    STATE(40), 1,
      sym_role,
    STATE(86), 1,
      sym_role_marker,
    ACTIONS(90), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [607] = 5,
    ACTIONS(97), 1,
      anon_sym_POUND,
    STATE(28), 1,
      aux_sym_works_repeat1,
    STATE(51), 1,
      sym_name,
    STATE(88), 1,
      sym_work_marker,
    ACTIONS(95), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [624] = 5,
    ACTIONS(100), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_EQ_EQ,
    STATE(4), 1,
      sym_page_marker,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
    STATE(34), 2,
      sym_page,
      aux_sym_part_repeat1,
  [641] = 5,
    ACTIONS(70), 1,
      anon_sym_POUND,
    STATE(27), 1,
      aux_sym_credits_repeat1,
    STATE(40), 1,
      sym_role,
    STATE(86), 1,
      sym_role_marker,
    ACTIONS(104), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [658] = 4,
    ACTIONS(102), 1,
      anon_sym_EQ_EQ,
    STATE(4), 1,
      sym_page_marker,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(32), 2,
      sym_page,
      aux_sym_part_repeat1,
  [673] = 4,
    ACTIONS(110), 1,
      anon_sym_EQ_EQ,
    STATE(4), 1,
      sym_page_marker,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(32), 2,
      sym_page,
      aux_sym_part_repeat1,
  [688] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_EQ_EQ,
    STATE(4), 1,
      sym_page_marker,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    STATE(31), 2,
      sym_page,
      aux_sym_part_repeat1,
  [705] = 4,
    ACTIONS(102), 1,
      anon_sym_EQ_EQ,
    STATE(4), 1,
      sym_page_marker,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(32), 2,
      sym_page,
      aux_sym_part_repeat1,
  [720] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(28), 1,
      aux_sym_works_repeat1,
    STATE(51), 1,
      sym_name,
    STATE(88), 1,
      sym_work_marker,
    ACTIONS(115), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [737] = 3,
    ACTIONS(117), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(120), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [750] = 3,
    ACTIONS(124), 1,
      anon_sym_LF,
    STATE(37), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    ACTIONS(122), 3,
      sym_comment,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [763] = 4,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      anon_sym_EQ_EQ_EQ,
    STATE(29), 1,
      sym_part_marker,
    STATE(38), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [777] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(90), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [789] = 3,
    ACTIONS(132), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(134), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [801] = 3,
    ACTIONS(136), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(95), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [813] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_POUND,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    STATE(47), 1,
      sym_link,
    STATE(79), 1,
      sym_work_marker,
  [829] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_part_marker,
    STATE(38), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [843] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(142), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [855] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(144), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [867] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_part_marker,
    STATE(38), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [881] = 3,
    ACTIONS(148), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(144), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [893] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_part_marker,
    STATE(38), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [907] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_part_marker,
    STATE(38), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [921] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_part_marker,
    STATE(38), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [935] = 5,
    ACTIONS(138), 1,
      anon_sym_POUND,
    ACTIONS(156), 1,
      sym_comment,
    STATE(41), 1,
      sym_link,
    STATE(42), 1,
      aux_sym_source_file_repeat1,
    STATE(79), 1,
      sym_work_marker,
  [951] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_part_marker,
    STATE(38), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [965] = 1,
    ACTIONS(160), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [972] = 1,
    ACTIONS(162), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [979] = 3,
    ACTIONS(164), 1,
      anon_sym_LF,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_page_real_marker,
  [989] = 1,
    ACTIONS(168), 3,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [995] = 3,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(172), 1,
      sym_persons_separator,
    STATE(60), 1,
      aux_sym_persons_repeat1,
  [1005] = 3,
    ACTIONS(172), 1,
      sym_persons_separator,
    ACTIONS(174), 1,
      anon_sym_LF,
    STATE(57), 1,
      aux_sym_persons_repeat1,
  [1015] = 1,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [1021] = 3,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(178), 1,
      sym_persons_separator,
    STATE(60), 1,
      aux_sym_persons_repeat1,
  [1031] = 2,
    ACTIONS(181), 1,
      aux_sym_part_number_token1,
    STATE(76), 1,
      sym_page_number,
  [1038] = 1,
    ACTIONS(183), 2,
      sym_comment,
      anon_sym_POUND,
  [1043] = 2,
    ACTIONS(185), 1,
      aux_sym_part_number_token1,
    STATE(85), 1,
      sym_page_real_number,
  [1050] = 2,
    ACTIONS(187), 1,
      aux_sym_part_number_token1,
    STATE(87), 1,
      sym_part_number,
  [1057] = 1,
    ACTIONS(189), 2,
      sym_comment,
      anon_sym_EQ_EQ,
  [1062] = 2,
    ACTIONS(191), 1,
      sym_nickname,
    STATE(75), 1,
      sym_persons,
  [1069] = 1,
    ACTIONS(193), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [1074] = 1,
    ACTIONS(72), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [1079] = 1,
    ACTIONS(195), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [1084] = 2,
    ACTIONS(197), 1,
      aux_sym_part_number_token1,
    STATE(9), 1,
      sym_sound_count,
  [1091] = 1,
    ACTIONS(176), 2,
      anon_sym_LF,
      sym_persons_separator,
  [1096] = 2,
    ACTIONS(197), 1,
      aux_sym_part_number_token1,
    STATE(11), 1,
      sym_sound_count,
  [1103] = 1,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
  [1107] = 1,
    ACTIONS(201), 1,
      anon_sym_EQ_EQ2,
  [1111] = 1,
    ACTIONS(203), 1,
      anon_sym_LF,
  [1115] = 1,
    ACTIONS(205), 1,
      anon_sym_EQ_EQ2,
  [1119] = 1,
    ACTIONS(207), 1,
      sym_sound_marker,
  [1123] = 1,
    ACTIONS(209), 1,
      anon_sym_LF,
  [1127] = 1,
    ACTIONS(211), 1,
      aux_sym_link_token1,
  [1131] = 1,
    ACTIONS(213), 1,
      sym__role_name,
  [1135] = 1,
    ACTIONS(215), 1,
      sym_nickname,
  [1139] = 1,
    ACTIONS(217), 1,
      aux_sym_name_token1,
  [1143] = 1,
    ACTIONS(219), 1,
      anon_sym_COLON,
  [1147] = 1,
    ACTIONS(221), 1,
      anon_sym_EQ_EQ_EQ_LF,
  [1151] = 1,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
  [1155] = 1,
    ACTIONS(225), 1,
      sym__role_name,
  [1159] = 1,
    ACTIONS(227), 1,
      anon_sym_EQ_EQ_EQ_LF,
  [1163] = 1,
    ACTIONS(229), 1,
      aux_sym_name_token1,
  [1167] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
  [1171] = 1,
    ACTIONS(233), 1,
      anon_sym_LF,
  [1175] = 1,
    ACTIONS(217), 1,
      aux_sym_link_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 149,
  [SMALL_STATE(7)] = 178,
  [SMALL_STATE(8)] = 202,
  [SMALL_STATE(9)] = 218,
  [SMALL_STATE(10)] = 234,
  [SMALL_STATE(11)] = 250,
  [SMALL_STATE(12)] = 266,
  [SMALL_STATE(13)] = 282,
  [SMALL_STATE(14)] = 308,
  [SMALL_STATE(15)] = 334,
  [SMALL_STATE(16)] = 358,
  [SMALL_STATE(17)] = 382,
  [SMALL_STATE(18)] = 406,
  [SMALL_STATE(19)] = 430,
  [SMALL_STATE(20)] = 454,
  [SMALL_STATE(21)] = 477,
  [SMALL_STATE(22)] = 500,
  [SMALL_STATE(23)] = 518,
  [SMALL_STATE(24)] = 536,
  [SMALL_STATE(25)] = 554,
  [SMALL_STATE(26)] = 572,
  [SMALL_STATE(27)] = 590,
  [SMALL_STATE(28)] = 607,
  [SMALL_STATE(29)] = 624,
  [SMALL_STATE(30)] = 641,
  [SMALL_STATE(31)] = 658,
  [SMALL_STATE(32)] = 673,
  [SMALL_STATE(33)] = 688,
  [SMALL_STATE(34)] = 705,
  [SMALL_STATE(35)] = 720,
  [SMALL_STATE(36)] = 737,
  [SMALL_STATE(37)] = 750,
  [SMALL_STATE(38)] = 763,
  [SMALL_STATE(39)] = 777,
  [SMALL_STATE(40)] = 789,
  [SMALL_STATE(41)] = 801,
  [SMALL_STATE(42)] = 813,
  [SMALL_STATE(43)] = 829,
  [SMALL_STATE(44)] = 843,
  [SMALL_STATE(45)] = 855,
  [SMALL_STATE(46)] = 867,
  [SMALL_STATE(47)] = 881,
  [SMALL_STATE(48)] = 893,
  [SMALL_STATE(49)] = 907,
  [SMALL_STATE(50)] = 921,
  [SMALL_STATE(51)] = 935,
  [SMALL_STATE(52)] = 951,
  [SMALL_STATE(53)] = 965,
  [SMALL_STATE(54)] = 972,
  [SMALL_STATE(55)] = 979,
  [SMALL_STATE(56)] = 989,
  [SMALL_STATE(57)] = 995,
  [SMALL_STATE(58)] = 1005,
  [SMALL_STATE(59)] = 1015,
  [SMALL_STATE(60)] = 1021,
  [SMALL_STATE(61)] = 1031,
  [SMALL_STATE(62)] = 1038,
  [SMALL_STATE(63)] = 1043,
  [SMALL_STATE(64)] = 1050,
  [SMALL_STATE(65)] = 1057,
  [SMALL_STATE(66)] = 1062,
  [SMALL_STATE(67)] = 1069,
  [SMALL_STATE(68)] = 1074,
  [SMALL_STATE(69)] = 1079,
  [SMALL_STATE(70)] = 1084,
  [SMALL_STATE(71)] = 1091,
  [SMALL_STATE(72)] = 1096,
  [SMALL_STATE(73)] = 1103,
  [SMALL_STATE(74)] = 1107,
  [SMALL_STATE(75)] = 1111,
  [SMALL_STATE(76)] = 1115,
  [SMALL_STATE(77)] = 1119,
  [SMALL_STATE(78)] = 1123,
  [SMALL_STATE(79)] = 1127,
  [SMALL_STATE(80)] = 1131,
  [SMALL_STATE(81)] = 1135,
  [SMALL_STATE(82)] = 1139,
  [SMALL_STATE(83)] = 1143,
  [SMALL_STATE(84)] = 1147,
  [SMALL_STATE(85)] = 1151,
  [SMALL_STATE(86)] = 1155,
  [SMALL_STATE(87)] = 1159,
  [SMALL_STATE(88)] = 1163,
  [SMALL_STATE(89)] = 1167,
  [SMALL_STATE(90)] = 1171,
  [SMALL_STATE(91)] = 1175,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_marker, 5, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_marker, 5, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sound, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound_count, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sound_count, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sound, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_marker, 4, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_marker, 4, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credits, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_works, 1, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(37),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0), SHIFT_REPEAT(64),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 4, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 5, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part_marker, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 4, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_real_number, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_marker, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_work_marker, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part_number, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [231] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_real_marker, 3, 0, 0),
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
