/* Automatically @generated by tree-sitter v0.25.6 */

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define MAX_RESERVED_WORD_SET_SIZE 0
#define PRODUCTION_ID_COUNT 1
#define SUPERTYPE_COUNT 0

enum ts_symbol_identifiers {
  anon_sym_POUND_POUND_POUND = 1,
  aux_sym_resource_comment_token1 = 2,
  anon_sym_POUND_POUND = 3,
  anon_sym_POUND = 4,
  sym_identifier = 5,
  sym_term_identifier = 6,
  sym__line_break = 7,
  sym__inline_space = 8,
  sym__inline_char = 9,
  sym__hexdigit = 10,
  anon_sym_BSLASH_LBRACE = 11,
  anon_sym_BSLASHu = 12,
  aux_sym__text_token1 = 13,
  anon_sym_EQ = 14,
  sym_body = 15,
  sym__entry = 16,
  sym__comment = 17,
  sym_resource_comment = 18,
  sym_block_comment = 19,
  sym_comment = 20,
  sym__blank_line = 21,
  aux_sym__text = 22,
  sym_message = 23,
  sym_term = 24,
  sym_pattern = 25,
  aux_sym_body_repeat1 = 26,
  aux_sym_body_repeat2 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_POUND_POUND] = "###",
  [aux_sym_resource_comment_token1] = "resource_comment_token1",
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_POUND] = "#",
  [sym_identifier] = "identifier",
  [sym_term_identifier] = "term_identifier",
  [sym__line_break] = "_line_break",
  [sym__inline_space] = "_inline_space",
  [sym__inline_char] = "_inline_char",
  [sym__hexdigit] = "_hexdigit",
  [anon_sym_BSLASH_LBRACE] = "\\{",
  [anon_sym_BSLASHu] = "\\u",
  [aux_sym__text_token1] = "_text_token1",
  [anon_sym_EQ] = "=",
  [sym_body] = "body",
  [sym__entry] = "_entry",
  [sym__comment] = "_comment",
  [sym_resource_comment] = "resource_comment",
  [sym_block_comment] = "block_comment",
  [sym_comment] = "comment",
  [sym__blank_line] = "_blank_line",
  [aux_sym__text] = "_text",
  [sym_message] = "message",
  [sym_term] = "term",
  [sym_pattern] = "pattern",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_body_repeat2] = "body_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND_POUND_POUND] = anon_sym_POUND_POUND_POUND,
  [aux_sym_resource_comment_token1] = aux_sym_resource_comment_token1,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_identifier] = sym_identifier,
  [sym_term_identifier] = sym_term_identifier,
  [sym__line_break] = sym__line_break,
  [sym__inline_space] = sym__inline_space,
  [sym__inline_char] = sym__inline_char,
  [sym__hexdigit] = sym__hexdigit,
  [anon_sym_BSLASH_LBRACE] = anon_sym_BSLASH_LBRACE,
  [anon_sym_BSLASHu] = anon_sym_BSLASHu,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_body] = sym_body,
  [sym__entry] = sym__entry,
  [sym__comment] = sym__comment,
  [sym_resource_comment] = sym_resource_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_comment] = sym_comment,
  [sym__blank_line] = sym__blank_line,
  [aux_sym__text] = aux_sym__text,
  [sym_message] = sym_message,
  [sym_term] = sym_term,
  [sym_pattern] = sym_pattern,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_body_repeat2] = aux_sym_body_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_resource_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_term_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_space] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_char] = {
    .visible = false,
    .named = true,
  },
  [sym__hexdigit] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHu] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym__entry] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_resource_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__blank_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__text] = {
    .visible = false,
    .named = false,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat2] = {
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
  [15] = 14,
  [16] = 16,
  [17] = 10,
  [18] = 11,
  [19] = 12,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 13,
  [24] = 24,
  [25] = 21,
  [26] = 26,
  [27] = 16,
  [28] = 26,
  [29] = 24,
  [30] = 20,
  [31] = 22,
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
  [43] = 35,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 46,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 54,
  [60] = 60,
  [61] = 58,
  [62] = 60,
  [63] = 52,
  [64] = 51,
  [65] = 57,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      if (('!' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= 0xd7ff) ||
          (0xe000 <= lookahead && lookahead <= 0xfffd)) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (('!' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= 0xd7ff) ||
          (0xe000 <= lookahead && lookahead <= 0xfffd)) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == '{') ADVANCE(22);
      END_STATE();
    case 3:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 6:
      if (eof) ADVANCE(9);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 7:
      if (eof) ADVANCE(9);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= 'z') ||
          ('|' <= lookahead && lookahead <= 0xd7ff) ||
          (0xe000 <= lookahead && lookahead <= 0xfffd)) ADVANCE(20);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_resource_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_resource_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead == '#') ADVANCE(10);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(13);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_term_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__inline_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__inline_char);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__hexdigit);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BSLASHu);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__text_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [STATE(0)] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_resource_comment_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym__line_break] = ACTIONS(1),
    [sym__inline_space] = ACTIONS(1),
    [sym__inline_char] = ACTIONS(1),
    [sym__hexdigit] = ACTIONS(1),
    [anon_sym_BSLASH_LBRACE] = ACTIONS(1),
    [anon_sym_BSLASHu] = ACTIONS(1),
    [aux_sym__text_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [STATE(1)] = {
    [sym_body] = STATE(55),
    [sym__entry] = STATE(40),
    [sym__comment] = STATE(40),
    [sym_resource_comment] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym_comment] = STATE(40),
    [sym__blank_line] = STATE(2),
    [sym_message] = STATE(40),
    [sym_term] = STATE(40),
    [aux_sym_body_repeat1] = STATE(2),
    [aux_sym_body_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(5),
    [anon_sym_POUND_POUND] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_term_identifier] = ACTIONS(13),
    [sym__line_break] = ACTIONS(15),
    [sym__inline_space] = ACTIONS(17),
  },
  [STATE(2)] = {
    [sym__entry] = STATE(41),
    [sym__comment] = STATE(41),
    [sym_resource_comment] = STATE(41),
    [sym_block_comment] = STATE(41),
    [sym_comment] = STATE(41),
    [sym__blank_line] = STATE(6),
    [sym_message] = STATE(41),
    [sym_term] = STATE(41),
    [aux_sym_body_repeat1] = STATE(6),
    [aux_sym_body_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(5),
    [anon_sym_POUND_POUND] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_term_identifier] = ACTIONS(13),
    [sym__line_break] = ACTIONS(21),
    [sym__inline_space] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(7), 1,
      anon_sym_POUND_POUND,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_term_identifier,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_body_repeat2,
    STATE(41), 7,
      sym__entry,
      sym__comment,
      sym_resource_comment,
      sym_block_comment,
      sym_comment,
      sym_message,
      sym_term,
  [31] = 8,
    ACTIONS(5), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(7), 1,
      anon_sym_POUND_POUND,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_term_identifier,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_body_repeat2,
    STATE(36), 7,
      sym__entry,
      sym__comment,
      sym_resource_comment,
      sym_block_comment,
      sym_comment,
      sym_message,
      sym_term,
  [62] = 8,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(30), 1,
      anon_sym_POUND_POUND,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(39), 1,
      sym_term_identifier,
    STATE(5), 1,
      aux_sym_body_repeat2,
    STATE(56), 7,
      sym__entry,
      sym__comment,
      sym_resource_comment,
      sym_block_comment,
      sym_comment,
      sym_message,
      sym_term,
  [93] = 5,
    ACTIONS(46), 1,
      sym__line_break,
    ACTIONS(49), 1,
      sym__inline_space,
    ACTIONS(44), 2,
      anon_sym_POUND_POUND,
      anon_sym_POUND,
    STATE(6), 2,
      sym__blank_line,
      aux_sym_body_repeat1,
    ACTIONS(42), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_identifier,
      sym_term_identifier,
  [114] = 5,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(54), 1,
      sym__line_break,
    ACTIONS(52), 2,
      anon_sym_POUND_POUND,
      anon_sym_POUND,
    STATE(8), 2,
      sym__blank_line,
      aux_sym_body_repeat1,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_identifier,
      sym_term_identifier,
  [135] = 5,
    ACTIONS(17), 1,
      sym__inline_space,
    ACTIONS(21), 1,
      sym__line_break,
    ACTIONS(58), 2,
      anon_sym_POUND_POUND,
      anon_sym_POUND,
    STATE(6), 2,
      sym__blank_line,
      aux_sym_body_repeat1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_identifier,
      sym_term_identifier,
  [156] = 2,
    ACTIONS(62), 2,
      anon_sym_POUND_POUND,
      anon_sym_POUND,
    ACTIONS(60), 6,
      ts_builtin_sym_end,
      anon_sym_POUND_POUND_POUND,
      sym_identifier,
      sym_term_identifier,
      sym__line_break,
      sym__inline_space,
  [169] = 6,
    ACTIONS(64), 1,
      sym__inline_space,
    ACTIONS(68), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(70), 1,
      anon_sym_BSLASHu,
    STATE(13), 1,
      aux_sym__text,
    STATE(48), 1,
      sym_pattern,
    ACTIONS(66), 2,
      sym__inline_char,
      aux_sym__text_token1,
  [189] = 6,
    ACTIONS(68), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(70), 1,
      anon_sym_BSLASHu,
    ACTIONS(72), 1,
      sym__inline_space,
    STATE(13), 1,
      aux_sym__text,
    STATE(49), 1,
      sym_pattern,
    ACTIONS(66), 2,
      sym__inline_char,
      aux_sym__text_token1,
  [209] = 6,
    ACTIONS(68), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(70), 1,
      anon_sym_BSLASHu,
    ACTIONS(74), 1,
      sym__inline_space,
    STATE(13), 1,
      aux_sym__text,
    STATE(37), 1,
      sym_pattern,
    ACTIONS(66), 2,
      sym__inline_char,
      aux_sym__text_token1,
  [229] = 5,
    ACTIONS(70), 1,
      anon_sym_BSLASHu,
    ACTIONS(80), 1,
      aux_sym__text_token1,
    STATE(16), 1,
      aux_sym__text,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(78), 2,
      sym__inline_char,
      anon_sym_BSLASH_LBRACE,
  [247] = 6,
    ACTIONS(68), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(70), 1,
      anon_sym_BSLASHu,
    ACTIONS(82), 1,
      sym__inline_space,
    STATE(13), 1,
      aux_sym__text,
    STATE(38), 1,
      sym_pattern,
    ACTIONS(66), 2,
      sym__inline_char,
      aux_sym__text_token1,
  [267] = 6,
    ACTIONS(84), 1,
      sym__inline_space,
    ACTIONS(88), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(90), 1,
      anon_sym_BSLASHu,
    STATE(23), 1,
      aux_sym__text,
    STATE(38), 1,
      sym_pattern,
    ACTIONS(86), 2,
      sym__inline_char,
      aux_sym__text_token1,
  [287] = 5,
    ACTIONS(97), 1,
      anon_sym_BSLASHu,
    ACTIONS(100), 1,
      aux_sym__text_token1,
    STATE(16), 1,
      aux_sym__text,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(94), 2,
      sym__inline_char,
      anon_sym_BSLASH_LBRACE,
  [305] = 6,
    ACTIONS(88), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(90), 1,
      anon_sym_BSLASHu,
    ACTIONS(103), 1,
      sym__inline_space,
    STATE(23), 1,
      aux_sym__text,
    STATE(48), 1,
      sym_pattern,
    ACTIONS(86), 2,
      sym__inline_char,
      aux_sym__text_token1,
  [325] = 6,
    ACTIONS(88), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(90), 1,
      anon_sym_BSLASHu,
    ACTIONS(105), 1,
      sym__inline_space,
    STATE(23), 1,
      aux_sym__text,
    STATE(49), 1,
      sym_pattern,
    ACTIONS(86), 2,
      sym__inline_char,
      aux_sym__text_token1,
  [345] = 6,
    ACTIONS(88), 1,
      anon_sym_BSLASH_LBRACE,
    ACTIONS(90), 1,
      anon_sym_BSLASHu,
    ACTIONS(107), 1,
      sym__inline_space,
    STATE(23), 1,
      aux_sym__text,
    STATE(37), 1,
      sym_pattern,
    ACTIONS(86), 2,
      sym__inline_char,
      aux_sym__text_token1,
  [365] = 5,
    ACTIONS(66), 1,
      aux_sym__text_token1,
    ACTIONS(70), 1,
      anon_sym_BSLASHu,
    STATE(13), 1,
      aux_sym__text,
    STATE(37), 1,
      sym_pattern,
    ACTIONS(68), 2,
      sym__inline_char,
      anon_sym_BSLASH_LBRACE,
  [382] = 5,
    ACTIONS(66), 1,
      aux_sym__text_token1,
    ACTIONS(70), 1,
      anon_sym_BSLASHu,
    STATE(13), 1,
      aux_sym__text,
    STATE(38), 1,
      sym_pattern,
    ACTIONS(68), 2,
      sym__inline_char,
      anon_sym_BSLASH_LBRACE,
  [399] = 2,
    ACTIONS(111), 1,
      aux_sym__text_token1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      sym__line_break,
      sym__inline_char,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASHu,
  [410] = 5,
    ACTIONS(76), 1,
      sym__line_break,
    ACTIONS(90), 1,
      anon_sym_BSLASHu,
    ACTIONS(115), 1,
      aux_sym__text_token1,
    STATE(27), 1,
      aux_sym__text,
    ACTIONS(113), 2,
      sym__inline_char,
      anon_sym_BSLASH_LBRACE,
  [427] = 5,
    ACTIONS(66), 1,
      aux_sym__text_token1,
    ACTIONS(70), 1,
      anon_sym_BSLASHu,
    STATE(13), 1,
      aux_sym__text,
    STATE(39), 1,
      sym_pattern,
    ACTIONS(68), 2,
      sym__inline_char,
      anon_sym_BSLASH_LBRACE,
  [444] = 5,
    ACTIONS(86), 1,
      aux_sym__text_token1,
    ACTIONS(90), 1,
      anon_sym_BSLASHu,
    STATE(23), 1,
      aux_sym__text,
    STATE(38), 1,
      sym_pattern,
    ACTIONS(88), 2,
      sym__inline_char,
      anon_sym_BSLASH_LBRACE,
  [461] = 5,
    ACTIONS(66), 1,
      aux_sym__text_token1,
    ACTIONS(70), 1,
      anon_sym_BSLASHu,
    STATE(13), 1,
      aux_sym__text,
    STATE(42), 1,
      sym_pattern,
    ACTIONS(68), 2,
      sym__inline_char,
      anon_sym_BSLASH_LBRACE,
  [478] = 5,
    ACTIONS(92), 1,
      sym__line_break,
    ACTIONS(120), 1,
      anon_sym_BSLASHu,
    ACTIONS(123), 1,
      aux_sym__text_token1,
    STATE(27), 1,
      aux_sym__text,
    ACTIONS(117), 2,
      sym__inline_char,
      anon_sym_BSLASH_LBRACE,
  [495] = 5,
    ACTIONS(86), 1,
      aux_sym__text_token1,
    ACTIONS(90), 1,
      anon_sym_BSLASHu,
    STATE(23), 1,
      aux_sym__text,
    STATE(42), 1,
      sym_pattern,
    ACTIONS(88), 2,
      sym__inline_char,
      anon_sym_BSLASH_LBRACE,
  [512] = 5,
    ACTIONS(86), 1,
      aux_sym__text_token1,
    ACTIONS(90), 1,
      anon_sym_BSLASHu,
    STATE(23), 1,
      aux_sym__text,
    STATE(39), 1,
      sym_pattern,
    ACTIONS(88), 2,
      sym__inline_char,
      anon_sym_BSLASH_LBRACE,
  [529] = 5,
    ACTIONS(86), 1,
      aux_sym__text_token1,
    ACTIONS(90), 1,
      anon_sym_BSLASHu,
    STATE(23), 1,
      aux_sym__text,
    STATE(37), 1,
      sym_pattern,
    ACTIONS(88), 2,
      sym__inline_char,
      anon_sym_BSLASH_LBRACE,
  [546] = 2,
    ACTIONS(111), 1,
      aux_sym__text_token1,
    ACTIONS(109), 4,
      sym__line_break,
      sym__inline_char,
      anon_sym_BSLASH_LBRACE,
      anon_sym_BSLASHu,
  [556] = 2,
    ACTIONS(128), 1,
      aux_sym_resource_comment_token1,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      sym__line_break,
  [564] = 2,
    ACTIONS(132), 1,
      aux_sym_resource_comment_token1,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym__line_break,
  [572] = 2,
    ACTIONS(136), 1,
      aux_sym_resource_comment_token1,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      sym__line_break,
  [580] = 2,
    ACTIONS(138), 1,
      sym__inline_space,
    ACTIONS(140), 1,
      anon_sym_EQ,
  [587] = 2,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      sym__line_break,
  [594] = 1,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      sym__line_break,
  [599] = 1,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      sym__line_break,
  [604] = 1,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      sym__line_break,
  [609] = 2,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      sym__line_break,
  [616] = 2,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      sym__line_break,
  [623] = 1,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      sym__line_break,
  [628] = 2,
    ACTIONS(154), 1,
      sym__inline_space,
    ACTIONS(156), 1,
      anon_sym_EQ,
  [635] = 1,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      sym__line_break,
  [640] = 1,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym__line_break,
  [645] = 2,
    ACTIONS(162), 1,
      sym__inline_space,
    ACTIONS(164), 1,
      anon_sym_EQ,
  [652] = 1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      sym__line_break,
  [657] = 1,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      sym__line_break,
  [662] = 1,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      sym__line_break,
  [667] = 2,
    ACTIONS(172), 1,
      sym__inline_space,
    ACTIONS(174), 1,
      anon_sym_EQ,
  [674] = 1,
    ACTIONS(176), 1,
      sym__hexdigit,
  [678] = 1,
    ACTIONS(178), 1,
      sym__hexdigit,
  [682] = 1,
    ACTIONS(180), 1,
      sym__line_break,
  [686] = 1,
    ACTIONS(182), 1,
      sym__hexdigit,
  [690] = 1,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
  [694] = 1,
    ACTIONS(144), 1,
      sym__line_break,
  [698] = 1,
    ACTIONS(186), 1,
      sym__hexdigit,
  [702] = 1,
    ACTIONS(188), 1,
      anon_sym_EQ,
  [706] = 1,
    ACTIONS(190), 1,
      sym__hexdigit,
  [710] = 1,
    ACTIONS(192), 1,
      anon_sym_EQ,
  [714] = 1,
    ACTIONS(194), 1,
      anon_sym_EQ,
  [718] = 1,
    ACTIONS(196), 1,
      anon_sym_EQ,
  [722] = 1,
    ACTIONS(198), 1,
      sym__hexdigit,
  [726] = 1,
    ACTIONS(200), 1,
      sym__hexdigit,
  [730] = 1,
    ACTIONS(202), 1,
      sym__hexdigit,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 31,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 93,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 169,
  [SMALL_STATE(11)] = 189,
  [SMALL_STATE(12)] = 209,
  [SMALL_STATE(13)] = 229,
  [SMALL_STATE(14)] = 247,
  [SMALL_STATE(15)] = 267,
  [SMALL_STATE(16)] = 287,
  [SMALL_STATE(17)] = 305,
  [SMALL_STATE(18)] = 325,
  [SMALL_STATE(19)] = 345,
  [SMALL_STATE(20)] = 365,
  [SMALL_STATE(21)] = 382,
  [SMALL_STATE(22)] = 399,
  [SMALL_STATE(23)] = 410,
  [SMALL_STATE(24)] = 427,
  [SMALL_STATE(25)] = 444,
  [SMALL_STATE(26)] = 461,
  [SMALL_STATE(27)] = 478,
  [SMALL_STATE(28)] = 495,
  [SMALL_STATE(29)] = 512,
  [SMALL_STATE(30)] = 529,
  [SMALL_STATE(31)] = 546,
  [SMALL_STATE(32)] = 556,
  [SMALL_STATE(33)] = 564,
  [SMALL_STATE(34)] = 572,
  [SMALL_STATE(35)] = 580,
  [SMALL_STATE(36)] = 587,
  [SMALL_STATE(37)] = 594,
  [SMALL_STATE(38)] = 599,
  [SMALL_STATE(39)] = 604,
  [SMALL_STATE(40)] = 609,
  [SMALL_STATE(41)] = 616,
  [SMALL_STATE(42)] = 623,
  [SMALL_STATE(43)] = 628,
  [SMALL_STATE(44)] = 635,
  [SMALL_STATE(45)] = 640,
  [SMALL_STATE(46)] = 645,
  [SMALL_STATE(47)] = 652,
  [SMALL_STATE(48)] = 657,
  [SMALL_STATE(49)] = 662,
  [SMALL_STATE(50)] = 667,
  [SMALL_STATE(51)] = 674,
  [SMALL_STATE(52)] = 678,
  [SMALL_STATE(53)] = 682,
  [SMALL_STATE(54)] = 686,
  [SMALL_STATE(55)] = 690,
  [SMALL_STATE(56)] = 694,
  [SMALL_STATE(57)] = 698,
  [SMALL_STATE(58)] = 702,
  [SMALL_STATE(59)] = 706,
  [SMALL_STATE(60)] = 710,
  [SMALL_STATE(61)] = 714,
  [SMALL_STATE(62)] = 718,
  [SMALL_STATE(63)] = 722,
  [SMALL_STATE(64)] = 726,
  [SMALL_STATE(65)] = 730,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat2, 2, 0, 0), SHIFT_REPEAT(34),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat2, 2, 0, 0), SHIFT_REPEAT(32),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2, 0, 0), SHIFT_REPEAT(50),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2, 0, 0), SHIFT_REPEAT(35),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat2, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat2, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(16),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(57),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(16),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text, 5, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text, 5, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(27),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(65),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text, 2, 0, 0), SHIFT_REPEAT(27),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_comment, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 5, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 5, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource_comment, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [184] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
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

TS_PUBLIC const TSLanguage *tree_sitter_fluent(void) {
  static const TSLanguage language = {
    .abi_version = LANGUAGE_VERSION,
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
    .lex_modes = (const void*)ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
