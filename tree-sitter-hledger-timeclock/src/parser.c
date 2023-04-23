#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_i = 2,
  anon_sym_ = 3,
  anon_sym_o = 4,
  sym_simple_date = 5,
  sym_time = 6,
  sym_account_name = 7,
  sym_tx_description = 8,
  sym_source_file = 9,
  sym__definition = 10,
  sym_clock_in = 11,
  sym_clock_out = 12,
  aux_sym_source_file_repeat1 = 13,
  aux_sym__definition_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_i] = "i",
  [anon_sym_] = "  ",
  [anon_sym_o] = "o",
  [sym_simple_date] = "simple_date",
  [sym_time] = "time",
  [sym_account_name] = "account_name",
  [sym_tx_description] = "tx_description",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_clock_in] = "clock_in",
  [sym_clock_out] = "clock_out",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__definition_repeat1] = "_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_] = anon_sym_,
  [anon_sym_o] = anon_sym_o,
  [sym_simple_date] = sym_simple_date,
  [sym_time] = sym_time,
  [sym_account_name] = sym_account_name,
  [sym_tx_description] = sym_tx_description,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_clock_in] = sym_clock_in,
  [sym_clock_out] = sym_clock_out,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__definition_repeat1] = aux_sym__definition_repeat1,
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
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [sym_simple_date] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_account_name] = {
    .visible = true,
    .named = true,
  },
  [sym_tx_description] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_clock_in] = {
    .visible = true,
    .named = true,
  },
  [sym_clock_out] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__definition_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(52);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '2') ADVANCE(11);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(48);
      if (lookahead == ']') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == '[') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '_') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(48);
      if (lookahead == ']') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(57);
      if (lookahead == '2' ||
          lookahead == '3') ADVANCE(57);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 23:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(58);
      if (lookahead == '2' ||
          lookahead == '3') ADVANCE(58);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(59);
      if (lookahead == '2' ||
          lookahead == '3') ADVANCE(59);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(60);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(30);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(35);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_simple_date);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_simple_date);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_simple_date);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_simple_date);
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (lookahead == '_') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_account_name);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tx_description);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tx_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
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
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 67},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [sym_simple_date] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym__definition] = STATE(2),
    [sym_clock_in] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_i] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_i,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_comment,
    STATE(4), 1,
      sym_clock_in,
    STATE(3), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
  [17] = 5,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(18), 1,
      anon_sym_i,
    STATE(4), 1,
      sym_clock_in,
    STATE(3), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
  [34] = 4,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_o,
    STATE(5), 1,
      aux_sym__definition_repeat1,
    STATE(6), 1,
      sym_clock_out,
  [47] = 4,
    ACTIONS(23), 1,
      anon_sym_o,
    ACTIONS(25), 1,
      sym_comment,
    STATE(7), 1,
      sym_clock_out,
    STATE(8), 1,
      aux_sym__definition_repeat1,
  [60] = 1,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_i,
  [66] = 1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_i,
  [72] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_o,
    STATE(8), 1,
      aux_sym__definition_repeat1,
  [82] = 2,
    ACTIONS(38), 1,
      anon_sym_,
    ACTIONS(36), 2,
      sym_comment,
      anon_sym_o,
  [90] = 1,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_i,
  [96] = 1,
    ACTIONS(42), 2,
      sym_comment,
      anon_sym_o,
  [101] = 1,
    ACTIONS(44), 1,
      sym_simple_date,
  [105] = 1,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
  [109] = 1,
    ACTIONS(48), 1,
      sym_time,
  [113] = 1,
    ACTIONS(50), 1,
      sym_simple_date,
  [117] = 1,
    ACTIONS(52), 1,
      sym_account_name,
  [121] = 1,
    ACTIONS(54), 1,
      sym_time,
  [125] = 1,
    ACTIONS(56), 1,
      sym_tx_description,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 72,
  [SMALL_STATE(9)] = 82,
  [SMALL_STATE(10)] = 90,
  [SMALL_STATE(11)] = 96,
  [SMALL_STATE(12)] = 101,
  [SMALL_STATE(13)] = 105,
  [SMALL_STATE(14)] = 109,
  [SMALL_STATE(15)] = 113,
  [SMALL_STATE(16)] = 117,
  [SMALL_STATE(17)] = 121,
  [SMALL_STATE(18)] = 125,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 3),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__definition_repeat1, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_clock_in, 4),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clock_out, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clock_in, 6),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [46] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hledger_timeclock(void) {
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
