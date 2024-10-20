#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DQUOTE = 7,
  sym_string_content = 8,
  sym_escape_sequence = 9,
  sym_number = 10,
  sym_true = 11,
  sym_false = 12,
  sym_null = 13,
  sym_comment = 14,
  sym_document = 15,
  sym__value = 16,
  sym_object = 17,
  sym_pair = 18,
  sym_array = 19,
  sym_string = 20,
  aux_sym__string_content = 21,
  aux_sym_document_repeat1 = 22,
  aux_sym_object_repeat1 = 23,
  aux_sym_array_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [aux_sym__string_content] = "_string_content",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [aux_sym__string_content] = aux_sym__string_content,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_content] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(35);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(35);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(35);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(31),
    [sym__value] = STATE(2),
    [sym_object] = STATE(10),
    [sym_array] = STATE(10),
    [sym_string] = STATE(10),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_null] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__value] = STATE(3),
    [sym_object] = STATE(10),
    [sym_array] = STATE(10),
    [sym_string] = STATE(10),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_null] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__value] = STATE(3),
    [sym_object] = STATE(10),
    [sym_array] = STATE(10),
    [sym_string] = STATE(10),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(22),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [sym_number] = ACTIONS(28),
    [sym_true] = ACTIONS(28),
    [sym_false] = ACTIONS(28),
    [sym_null] = ACTIONS(28),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__value] = STATE(22),
    [sym_object] = STATE(10),
    [sym_array] = STATE(10),
    [sym_string] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_null] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_COLON] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_number] = ACTIONS(33),
    [sym_true] = ACTIONS(33),
    [sym_false] = ACTIONS(33),
    [sym_null] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_COLON] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_number] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_null] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [17] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [34] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [51] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [68] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [85] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 11,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [119] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym__value,
    STATE(10), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(13), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [146] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      sym__value,
    STATE(10), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(13), 4,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
  [173] = 4,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__string_content,
    ACTIONS(53), 2,
      sym_string_content,
      sym_escape_sequence,
  [187] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      sym_pair,
    STATE(30), 1,
      sym_string,
  [203] = 4,
    ACTIONS(56), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      aux_sym__string_content,
    ACTIONS(62), 2,
      sym_string_content,
      sym_escape_sequence,
  [217] = 4,
    ACTIONS(56), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      aux_sym__string_content,
    ACTIONS(66), 2,
      sym_string_content,
      sym_escape_sequence,
  [231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_pair,
    STATE(30), 1,
      sym_string,
  [244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_object_repeat1,
  [257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(74), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      aux_sym_array_repeat1,
  [270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(76), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
  [283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_object_repeat1,
  [296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_object_repeat1,
  [309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
  [322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_COLON,
  [353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 17,
  [SMALL_STATE(9)] = 34,
  [SMALL_STATE(10)] = 51,
  [SMALL_STATE(11)] = 68,
  [SMALL_STATE(12)] = 85,
  [SMALL_STATE(13)] = 102,
  [SMALL_STATE(14)] = 119,
  [SMALL_STATE(15)] = 146,
  [SMALL_STATE(16)] = 173,
  [SMALL_STATE(17)] = 187,
  [SMALL_STATE(18)] = 203,
  [SMALL_STATE(19)] = 217,
  [SMALL_STATE(20)] = 231,
  [SMALL_STATE(21)] = 244,
  [SMALL_STATE(22)] = 257,
  [SMALL_STATE(23)] = 270,
  [SMALL_STATE(24)] = 283,
  [SMALL_STATE(25)] = 296,
  [SMALL_STATE(26)] = 309,
  [SMALL_STATE(27)] = 322,
  [SMALL_STATE(28)] = 330,
  [SMALL_STATE(29)] = 338,
  [SMALL_STATE(30)] = 346,
  [SMALL_STATE(31)] = 353,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2), SHIFT_REPEAT(16),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(20),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(14),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_json(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
