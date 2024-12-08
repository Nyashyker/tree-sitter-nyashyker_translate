#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
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
  sym_sound_marker = 18,
  sym_separator = 19,
  aux_sym_text_token1 = 20,
  sym_source_file = 21,
  sym__header = 22,
  sym__empty = 23,
  sym_works = 24,
  sym_link = 25,
  sym_name = 26,
  sym_work_marker = 27,
  sym_credits = 28,
  sym_role = 29,
  sym_role_marker = 30,
  sym_persons = 31,
  sym_part = 32,
  sym_part_marker = 33,
  sym_part_number = 34,
  sym_page = 35,
  sym_page_marker = 36,
  sym_page_number = 37,
  sym_page_real_marker = 38,
  sym_page_real_number = 39,
  sym_sound = 40,
  sym_sound_number = 41,
  sym_text = 42,
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
  [sym_sound_marker] = "sound_marker",
  [sym_separator] = "separator",
  [aux_sym_text_token1] = "text_token1",
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
  [sym_sound_number] = "sound_number",
  [sym_text] = "text",
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
  [sym_sound_marker] = sym_sound_marker,
  [sym_separator] = sym_separator,
  [aux_sym_text_token1] = aux_sym_text_token1,
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
  [sym_sound_number] = sym_sound_number,
  [sym_text] = sym_text,
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
  [sym_sound_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
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
  [sym_sound_number] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
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
  [91] = 85,
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
      if (lookahead == ' ') ADVANCE(19);
      if (set_contains(sym_nickname_character_set_1, 16, lookahead)) ADVANCE(43);
      END_STATE();
    case 11:
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
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(20);
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
      ACCEPT_TOKEN(sym_comment);
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
      ACCEPT_TOKEN(aux_sym_text_token1);
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
  [15] = {.lex_state = 64},
  [16] = {.lex_state = 64},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 64},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
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
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 27},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 11},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
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
    [sym_source_file] = STATE(74),
    [sym__header] = STATE(23),
    [sym__empty] = STATE(4),
    [sym_works] = STATE(11),
    [sym_name] = STATE(43),
    [sym_work_marker] = STATE(72),
    [sym_part] = STATE(44),
    [sym_part_marker] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(4),
    [aux_sym_source_file_repeat3] = STATE(44),
    [aux_sym_works_repeat1] = STATE(29),
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
    STATE(11), 1,
      sym_works,
    STATE(22), 1,
      sym__header,
    STATE(29), 1,
      aux_sym_works_repeat1,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 1,
      sym_part_marker,
    STATE(43), 1,
      sym_name,
    STATE(72), 1,
      sym_work_marker,
    STATE(3), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(42), 2,
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
    STATE(9), 1,
      sym_works,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    STATE(29), 1,
      aux_sym_works_repeat1,
    STATE(32), 1,
      sym_part_marker,
    STATE(43), 1,
      sym_name,
    STATE(72), 1,
      sym_work_marker,
    STATE(17), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
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
    STATE(9), 1,
      sym_works,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
    STATE(29), 1,
      aux_sym_works_repeat1,
    STATE(32), 1,
      sym_part_marker,
    STATE(43), 1,
      sym_name,
    STATE(72), 1,
      sym_work_marker,
    STATE(17), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(42), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [120] = 8,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
      aux_sym_sound_token1,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(23), 2,
      sym_comment,
      sym_separator,
    ACTIONS(27), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(36), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(7), 3,
      sym_sound,
      sym_text,
      aux_sym_page_repeat1,
  [150] = 8,
    ACTIONS(29), 1,
      aux_sym_sound_token1,
    ACTIONS(31), 1,
      aux_sym_text_token1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(35), 2,
      sym_comment,
      sym_separator,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(34), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(5), 3,
      sym_sound,
      sym_text,
      aux_sym_page_repeat1,
  [180] = 6,
    ACTIONS(48), 1,
      aux_sym_sound_token1,
    ACTIONS(51), 1,
      aux_sym_text_token1,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(43), 2,
      sym_comment,
      sym_separator,
    ACTIONS(46), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(7), 3,
      sym_sound,
      sym_text,
      aux_sym_page_repeat1,
  [204] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 1,
      sym_part_marker,
    STATE(17), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [228] = 8,
    ACTIONS(54), 1,
      anon_sym_LF,
    ACTIONS(56), 1,
      anon_sym_POUND,
    ACTIONS(58), 1,
      anon_sym_EQ_EQ_EQ,
    STATE(38), 1,
      aux_sym_credits_repeat1,
    STATE(49), 1,
      sym_role,
    STATE(64), 1,
      sym_credits,
    STATE(88), 1,
      sym_role_marker,
    STATE(20), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [254] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_LF,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 1,
      sym_part_marker,
    STATE(24), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(46), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [278] = 8,
    ACTIONS(56), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      anon_sym_LF,
    ACTIONS(64), 1,
      anon_sym_EQ_EQ_EQ,
    STATE(38), 1,
      aux_sym_credits_repeat1,
    STATE(49), 1,
      sym_role,
    STATE(62), 1,
      sym_credits,
    STATE(88), 1,
      sym_role_marker,
    STATE(19), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [304] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_LF,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 1,
      sym_part_marker,
    STATE(25), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [328] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(68), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 1,
      sym_part_marker,
    STATE(17), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(46), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [352] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LF,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 1,
      sym_part_marker,
    STATE(26), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(39), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [376] = 2,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      sym_separator,
    ACTIONS(74), 4,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      aux_sym_text_token1,
  [389] = 2,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      sym_separator,
    ACTIONS(78), 4,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      aux_sym_text_token1,
  [402] = 3,
    ACTIONS(82), 1,
      anon_sym_LF,
    STATE(17), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [417] = 2,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      sym_separator,
    ACTIONS(87), 4,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      aux_sym_text_token1,
  [430] = 7,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(56), 1,
      anon_sym_POUND,
    STATE(38), 1,
      aux_sym_credits_repeat1,
    STATE(49), 1,
      sym_role,
    STATE(64), 1,
      sym_credits,
    STATE(88), 1,
      sym_role_marker,
    STATE(17), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [453] = 7,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(56), 1,
      anon_sym_POUND,
    STATE(38), 1,
      aux_sym_credits_repeat1,
    STATE(49), 1,
      sym_role,
    STATE(66), 1,
      sym_credits,
    STATE(88), 1,
      sym_role_marker,
    STATE(17), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [476] = 2,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      sym_separator,
    ACTIONS(91), 4,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      aux_sym_text_token1,
  [489] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(93), 1,
      anon_sym_LF,
    STATE(32), 1,
      sym_part_marker,
    STATE(13), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [507] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(95), 1,
      anon_sym_LF,
    STATE(32), 1,
      sym_part_marker,
    STATE(8), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(42), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [525] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(32), 1,
      sym_part_marker,
    STATE(17), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(39), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [543] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(32), 1,
      sym_part_marker,
    STATE(17), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(46), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [561] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(32), 1,
      sym_part_marker,
    STATE(17), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(53), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [579] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_EQ_EQ,
    STATE(6), 1,
      sym_page_marker,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
    STATE(35), 2,
      sym_page,
      aux_sym_part_repeat1,
  [596] = 4,
    ACTIONS(97), 1,
      anon_sym_EQ_EQ,
    STATE(6), 1,
      sym_page_marker,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(37), 2,
      sym_page,
      aux_sym_part_repeat1,
  [611] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(31), 1,
      aux_sym_works_repeat1,
    STATE(43), 1,
      sym_name,
    STATE(72), 1,
      sym_work_marker,
    ACTIONS(101), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [628] = 3,
    ACTIONS(103), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(106), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [641] = 5,
    ACTIONS(110), 1,
      anon_sym_POUND,
    STATE(31), 1,
      aux_sym_works_repeat1,
    STATE(43), 1,
      sym_name,
    STATE(72), 1,
      sym_work_marker,
    ACTIONS(108), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [658] = 5,
    ACTIONS(97), 1,
      anon_sym_EQ_EQ,
    ACTIONS(113), 1,
      sym_comment,
    STATE(6), 1,
      sym_page_marker,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(28), 2,
      sym_page,
      aux_sym_part_repeat1,
  [675] = 5,
    ACTIONS(117), 1,
      anon_sym_POUND,
    STATE(33), 1,
      aux_sym_credits_repeat1,
    STATE(49), 1,
      sym_role,
    STATE(88), 1,
      sym_role_marker,
    ACTIONS(115), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [692] = 3,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(17), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [705] = 4,
    ACTIONS(97), 1,
      anon_sym_EQ_EQ,
    STATE(6), 1,
      sym_page_marker,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(37), 2,
      sym_page,
      aux_sym_part_repeat1,
  [720] = 3,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(17), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [733] = 4,
    ACTIONS(126), 1,
      anon_sym_EQ_EQ,
    STATE(6), 1,
      sym_page_marker,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(37), 2,
      sym_page,
      aux_sym_part_repeat1,
  [748] = 5,
    ACTIONS(56), 1,
      anon_sym_POUND,
    STATE(33), 1,
      aux_sym_credits_repeat1,
    STATE(49), 1,
      sym_role,
    STATE(88), 1,
      sym_role_marker,
    ACTIONS(129), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [765] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_part_marker,
    STATE(41), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [779] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_POUND,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
    STATE(52), 1,
      sym_link,
    STATE(82), 1,
      sym_work_marker,
  [795] = 4,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      anon_sym_EQ_EQ_EQ,
    STATE(32), 1,
      sym_part_marker,
    STATE(41), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [809] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_part_marker,
    STATE(41), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [823] = 5,
    ACTIONS(133), 1,
      anon_sym_POUND,
    ACTIONS(142), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_source_file_repeat1,
    STATE(50), 1,
      sym_link,
    STATE(82), 1,
      sym_work_marker,
  [839] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_part_marker,
    STATE(41), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [853] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(146), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [865] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_part_marker,
    STATE(41), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [879] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_part_marker,
    STATE(41), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [893] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(115), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [905] = 3,
    ACTIONS(152), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(154), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [917] = 3,
    ACTIONS(156), 1,
      sym_comment,
    STATE(51), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(108), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [929] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(158), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [941] = 3,
    ACTIONS(160), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(158), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [953] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_part_marker,
    STATE(41), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [967] = 1,
    ACTIONS(164), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [974] = 1,
    ACTIONS(166), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [981] = 3,
    ACTIONS(168), 1,
      anon_sym_LF,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_page_real_marker,
  [991] = 3,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(174), 1,
      sym_persons_separator,
    STATE(59), 1,
      aux_sym_persons_repeat1,
  [1001] = 3,
    ACTIONS(174), 1,
      sym_persons_separator,
    ACTIONS(176), 1,
      anon_sym_LF,
    STATE(57), 1,
      aux_sym_persons_repeat1,
  [1011] = 3,
    ACTIONS(178), 1,
      anon_sym_LF,
    ACTIONS(180), 1,
      sym_persons_separator,
    STATE(59), 1,
      aux_sym_persons_repeat1,
  [1021] = 2,
    ACTIONS(183), 1,
      sym_nickname,
    STATE(73), 1,
      sym_persons,
  [1028] = 1,
    ACTIONS(185), 2,
      sym_comment,
      anon_sym_EQ_EQ,
  [1033] = 1,
    ACTIONS(58), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [1038] = 2,
    ACTIONS(187), 1,
      aux_sym_part_number_token1,
    STATE(78), 1,
      sym_sound_number,
  [1045] = 1,
    ACTIONS(189), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [1050] = 2,
    ACTIONS(191), 1,
      aux_sym_part_number_token1,
    STATE(89), 1,
      sym_part_number,
  [1057] = 1,
    ACTIONS(193), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [1062] = 2,
    ACTIONS(195), 1,
      aux_sym_part_number_token1,
    STATE(79), 1,
      sym_page_number,
  [1069] = 2,
    ACTIONS(197), 1,
      aux_sym_part_number_token1,
    STATE(71), 1,
      sym_page_real_number,
  [1076] = 1,
    ACTIONS(199), 2,
      sym_comment,
      anon_sym_POUND,
  [1081] = 1,
    ACTIONS(178), 2,
      anon_sym_LF,
      sym_persons_separator,
  [1086] = 1,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
  [1090] = 1,
    ACTIONS(203), 1,
      aux_sym_name_token1,
  [1094] = 1,
    ACTIONS(205), 1,
      anon_sym_LF,
  [1098] = 1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
  [1102] = 1,
    ACTIONS(209), 1,
      anon_sym_EQ_EQ2,
  [1106] = 1,
    ACTIONS(211), 1,
      anon_sym_LF,
  [1110] = 1,
    ACTIONS(213), 1,
      anon_sym_LF,
  [1114] = 1,
    ACTIONS(215), 1,
      anon_sym_LF,
  [1118] = 1,
    ACTIONS(217), 1,
      anon_sym_EQ_EQ2,
  [1122] = 1,
    ACTIONS(219), 1,
      sym_nickname,
  [1126] = 1,
    ACTIONS(221), 1,
      sym_sound_marker,
  [1130] = 1,
    ACTIONS(223), 1,
      aux_sym_link_token1,
  [1134] = 1,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
  [1138] = 1,
    ACTIONS(227), 1,
      sym__role_name,
  [1142] = 1,
    ACTIONS(229), 1,
      aux_sym_name_token1,
  [1146] = 1,
    ACTIONS(231), 1,
      anon_sym_COLON,
  [1150] = 1,
    ACTIONS(233), 1,
      anon_sym_EQ_EQ_EQ_LF,
  [1154] = 1,
    ACTIONS(235), 1,
      sym__role_name,
  [1158] = 1,
    ACTIONS(237), 1,
      anon_sym_EQ_EQ_EQ_LF,
  [1162] = 1,
    ACTIONS(239), 1,
      anon_sym_LF,
  [1166] = 1,
    ACTIONS(229), 1,
      aux_sym_link_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 150,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 228,
  [SMALL_STATE(10)] = 254,
  [SMALL_STATE(11)] = 278,
  [SMALL_STATE(12)] = 304,
  [SMALL_STATE(13)] = 328,
  [SMALL_STATE(14)] = 352,
  [SMALL_STATE(15)] = 376,
  [SMALL_STATE(16)] = 389,
  [SMALL_STATE(17)] = 402,
  [SMALL_STATE(18)] = 417,
  [SMALL_STATE(19)] = 430,
  [SMALL_STATE(20)] = 453,
  [SMALL_STATE(21)] = 476,
  [SMALL_STATE(22)] = 489,
  [SMALL_STATE(23)] = 507,
  [SMALL_STATE(24)] = 525,
  [SMALL_STATE(25)] = 543,
  [SMALL_STATE(26)] = 561,
  [SMALL_STATE(27)] = 579,
  [SMALL_STATE(28)] = 596,
  [SMALL_STATE(29)] = 611,
  [SMALL_STATE(30)] = 628,
  [SMALL_STATE(31)] = 641,
  [SMALL_STATE(32)] = 658,
  [SMALL_STATE(33)] = 675,
  [SMALL_STATE(34)] = 692,
  [SMALL_STATE(35)] = 705,
  [SMALL_STATE(36)] = 720,
  [SMALL_STATE(37)] = 733,
  [SMALL_STATE(38)] = 748,
  [SMALL_STATE(39)] = 765,
  [SMALL_STATE(40)] = 779,
  [SMALL_STATE(41)] = 795,
  [SMALL_STATE(42)] = 809,
  [SMALL_STATE(43)] = 823,
  [SMALL_STATE(44)] = 839,
  [SMALL_STATE(45)] = 853,
  [SMALL_STATE(46)] = 865,
  [SMALL_STATE(47)] = 879,
  [SMALL_STATE(48)] = 893,
  [SMALL_STATE(49)] = 905,
  [SMALL_STATE(50)] = 917,
  [SMALL_STATE(51)] = 929,
  [SMALL_STATE(52)] = 941,
  [SMALL_STATE(53)] = 953,
  [SMALL_STATE(54)] = 967,
  [SMALL_STATE(55)] = 974,
  [SMALL_STATE(56)] = 981,
  [SMALL_STATE(57)] = 991,
  [SMALL_STATE(58)] = 1001,
  [SMALL_STATE(59)] = 1011,
  [SMALL_STATE(60)] = 1021,
  [SMALL_STATE(61)] = 1028,
  [SMALL_STATE(62)] = 1033,
  [SMALL_STATE(63)] = 1038,
  [SMALL_STATE(64)] = 1045,
  [SMALL_STATE(65)] = 1050,
  [SMALL_STATE(66)] = 1057,
  [SMALL_STATE(67)] = 1062,
  [SMALL_STATE(68)] = 1069,
  [SMALL_STATE(69)] = 1076,
  [SMALL_STATE(70)] = 1081,
  [SMALL_STATE(71)] = 1086,
  [SMALL_STATE(72)] = 1090,
  [SMALL_STATE(73)] = 1094,
  [SMALL_STATE(74)] = 1098,
  [SMALL_STATE(75)] = 1102,
  [SMALL_STATE(76)] = 1106,
  [SMALL_STATE(77)] = 1110,
  [SMALL_STATE(78)] = 1114,
  [SMALL_STATE(79)] = 1118,
  [SMALL_STATE(80)] = 1122,
  [SMALL_STATE(81)] = 1126,
  [SMALL_STATE(82)] = 1130,
  [SMALL_STATE(83)] = 1134,
  [SMALL_STATE(84)] = 1138,
  [SMALL_STATE(85)] = 1142,
  [SMALL_STATE(86)] = 1146,
  [SMALL_STATE(87)] = 1150,
  [SMALL_STATE(88)] = 1154,
  [SMALL_STATE(89)] = 1158,
  [SMALL_STATE(90)] = 1162,
  [SMALL_STATE(91)] = 1166,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_marker, 4, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_marker, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound, 4, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sound, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(17),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_marker, 5, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_marker, 5, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_works, 1, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credits, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0), SHIFT_REPEAT(65),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 5, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part_marker, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 4, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [207] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound_number, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_real_number, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_marker, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_work_marker, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part_number, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_real_marker, 3, 0, 0),
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
