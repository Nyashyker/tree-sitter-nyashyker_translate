#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_comment_token1 = 1,
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
  sym_sound_marker = 18,
  sym_separator = 19,
  sym_text = 20,
  sym_source_file = 21,
  sym__header = 22,
  sym_comment = 23,
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
  [aux_sym_comment_token1] = "comment_token1",
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
  [sym_sound_marker] = "sound_marker",
  [sym_separator] = "separator",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym__header] = "_header",
  [sym_comment] = "comment",
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
  [aux_sym_comment_token1] = aux_sym_comment_token1,
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
  [sym_sound_marker] = sym_sound_marker,
  [sym_separator] = sym_separator,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym__header] = sym__header,
  [sym_comment] = sym_comment,
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
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
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
  [sym_comment] = {
    .visible = true,
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
  [47] = 21,
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
  [91] = 91,
  [92] = 73,
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
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '\n', 30,
        ' ', 12,
        '#', 33,
        ')', 54,
        '*', 65,
        ',', 6,
        '0', 48,
        ':', 7,
        '=', 1,
        'h', 42,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead == 0x404 ||
          lookahead == 0x406 ||
          lookahead == 0x407 ||
          (0x410 <= lookahead && lookahead <= 0x429) ||
          lookahead == 0x42e ||
          lookahead == 0x42f ||
          lookahead == 0x490) ADVANCE(35);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(31);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(32);
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '=') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == 'h') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead == 0x404 ||
          lookahead == 0x406 ||
          lookahead == 0x407 ||
          (0x410 <= lookahead && lookahead <= 0x429) ||
          lookahead == 0x42e ||
          lookahead == 0x42f ||
          lookahead == 0x490) ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(20);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(3);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 26:
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(4);
      END_STATE();
    case 27:
      if ((' ' <= lookahead && lookahead <= '~')) ADVANCE(5);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_link_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_name_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__role_name);
      if (set_contains(sym__role_name_character_set_1, 9, lookahead)) ADVANCE(35);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__role_name);
      if (set_contains(sym__role_name_character_set_1, 9, lookahead)) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == '0') ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == ':') ADVANCE(14);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 'p') ADVANCE(40);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 's') ADVANCE(38);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 't') ADVANCE(39);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_nickname);
      if (lookahead == 't') ADVANCE(41);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_nickname);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_persons_separator);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_LF);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_part_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ_EQ2);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ_EQ2);
      if (lookahead == '=') ADVANCE(3);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_sound_token1);
      if (eof) ADVANCE(28);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_sound_marker);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_text);
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
  [5] = {.lex_state = 64},
  [6] = {.lex_state = 64},
  [7] = {.lex_state = 64},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 64},
  [19] = {.lex_state = 64},
  [20] = {.lex_state = 64},
  [21] = {.lex_state = 64},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 27},
  [92] = {.lex_state = 10},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym_link_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__role_name] = ACTIONS(1),
    [sym_nickname] = ACTIONS(1),
    [sym_persons_separator] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_LF] = ACTIONS(1),
    [aux_sym_part_number_token1] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_sound_marker] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym__header] = STATE(22),
    [sym_comment] = STATE(2),
    [sym__empty] = STATE(4),
    [sym_works] = STATE(13),
    [sym_name] = STATE(41),
    [sym_work_marker] = STATE(91),
    [sym_part] = STATE(49),
    [sym_part_marker] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(4),
    [aux_sym_source_file_repeat3] = STATE(49),
    [aux_sym_works_repeat1] = STATE(34),
    [aux_sym_comment_token1] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_LF,
    STATE(13), 1,
      sym_works,
    STATE(24), 1,
      sym__header,
    STATE(25), 1,
      sym_part_marker,
    STATE(34), 1,
      aux_sym_works_repeat1,
    STATE(41), 1,
      sym_name,
    STATE(91), 1,
      sym_work_marker,
    STATE(3), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(26), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(48), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [43] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym_works,
    STATE(25), 1,
      sym_part_marker,
    STATE(34), 1,
      aux_sym_works_repeat1,
    STATE(41), 1,
      sym_name,
    STATE(91), 1,
      sym_work_marker,
    STATE(11), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(16), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(51), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [83] = 12,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym_works,
    STATE(25), 1,
      sym_part_marker,
    STATE(34), 1,
      aux_sym_works_repeat1,
    STATE(41), 1,
      sym_name,
    STATE(91), 1,
      sym_work_marker,
    STATE(9), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(16), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(48), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [123] = 9,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 1,
      anon_sym_LF,
    ACTIONS(23), 1,
      aux_sym_sound_token1,
    ACTIONS(25), 1,
      sym_separator,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(21), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(37), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(6), 3,
      sym_comment,
      sym_sound,
      aux_sym_page_repeat1,
  [155] = 9,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      aux_sym_sound_token1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(35), 1,
      sym_separator,
    ACTIONS(37), 1,
      sym_text,
    ACTIONS(33), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(45), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(7), 3,
      sym_comment,
      sym_sound,
      aux_sym_page_repeat1,
  [187] = 7,
    ACTIONS(41), 1,
      aux_sym_comment_token1,
    ACTIONS(46), 1,
      aux_sym_sound_token1,
    ACTIONS(49), 1,
      sym_separator,
    ACTIONS(52), 1,
      sym_text,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(44), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(7), 3,
      sym_comment,
      sym_sound,
      aux_sym_page_repeat1,
  [213] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym_part_marker,
    STATE(11), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(16), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(51), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [238] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(55), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym_part_marker,
    STATE(26), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(28), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(51), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [263] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym_part_marker,
    STATE(12), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(16), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(53), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [288] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(57), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym_part_marker,
    STATE(26), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(27), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(53), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [313] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(59), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym_part_marker,
    STATE(26), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(29), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(52), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [338] = 8,
    ACTIONS(61), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      anon_sym_EQ_EQ_EQ,
    STATE(40), 1,
      sym_role,
    STATE(43), 1,
      aux_sym_credits_repeat1,
    STATE(69), 1,
      sym_credits,
    STATE(87), 1,
      sym_role_marker,
    STATE(15), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [364] = 8,
    ACTIONS(63), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_LF,
    ACTIONS(69), 1,
      anon_sym_EQ_EQ_EQ,
    STATE(40), 1,
      sym_role,
    STATE(43), 1,
      aux_sym_credits_repeat1,
    STATE(68), 1,
      sym_credits,
    STATE(87), 1,
      sym_role_marker,
    STATE(17), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [390] = 7,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_role,
    STATE(43), 1,
      aux_sym_credits_repeat1,
    STATE(68), 1,
      sym_credits,
    STATE(87), 1,
      sym_role_marker,
    STATE(16), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [413] = 3,
    ACTIONS(73), 1,
      anon_sym_LF,
    STATE(16), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [428] = 7,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(63), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_role,
    STATE(43), 1,
      aux_sym_credits_repeat1,
    STATE(64), 1,
      sym_credits,
    STATE(87), 1,
      sym_role_marker,
    STATE(16), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [451] = 2,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_LF,
      sym_separator,
    ACTIONS(78), 4,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_text,
  [464] = 2,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_LF,
      sym_separator,
    ACTIONS(82), 4,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_text,
  [477] = 2,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_LF,
      sym_separator,
    ACTIONS(86), 4,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_text,
  [490] = 2,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_LF,
      sym_separator,
    ACTIONS(90), 4,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_text,
  [503] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(92), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym_part_marker,
    STATE(8), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(48), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [521] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(94), 1,
      anon_sym_EQ_EQ,
    STATE(5), 1,
      sym_page_marker,
    STATE(26), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(38), 2,
      sym_page,
      aux_sym_part_repeat1,
  [539] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(96), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym_part_marker,
    STATE(10), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(51), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [557] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(94), 1,
      anon_sym_EQ_EQ,
    STATE(5), 1,
      sym_page_marker,
    STATE(23), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(31), 2,
      sym_page,
      aux_sym_part_repeat1,
  [575] = 3,
    ACTIONS(98), 1,
      aux_sym_comment_token1,
    STATE(26), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(101), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [589] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym_part_marker,
    STATE(16), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(52), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [607] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym_part_marker,
    STATE(16), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(53), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [625] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym_part_marker,
    STATE(16), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(54), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [643] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(26), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(103), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [656] = 4,
    ACTIONS(94), 1,
      anon_sym_EQ_EQ,
    STATE(5), 1,
      sym_page_marker,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(39), 2,
      sym_page,
      aux_sym_part_repeat1,
  [671] = 5,
    ACTIONS(107), 1,
      anon_sym_POUND,
    STATE(32), 1,
      aux_sym_credits_repeat1,
    STATE(40), 1,
      sym_role,
    STATE(87), 1,
      sym_role_marker,
    ACTIONS(103), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [688] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(26), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(110), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [701] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(36), 1,
      aux_sym_works_repeat1,
    STATE(41), 1,
      sym_name,
    STATE(91), 1,
      sym_work_marker,
    ACTIONS(112), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [718] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(42), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(110), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [731] = 5,
    ACTIONS(116), 1,
      anon_sym_POUND,
    STATE(36), 1,
      aux_sym_works_repeat1,
    STATE(41), 1,
      sym_name,
    STATE(91), 1,
      sym_work_marker,
    ACTIONS(114), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [748] = 3,
    ACTIONS(13), 1,
      anon_sym_LF,
    STATE(16), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [761] = 4,
    ACTIONS(94), 1,
      anon_sym_EQ_EQ,
    STATE(5), 1,
      sym_page_marker,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(39), 2,
      sym_page,
      aux_sym_part_repeat1,
  [776] = 4,
    ACTIONS(123), 1,
      anon_sym_EQ_EQ,
    STATE(5), 1,
      sym_page_marker,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(39), 2,
      sym_page,
      aux_sym_part_repeat1,
  [791] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(30), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(126), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [804] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(128), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_link,
    STATE(81), 1,
      sym_work_marker,
    STATE(46), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [821] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(26), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(130), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [834] = 5,
    ACTIONS(63), 1,
      anon_sym_POUND,
    STATE(32), 1,
      aux_sym_credits_repeat1,
    STATE(40), 1,
      sym_role,
    STATE(87), 1,
      sym_role_marker,
    ACTIONS(132), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [851] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(33), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(114), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [864] = 3,
    ACTIONS(13), 1,
      anon_sym_LF,
    STATE(16), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [877] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(128), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_link,
    STATE(81), 1,
      sym_work_marker,
    STATE(26), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [894] = 1,
    ACTIONS(88), 5,
      aux_sym_comment_token1,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [902] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_part_marker,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [916] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_part_marker,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [930] = 4,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      anon_sym_EQ_EQ_EQ,
    STATE(25), 1,
      sym_part_marker,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [944] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_part_marker,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [958] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_part_marker,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [972] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_part_marker,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [986] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_part_marker,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [1000] = 1,
    ACTIONS(153), 4,
      aux_sym_comment_token1,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [1007] = 1,
    ACTIONS(155), 4,
      aux_sym_comment_token1,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [1014] = 3,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(159), 1,
      sym_persons_separator,
    STATE(59), 1,
      aux_sym_persons_repeat1,
  [1024] = 3,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_page_real_marker,
  [1034] = 3,
    ACTIONS(159), 1,
      sym_persons_separator,
    ACTIONS(165), 1,
      anon_sym_LF,
    STATE(60), 1,
      aux_sym_persons_repeat1,
  [1044] = 3,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(169), 1,
      sym_persons_separator,
    STATE(60), 1,
      aux_sym_persons_repeat1,
  [1054] = 2,
    ACTIONS(172), 1,
      aux_sym_part_number_token1,
    STATE(72), 1,
      sym_part_number,
  [1061] = 2,
    ACTIONS(174), 1,
      aux_sym_part_number_token1,
    STATE(84), 1,
      sym_sound_count,
  [1068] = 2,
    ACTIONS(176), 1,
      sym_nickname,
    STATE(80), 1,
      sym_persons,
  [1075] = 1,
    ACTIONS(178), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [1080] = 2,
    ACTIONS(180), 1,
      aux_sym_part_number_token1,
    STATE(86), 1,
      sym_page_real_number,
  [1087] = 1,
    ACTIONS(182), 2,
      aux_sym_comment_token1,
      anon_sym_EQ_EQ,
  [1092] = 1,
    ACTIONS(184), 2,
      aux_sym_comment_token1,
      anon_sym_POUND,
  [1097] = 1,
    ACTIONS(186), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [1102] = 1,
    ACTIONS(69), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [1107] = 1,
    ACTIONS(167), 2,
      anon_sym_LF,
      sym_persons_separator,
  [1112] = 2,
    ACTIONS(188), 1,
      aux_sym_part_number_token1,
    STATE(74), 1,
      sym_page_number,
  [1119] = 1,
    ACTIONS(190), 1,
      anon_sym_EQ_EQ_EQ_LF,
  [1123] = 1,
    ACTIONS(192), 1,
      aux_sym_name_token1,
  [1127] = 1,
    ACTIONS(194), 1,
      anon_sym_EQ_EQ2,
  [1131] = 1,
    ACTIONS(196), 1,
      anon_sym_EQ_EQ2,
  [1135] = 1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
  [1139] = 1,
    ACTIONS(200), 1,
      sym_sound_marker,
  [1143] = 1,
    ACTIONS(202), 1,
      sym__role_name,
  [1147] = 1,
    ACTIONS(204), 1,
      anon_sym_COLON,
  [1151] = 1,
    ACTIONS(206), 1,
      anon_sym_LF,
  [1155] = 1,
    ACTIONS(208), 1,
      aux_sym_link_token1,
  [1159] = 1,
    ACTIONS(210), 1,
      anon_sym_LF,
  [1163] = 1,
    ACTIONS(212), 1,
      sym_nickname,
  [1167] = 1,
    ACTIONS(214), 1,
      anon_sym_LF,
  [1171] = 1,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
  [1175] = 1,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
  [1179] = 1,
    ACTIONS(220), 1,
      sym__role_name,
  [1183] = 1,
    ACTIONS(222), 1,
      anon_sym_EQ_EQ_EQ_LF,
  [1187] = 1,
    ACTIONS(224), 1,
      anon_sym_LF,
  [1191] = 1,
    ACTIONS(226), 1,
      anon_sym_LF,
  [1195] = 1,
    ACTIONS(228), 1,
      aux_sym_name_token1,
  [1199] = 1,
    ACTIONS(192), 1,
      aux_sym_link_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 83,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 155,
  [SMALL_STATE(7)] = 187,
  [SMALL_STATE(8)] = 213,
  [SMALL_STATE(9)] = 238,
  [SMALL_STATE(10)] = 263,
  [SMALL_STATE(11)] = 288,
  [SMALL_STATE(12)] = 313,
  [SMALL_STATE(13)] = 338,
  [SMALL_STATE(14)] = 364,
  [SMALL_STATE(15)] = 390,
  [SMALL_STATE(16)] = 413,
  [SMALL_STATE(17)] = 428,
  [SMALL_STATE(18)] = 451,
  [SMALL_STATE(19)] = 464,
  [SMALL_STATE(20)] = 477,
  [SMALL_STATE(21)] = 490,
  [SMALL_STATE(22)] = 503,
  [SMALL_STATE(23)] = 521,
  [SMALL_STATE(24)] = 539,
  [SMALL_STATE(25)] = 557,
  [SMALL_STATE(26)] = 575,
  [SMALL_STATE(27)] = 589,
  [SMALL_STATE(28)] = 607,
  [SMALL_STATE(29)] = 625,
  [SMALL_STATE(30)] = 643,
  [SMALL_STATE(31)] = 656,
  [SMALL_STATE(32)] = 671,
  [SMALL_STATE(33)] = 688,
  [SMALL_STATE(34)] = 701,
  [SMALL_STATE(35)] = 718,
  [SMALL_STATE(36)] = 731,
  [SMALL_STATE(37)] = 748,
  [SMALL_STATE(38)] = 761,
  [SMALL_STATE(39)] = 776,
  [SMALL_STATE(40)] = 791,
  [SMALL_STATE(41)] = 804,
  [SMALL_STATE(42)] = 821,
  [SMALL_STATE(43)] = 834,
  [SMALL_STATE(44)] = 851,
  [SMALL_STATE(45)] = 864,
  [SMALL_STATE(46)] = 877,
  [SMALL_STATE(47)] = 894,
  [SMALL_STATE(48)] = 902,
  [SMALL_STATE(49)] = 916,
  [SMALL_STATE(50)] = 930,
  [SMALL_STATE(51)] = 944,
  [SMALL_STATE(52)] = 958,
  [SMALL_STATE(53)] = 972,
  [SMALL_STATE(54)] = 986,
  [SMALL_STATE(55)] = 1000,
  [SMALL_STATE(56)] = 1007,
  [SMALL_STATE(57)] = 1014,
  [SMALL_STATE(58)] = 1024,
  [SMALL_STATE(59)] = 1034,
  [SMALL_STATE(60)] = 1044,
  [SMALL_STATE(61)] = 1054,
  [SMALL_STATE(62)] = 1061,
  [SMALL_STATE(63)] = 1068,
  [SMALL_STATE(64)] = 1075,
  [SMALL_STATE(65)] = 1080,
  [SMALL_STATE(66)] = 1087,
  [SMALL_STATE(67)] = 1092,
  [SMALL_STATE(68)] = 1097,
  [SMALL_STATE(69)] = 1102,
  [SMALL_STATE(70)] = 1107,
  [SMALL_STATE(71)] = 1112,
  [SMALL_STATE(72)] = 1119,
  [SMALL_STATE(73)] = 1123,
  [SMALL_STATE(74)] = 1127,
  [SMALL_STATE(75)] = 1131,
  [SMALL_STATE(76)] = 1135,
  [SMALL_STATE(77)] = 1139,
  [SMALL_STATE(78)] = 1143,
  [SMALL_STATE(79)] = 1147,
  [SMALL_STATE(80)] = 1151,
  [SMALL_STATE(81)] = 1155,
  [SMALL_STATE(82)] = 1159,
  [SMALL_STATE(83)] = 1163,
  [SMALL_STATE(84)] = 1167,
  [SMALL_STATE(85)] = 1171,
  [SMALL_STATE(86)] = 1175,
  [SMALL_STATE(87)] = 1179,
  [SMALL_STATE(88)] = 1183,
  [SMALL_STATE(89)] = 1187,
  [SMALL_STATE(90)] = 1191,
  [SMALL_STATE(91)] = 1195,
  [SMALL_STATE(92)] = 1199,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(16),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_marker, 4, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_marker, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_marker, 5, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_marker, 5, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound, 4, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sound, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_works, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credits, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0), SHIFT_REPEAT(61),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 5, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part_marker, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_work_marker, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_marker, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_real_number, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part_number, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound_count, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_real_marker, 3, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
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
