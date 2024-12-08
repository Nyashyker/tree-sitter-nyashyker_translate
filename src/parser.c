#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
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
  sym_text = 20,
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
  sym_sound_count = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_source_file_repeat2 = 43,
  aux_sym_source_file_repeat3 = 44,
  aux_sym_works_repeat1 = 45,
  aux_sym_credits_repeat1 = 46,
  aux_sym_persons_repeat1 = 47,
  aux_sym_part_repeat1 = 48,
  aux_sym_page_repeat1 = 49,
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
  [90] = 86,
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
  [21] = {.lex_state = 0},
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
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 10},
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
    [sym__empty] = STATE(3),
    [sym_works] = STATE(8),
    [sym_name] = STATE(39),
    [sym_work_marker] = STATE(70),
    [sym_part] = STATE(48),
    [sym_part_marker] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_source_file_repeat3] = STATE(48),
    [aux_sym_works_repeat1] = STATE(32),
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
    STATE(8), 1,
      sym_works,
    STATE(21), 1,
      sym__header,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 1,
      aux_sym_works_repeat1,
    STATE(37), 1,
      sym_part_marker,
    STATE(39), 1,
      sym_name,
    STATE(70), 1,
      sym_work_marker,
    STATE(4), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(44), 2,
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
      aux_sym_source_file_repeat1,
    STATE(10), 1,
      sym_works,
    STATE(32), 1,
      aux_sym_works_repeat1,
    STATE(37), 1,
      sym_part_marker,
    STATE(39), 1,
      sym_name,
    STATE(70), 1,
      sym_work_marker,
    STATE(15), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(44), 2,
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
    STATE(10), 1,
      sym_works,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 1,
      aux_sym_works_repeat1,
    STATE(37), 1,
      sym_part_marker,
    STATE(39), 1,
      sym_name,
    STATE(70), 1,
      sym_work_marker,
    STATE(15), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(50), 2,
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
      sym_text,
    ACTIONS(23), 2,
      sym_comment,
      sym_separator,
    ACTIONS(27), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(6), 2,
      sym_sound,
      aux_sym_page_repeat1,
    STATE(31), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [149] = 8,
    ACTIONS(29), 1,
      aux_sym_sound_token1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(35), 2,
      sym_comment,
      sym_separator,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(7), 2,
      sym_sound,
      aux_sym_page_repeat1,
    STATE(36), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [178] = 6,
    ACTIONS(50), 1,
      aux_sym_sound_token1,
    ACTIONS(53), 1,
      sym_text,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(45), 2,
      sym_comment,
      sym_separator,
    ACTIONS(48), 2,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
    STATE(7), 2,
      sym_sound,
      aux_sym_page_repeat1,
  [201] = 8,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(58), 1,
      anon_sym_POUND,
    ACTIONS(60), 1,
      anon_sym_EQ_EQ_EQ,
    STATE(35), 1,
      aux_sym_credits_repeat1,
    STATE(49), 1,
      sym_role,
    STATE(64), 1,
      sym_credits,
    STATE(78), 1,
      sym_role_marker,
    STATE(16), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [227] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(37), 1,
      sym_part_marker,
    STATE(24), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [251] = 8,
    ACTIONS(58), 1,
      anon_sym_POUND,
    ACTIONS(64), 1,
      anon_sym_LF,
    ACTIONS(66), 1,
      anon_sym_EQ_EQ_EQ,
    STATE(35), 1,
      aux_sym_credits_repeat1,
    STATE(49), 1,
      sym_role,
    STATE(66), 1,
      sym_credits,
    STATE(78), 1,
      sym_role_marker,
    STATE(17), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [277] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(37), 1,
      sym_part_marker,
    STATE(22), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(41), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [301] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(19), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    STATE(37), 1,
      sym_part_marker,
    STATE(15), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [325] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(70), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_source_file_repeat1,
    STATE(37), 1,
      sym_part_marker,
    STATE(15), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(41), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [349] = 7,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(37), 1,
      sym_part_marker,
    STATE(25), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(46), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [373] = 3,
    ACTIONS(76), 1,
      anon_sym_LF,
    STATE(15), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [388] = 7,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(58), 1,
      anon_sym_POUND,
    STATE(35), 1,
      aux_sym_credits_repeat1,
    STATE(49), 1,
      sym_role,
    STATE(66), 1,
      sym_credits,
    STATE(78), 1,
      sym_role_marker,
    STATE(15), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [411] = 7,
    ACTIONS(17), 1,
      anon_sym_LF,
    ACTIONS(58), 1,
      anon_sym_POUND,
    STATE(35), 1,
      aux_sym_credits_repeat1,
    STATE(49), 1,
      sym_role,
    STATE(65), 1,
      sym_credits,
    STATE(78), 1,
      sym_role_marker,
    STATE(15), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
  [434] = 2,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      sym_separator,
    ACTIONS(81), 4,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_text,
  [447] = 2,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      sym_separator,
    ACTIONS(85), 4,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_text,
  [460] = 2,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_LF,
      sym_separator,
    ACTIONS(89), 4,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
      aux_sym_sound_token1,
      sym_text,
  [473] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(91), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym_part_marker,
    STATE(13), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(50), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [491] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym_part_marker,
    STATE(15), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(46), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [509] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(93), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym_part_marker,
    STATE(12), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(44), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [527] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym_part_marker,
    STATE(15), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(41), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [545] = 5,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym_part_marker,
    STATE(15), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    STATE(52), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [563] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_EQ_EQ,
    STATE(5), 1,
      sym_page_marker,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(33), 2,
      sym_page,
      aux_sym_part_repeat1,
  [580] = 3,
    ACTIONS(97), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(100), 4,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [593] = 4,
    ACTIONS(95), 1,
      anon_sym_EQ_EQ,
    STATE(5), 1,
      sym_page_marker,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(34), 2,
      sym_page,
      aux_sym_part_repeat1,
  [608] = 5,
    ACTIONS(106), 1,
      anon_sym_POUND,
    STATE(29), 1,
      aux_sym_works_repeat1,
    STATE(39), 1,
      sym_name,
    STATE(70), 1,
      sym_work_marker,
    ACTIONS(104), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [625] = 5,
    ACTIONS(111), 1,
      anon_sym_POUND,
    STATE(30), 1,
      aux_sym_credits_repeat1,
    STATE(49), 1,
      sym_role,
    STATE(78), 1,
      sym_role_marker,
    ACTIONS(109), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [642] = 3,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(15), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [655] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    STATE(29), 1,
      aux_sym_works_repeat1,
    STATE(39), 1,
      sym_name,
    STATE(70), 1,
      sym_work_marker,
    ACTIONS(114), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [672] = 4,
    ACTIONS(95), 1,
      anon_sym_EQ_EQ,
    STATE(5), 1,
      sym_page_marker,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(34), 2,
      sym_page,
      aux_sym_part_repeat1,
  [687] = 4,
    ACTIONS(120), 1,
      anon_sym_EQ_EQ,
    STATE(5), 1,
      sym_page_marker,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
    STATE(34), 2,
      sym_page,
      aux_sym_part_repeat1,
  [702] = 5,
    ACTIONS(58), 1,
      anon_sym_POUND,
    STATE(30), 1,
      aux_sym_credits_repeat1,
    STATE(49), 1,
      sym_role,
    STATE(78), 1,
      sym_role_marker,
    ACTIONS(123), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [719] = 3,
    ACTIONS(17), 1,
      anon_sym_LF,
    STATE(15), 2,
      sym__empty,
      aux_sym_source_file_repeat2,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ,
  [732] = 5,
    ACTIONS(95), 1,
      anon_sym_EQ_EQ,
    ACTIONS(127), 1,
      sym_comment,
    STATE(5), 1,
      sym_page_marker,
    STATE(26), 1,
      aux_sym_source_file_repeat1,
    STATE(28), 2,
      sym_page,
      aux_sym_part_repeat1,
  [749] = 3,
    ACTIONS(129), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(104), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [761] = 5,
    ACTIONS(131), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_link,
    STATE(45), 1,
      aux_sym_source_file_repeat1,
    STATE(80), 1,
      sym_work_marker,
  [777] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(135), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [789] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_part_marker,
    STATE(47), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [803] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(139), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [815] = 3,
    ACTIONS(141), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(135), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [827] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_part_marker,
    STATE(47), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [841] = 5,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_POUND,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    STATE(43), 1,
      sym_link,
    STATE(80), 1,
      sym_work_marker,
  [857] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_part_marker,
    STATE(47), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [871] = 4,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      anon_sym_EQ_EQ_EQ,
    STATE(37), 1,
      sym_part_marker,
    STATE(47), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [885] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_part_marker,
    STATE(47), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [899] = 3,
    ACTIONS(154), 1,
      sym_comment,
    STATE(51), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(156), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [911] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_part_marker,
    STATE(47), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [925] = 3,
    ACTIONS(11), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(109), 3,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [937] = 4,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_part_marker,
    STATE(47), 2,
      sym_part,
      aux_sym_source_file_repeat3,
  [951] = 1,
    ACTIONS(162), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [958] = 1,
    ACTIONS(164), 4,
      sym_comment,
      anon_sym_LF,
      anon_sym_POUND,
      anon_sym_EQ_EQ_EQ,
  [965] = 3,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_page_real_marker,
  [975] = 3,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(172), 1,
      sym_persons_separator,
    STATE(58), 1,
      aux_sym_persons_repeat1,
  [985] = 3,
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(176), 1,
      sym_persons_separator,
    STATE(57), 1,
      aux_sym_persons_repeat1,
  [995] = 3,
    ACTIONS(172), 1,
      sym_persons_separator,
    ACTIONS(179), 1,
      anon_sym_LF,
    STATE(57), 1,
      aux_sym_persons_repeat1,
  [1005] = 2,
    ACTIONS(181), 1,
      aux_sym_part_number_token1,
    STATE(84), 1,
      sym_page_number,
  [1012] = 1,
    ACTIONS(183), 2,
      sym_comment,
      anon_sym_POUND,
  [1017] = 2,
    ACTIONS(185), 1,
      aux_sym_part_number_token1,
    STATE(71), 1,
      sym_part_number,
  [1024] = 2,
    ACTIONS(187), 1,
      aux_sym_part_number_token1,
    STATE(77), 1,
      sym_sound_count,
  [1031] = 1,
    ACTIONS(189), 2,
      sym_comment,
      anon_sym_EQ_EQ,
  [1036] = 1,
    ACTIONS(66), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [1041] = 1,
    ACTIONS(191), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [1046] = 1,
    ACTIONS(193), 2,
      anon_sym_LF,
      anon_sym_EQ_EQ_EQ,
  [1051] = 2,
    ACTIONS(195), 1,
      sym_nickname,
    STATE(72), 1,
      sym_persons,
  [1058] = 2,
    ACTIONS(197), 1,
      aux_sym_part_number_token1,
    STATE(83), 1,
      sym_page_real_number,
  [1065] = 1,
    ACTIONS(174), 2,
      anon_sym_LF,
      sym_persons_separator,
  [1070] = 1,
    ACTIONS(199), 1,
      aux_sym_name_token1,
  [1074] = 1,
    ACTIONS(201), 1,
      anon_sym_EQ_EQ_EQ_LF,
  [1078] = 1,
    ACTIONS(203), 1,
      anon_sym_LF,
  [1082] = 1,
    ACTIONS(205), 1,
      sym__role_name,
  [1086] = 1,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
  [1090] = 1,
    ACTIONS(209), 1,
      anon_sym_LF,
  [1094] = 1,
    ACTIONS(211), 1,
      anon_sym_LF,
  [1098] = 1,
    ACTIONS(213), 1,
      anon_sym_LF,
  [1102] = 1,
    ACTIONS(215), 1,
      sym__role_name,
  [1106] = 1,
    ACTIONS(217), 1,
      sym_nickname,
  [1110] = 1,
    ACTIONS(219), 1,
      aux_sym_link_token1,
  [1114] = 1,
    ACTIONS(221), 1,
      anon_sym_EQ_EQ2,
  [1118] = 1,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
  [1122] = 1,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
  [1126] = 1,
    ACTIONS(227), 1,
      anon_sym_EQ_EQ2,
  [1130] = 1,
    ACTIONS(229), 1,
      sym_sound_marker,
  [1134] = 1,
    ACTIONS(231), 1,
      aux_sym_name_token1,
  [1138] = 1,
    ACTIONS(233), 1,
      anon_sym_EQ_EQ_EQ_LF,
  [1142] = 1,
    ACTIONS(235), 1,
      anon_sym_COLON,
  [1146] = 1,
    ACTIONS(237), 1,
      anon_sym_LF,
  [1150] = 1,
    ACTIONS(231), 1,
      aux_sym_link_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 149,
  [SMALL_STATE(7)] = 178,
  [SMALL_STATE(8)] = 201,
  [SMALL_STATE(9)] = 227,
  [SMALL_STATE(10)] = 251,
  [SMALL_STATE(11)] = 277,
  [SMALL_STATE(12)] = 301,
  [SMALL_STATE(13)] = 325,
  [SMALL_STATE(14)] = 349,
  [SMALL_STATE(15)] = 373,
  [SMALL_STATE(16)] = 388,
  [SMALL_STATE(17)] = 411,
  [SMALL_STATE(18)] = 434,
  [SMALL_STATE(19)] = 447,
  [SMALL_STATE(20)] = 460,
  [SMALL_STATE(21)] = 473,
  [SMALL_STATE(22)] = 491,
  [SMALL_STATE(23)] = 509,
  [SMALL_STATE(24)] = 527,
  [SMALL_STATE(25)] = 545,
  [SMALL_STATE(26)] = 563,
  [SMALL_STATE(27)] = 580,
  [SMALL_STATE(28)] = 593,
  [SMALL_STATE(29)] = 608,
  [SMALL_STATE(30)] = 625,
  [SMALL_STATE(31)] = 642,
  [SMALL_STATE(32)] = 655,
  [SMALL_STATE(33)] = 672,
  [SMALL_STATE(34)] = 687,
  [SMALL_STATE(35)] = 702,
  [SMALL_STATE(36)] = 719,
  [SMALL_STATE(37)] = 732,
  [SMALL_STATE(38)] = 749,
  [SMALL_STATE(39)] = 761,
  [SMALL_STATE(40)] = 777,
  [SMALL_STATE(41)] = 789,
  [SMALL_STATE(42)] = 803,
  [SMALL_STATE(43)] = 815,
  [SMALL_STATE(44)] = 827,
  [SMALL_STATE(45)] = 841,
  [SMALL_STATE(46)] = 857,
  [SMALL_STATE(47)] = 871,
  [SMALL_STATE(48)] = 885,
  [SMALL_STATE(49)] = 899,
  [SMALL_STATE(50)] = 911,
  [SMALL_STATE(51)] = 925,
  [SMALL_STATE(52)] = 937,
  [SMALL_STATE(53)] = 951,
  [SMALL_STATE(54)] = 958,
  [SMALL_STATE(55)] = 965,
  [SMALL_STATE(56)] = 975,
  [SMALL_STATE(57)] = 985,
  [SMALL_STATE(58)] = 995,
  [SMALL_STATE(59)] = 1005,
  [SMALL_STATE(60)] = 1012,
  [SMALL_STATE(61)] = 1017,
  [SMALL_STATE(62)] = 1024,
  [SMALL_STATE(63)] = 1031,
  [SMALL_STATE(64)] = 1036,
  [SMALL_STATE(65)] = 1041,
  [SMALL_STATE(66)] = 1046,
  [SMALL_STATE(67)] = 1051,
  [SMALL_STATE(68)] = 1058,
  [SMALL_STATE(69)] = 1065,
  [SMALL_STATE(70)] = 1070,
  [SMALL_STATE(71)] = 1074,
  [SMALL_STATE(72)] = 1078,
  [SMALL_STATE(73)] = 1082,
  [SMALL_STATE(74)] = 1086,
  [SMALL_STATE(75)] = 1090,
  [SMALL_STATE(76)] = 1094,
  [SMALL_STATE(77)] = 1098,
  [SMALL_STATE(78)] = 1102,
  [SMALL_STATE(79)] = 1106,
  [SMALL_STATE(80)] = 1110,
  [SMALL_STATE(81)] = 1114,
  [SMALL_STATE(82)] = 1118,
  [SMALL_STATE(83)] = 1122,
  [SMALL_STATE(84)] = 1126,
  [SMALL_STATE(85)] = 1130,
  [SMALL_STATE(86)] = 1134,
  [SMALL_STATE(87)] = 1138,
  [SMALL_STATE(88)] = 1142,
  [SMALL_STATE(89)] = 1146,
  [SMALL_STATE(90)] = 1150,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_page_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(15),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_marker, 4, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_marker, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_marker, 5, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_marker, 5, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound, 4, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sound, 4, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_works, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_credits, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_works_repeat1, 4, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2, 0, 0), SHIFT_REPEAT(61),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_credits_repeat1, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 5, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_persons_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_persons, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part_marker, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 4, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role_marker, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound_count, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_number, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_real_number, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_work_marker, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part_number, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_real_marker, 3, 0, 0),
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
