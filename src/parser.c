#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 119
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 4
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 30

enum ts_symbol_identifiers {
  sym_attr_name = 1,
  anon_sym_BANG = 2,
  anon_sym_BSLASH = 3,
  anon_sym_DQUOTE = 4,
  aux_sym__quoted_pattern_token1 = 5,
  sym__pattern_char = 6,
  sym_escaped_char = 7,
  sym__special_char = 8,
  sym__octal_code = 9,
  sym__hex_code = 10,
  aux_sym__unicode_code_token1 = 11,
  aux_sym__unicode_code_token2 = 12,
  sym__control_code = 13,
  anon_sym_LBRACK = 14,
  aux_sym_range_notation_token1 = 15,
  anon_sym_DASH = 16,
  anon_sym_RBRACK = 17,
  sym__class_char = 18,
  sym_character_class = 19,
  sym_wildcard = 20,
  sym_dir_sep = 21,
  anon_sym_EQ = 22,
  aux_sym__attr_value_token1 = 23,
  aux_sym__attr_value_token2 = 24,
  anon_sym_text = 25,
  anon_sym_eol = 26,
  anon_sym_crlf = 27,
  anon_sym_working_DASHtree_DASHencoding = 28,
  anon_sym_ident = 29,
  anon_sym_filter = 30,
  anon_sym_diff = 31,
  anon_sym_merge = 32,
  anon_sym_whitespace = 33,
  anon_sym_export_DASHignore = 34,
  anon_sym_export_DASHsubst = 35,
  anon_sym_delta = 36,
  anon_sym_encoding = 37,
  anon_sym_binary = 38,
  anon_sym_LBRACKattr_RBRACK = 39,
  anon_sym_POUND = 40,
  aux_sym_comment_token1 = 41,
  sym__eol = 42,
  aux_sym__space_token1 = 43,
  sym_file = 44,
  sym__line = 45,
  sym__attr_list = 46,
  sym_pattern = 47,
  aux_sym__pattern = 48,
  sym_quoted_pattern = 49,
  aux_sym__quoted_pattern = 50,
  sym_ansi_c_escape = 51,
  sym__char_code = 52,
  sym__unicode_code = 53,
  sym_range_notation = 54,
  sym_class_range = 55,
  sym_attribute = 56,
  sym__prefixed_attr = 57,
  sym__attr_value = 58,
  sym_builtin_attr = 59,
  sym_macro_def = 60,
  sym_comment = 61,
  sym__space = 62,
  aux_sym_file_repeat1 = 63,
  aux_sym__attr_list_repeat1 = 64,
  aux_sym_pattern_repeat1 = 65,
  aux_sym_range_notation_repeat1 = 66,
  aux_sym_comment_repeat1 = 67,
  alias_sym_attr_reset = 68,
  alias_sym_attr_unset = 69,
  alias_sym_ignored_value = 70,
  alias_sym_trailing_slash = 71,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_attr_name] = "attr_name",
  [anon_sym_BANG] = "pattern_negation",
  [anon_sym_BSLASH] = "redundant_escape",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_pattern_token1] = "_quoted_pattern_token1",
  [sym__pattern_char] = "_pattern_char",
  [sym_escaped_char] = "escaped_char",
  [sym__special_char] = "_special_char",
  [sym__octal_code] = "_octal_code",
  [sym__hex_code] = "_hex_code",
  [aux_sym__unicode_code_token1] = "_unicode_code_token1",
  [aux_sym__unicode_code_token2] = "_unicode_code_token2",
  [sym__control_code] = "_control_code",
  [anon_sym_LBRACK] = "[",
  [aux_sym_range_notation_token1] = "range_negation",
  [anon_sym_DASH] = "-",
  [anon_sym_RBRACK] = "]",
  [sym__class_char] = "_class_char",
  [sym_character_class] = "character_class",
  [sym_wildcard] = "wildcard",
  [sym_dir_sep] = "dir_sep",
  [anon_sym_EQ] = "attr_set",
  [aux_sym__attr_value_token1] = "boolean_value",
  [aux_sym__attr_value_token2] = "string_value",
  [anon_sym_text] = "text",
  [anon_sym_eol] = "eol",
  [anon_sym_crlf] = "crlf",
  [anon_sym_working_DASHtree_DASHencoding] = "working-tree-encoding",
  [anon_sym_ident] = "ident",
  [anon_sym_filter] = "filter",
  [anon_sym_diff] = "diff",
  [anon_sym_merge] = "merge",
  [anon_sym_whitespace] = "whitespace",
  [anon_sym_export_DASHignore] = "export-ignore",
  [anon_sym_export_DASHsubst] = "export-subst",
  [anon_sym_delta] = "delta",
  [anon_sym_encoding] = "encoding",
  [anon_sym_binary] = "binary",
  [anon_sym_LBRACKattr_RBRACK] = "macro_tag",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__eol] = "_eol",
  [aux_sym__space_token1] = "_space_token1",
  [sym_file] = "file",
  [sym__line] = "_line",
  [sym__attr_list] = "_attr_list",
  [sym_pattern] = "pattern",
  [aux_sym__pattern] = "_pattern",
  [sym_quoted_pattern] = "quoted_pattern",
  [aux_sym__quoted_pattern] = "_quoted_pattern",
  [sym_ansi_c_escape] = "ansi_c_escape",
  [sym__char_code] = "_char_code",
  [sym__unicode_code] = "_unicode_code",
  [sym_range_notation] = "range_notation",
  [sym_class_range] = "class_range",
  [sym_attribute] = "attribute",
  [sym__prefixed_attr] = "_prefixed_attr",
  [sym__attr_value] = "_attr_value",
  [sym_builtin_attr] = "builtin_attr",
  [sym_macro_def] = "macro_def",
  [sym_comment] = "comment",
  [sym__space] = "_space",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym__attr_list_repeat1] = "_attr_list_repeat1",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
  [aux_sym_range_notation_repeat1] = "range_notation_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [alias_sym_attr_reset] = "attr_reset",
  [alias_sym_attr_unset] = "attr_unset",
  [alias_sym_ignored_value] = "ignored_value",
  [alias_sym_trailing_slash] = "trailing_slash",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_attr_name] = sym_attr_name,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_pattern_token1] = aux_sym__quoted_pattern_token1,
  [sym__pattern_char] = sym__pattern_char,
  [sym_escaped_char] = sym_escaped_char,
  [sym__special_char] = sym__special_char,
  [sym__octal_code] = sym__octal_code,
  [sym__hex_code] = sym__hex_code,
  [aux_sym__unicode_code_token1] = aux_sym__unicode_code_token1,
  [aux_sym__unicode_code_token2] = aux_sym__unicode_code_token2,
  [sym__control_code] = sym__control_code,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_range_notation_token1] = aux_sym_range_notation_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__class_char] = sym__class_char,
  [sym_character_class] = sym_character_class,
  [sym_wildcard] = sym_wildcard,
  [sym_dir_sep] = sym_dir_sep,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__attr_value_token1] = aux_sym__attr_value_token1,
  [aux_sym__attr_value_token2] = aux_sym__attr_value_token2,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_eol] = anon_sym_eol,
  [anon_sym_crlf] = anon_sym_crlf,
  [anon_sym_working_DASHtree_DASHencoding] = anon_sym_working_DASHtree_DASHencoding,
  [anon_sym_ident] = anon_sym_ident,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_diff] = anon_sym_diff,
  [anon_sym_merge] = anon_sym_merge,
  [anon_sym_whitespace] = anon_sym_whitespace,
  [anon_sym_export_DASHignore] = anon_sym_export_DASHignore,
  [anon_sym_export_DASHsubst] = anon_sym_export_DASHsubst,
  [anon_sym_delta] = anon_sym_delta,
  [anon_sym_encoding] = anon_sym_encoding,
  [anon_sym_binary] = anon_sym_binary,
  [anon_sym_LBRACKattr_RBRACK] = anon_sym_LBRACKattr_RBRACK,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__eol] = sym__eol,
  [aux_sym__space_token1] = aux_sym__space_token1,
  [sym_file] = sym_file,
  [sym__line] = sym__line,
  [sym__attr_list] = sym__attr_list,
  [sym_pattern] = sym_pattern,
  [aux_sym__pattern] = aux_sym__pattern,
  [sym_quoted_pattern] = sym_quoted_pattern,
  [aux_sym__quoted_pattern] = aux_sym__quoted_pattern,
  [sym_ansi_c_escape] = sym_ansi_c_escape,
  [sym__char_code] = sym__char_code,
  [sym__unicode_code] = sym__unicode_code,
  [sym_range_notation] = sym_range_notation,
  [sym_class_range] = sym_class_range,
  [sym_attribute] = sym_attribute,
  [sym__prefixed_attr] = sym__prefixed_attr,
  [sym__attr_value] = sym__attr_value,
  [sym_builtin_attr] = sym_builtin_attr,
  [sym_macro_def] = sym_macro_def,
  [sym_comment] = sym_comment,
  [sym__space] = sym__space,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym__attr_list_repeat1] = aux_sym__attr_list_repeat1,
  [aux_sym_pattern_repeat1] = aux_sym_pattern_repeat1,
  [aux_sym_range_notation_repeat1] = aux_sym_range_notation_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [alias_sym_attr_reset] = alias_sym_attr_reset,
  [alias_sym_attr_unset] = alias_sym_attr_unset,
  [alias_sym_ignored_value] = alias_sym_ignored_value,
  [alias_sym_trailing_slash] = alias_sym_trailing_slash,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_attr_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_pattern_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__pattern_char] = {
    .visible = false,
    .named = true,
  },
  [sym_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym__special_char] = {
    .visible = false,
    .named = true,
  },
  [sym__octal_code] = {
    .visible = false,
    .named = true,
  },
  [sym__hex_code] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__unicode_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__unicode_code_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__control_code] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_range_notation_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__class_char] = {
    .visible = false,
    .named = true,
  },
  [sym_character_class] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym_dir_sep] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__attr_value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__attr_value_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_crlf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_working_DASHtree_DASHencoding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ident] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_diff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_whitespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export_DASHignore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export_DASHsubst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_encoding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKattr_RBRACK] = {
    .visible = true,
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
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__space_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_list] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__pattern] = {
    .visible = false,
    .named = false,
  },
  [sym_quoted_pattern] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quoted_pattern] = {
    .visible = false,
    .named = false,
  },
  [sym_ansi_c_escape] = {
    .visible = true,
    .named = true,
  },
  [sym__char_code] = {
    .visible = false,
    .named = true,
  },
  [sym__unicode_code] = {
    .visible = false,
    .named = true,
  },
  [sym_range_notation] = {
    .visible = true,
    .named = true,
  },
  [sym_class_range] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__prefixed_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_value] = {
    .visible = false,
    .named = true,
  },
  [sym_builtin_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_def] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attr_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_range_notation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attr_reset] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_attr_unset] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_ignored_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_trailing_slash] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_absolute = 1,
  field_macro_name = 2,
  field_relative = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_absolute] = "absolute",
  [field_macro_name] = "macro_name",
  [field_relative] = "relative",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [6] = {.index = 3, .length = 1},
  [7] = {.index = 0, .length = 1},
  [8] = {.index = 4, .length = 2},
  [9] = {.index = 6, .length = 1},
  [10] = {.index = 7, .length = 1},
  [11] = {.index = 1, .length = 1},
  [12] = {.index = 8, .length = 2},
  [13] = {.index = 2, .length = 1},
  [14] = {.index = 10, .length = 2},
  [15] = {.index = 3, .length = 1},
  [16] = {.index = 4, .length = 2},
  [20] = {.index = 10, .length = 2},
  [21] = {.index = 12, .length = 1},
  [23] = {.index = 13, .length = 1},
  [26] = {.index = 12, .length = 1},
  [27] = {.index = 14, .length = 2},
  [28] = {.index = 13, .length = 1},
  [29] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_absolute, 0},
  [1] =
    {field_relative, 1, .inherited = true},
  [2] =
    {field_absolute, 1},
  [3] =
    {field_relative, 2, .inherited = true},
  [4] =
    {field_absolute, 0},
    {field_relative, 2, .inherited = true},
  [6] =
    {field_macro_name, 1},
  [7] =
    {field_relative, 0},
  [8] =
    {field_relative, 0, .inherited = true},
    {field_relative, 1, .inherited = true},
  [10] =
    {field_absolute, 1},
    {field_relative, 3, .inherited = true},
  [12] =
    {field_absolute, 2},
  [13] =
    {field_relative, 3, .inherited = true},
  [14] =
    {field_absolute, 2},
    {field_relative, 4, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [1] = alias_sym_trailing_slash,
  },
  [5] = {
    [2] = alias_sym_trailing_slash,
  },
  [7] = {
    [2] = alias_sym_trailing_slash,
  },
  [11] = {
    [2] = alias_sym_trailing_slash,
  },
  [13] = {
    [3] = alias_sym_trailing_slash,
  },
  [15] = {
    [3] = alias_sym_trailing_slash,
  },
  [16] = {
    [3] = alias_sym_trailing_slash,
  },
  [17] = {
    [0] = alias_sym_attr_reset,
  },
  [18] = {
    [0] = alias_sym_attr_unset,
  },
  [19] = {
    [1] = alias_sym_ignored_value,
  },
  [20] = {
    [4] = alias_sym_trailing_slash,
  },
  [22] = {
    [3] = alias_sym_trailing_slash,
  },
  [24] = {
    [0] = alias_sym_attr_reset,
    [2] = alias_sym_ignored_value,
  },
  [25] = {
    [0] = alias_sym_attr_unset,
    [2] = alias_sym_ignored_value,
  },
  [26] = {
    [4] = alias_sym_trailing_slash,
  },
  [28] = {
    [4] = alias_sym_trailing_slash,
  },
  [29] = {
    [5] = alias_sym_trailing_slash,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__attr_value, 2,
    sym__attr_value,
    alias_sym_ignored_value,
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
  [19] = 17,
  [20] = 20,
  [21] = 18,
  [22] = 20,
  [23] = 23,
  [24] = 23,
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
  [36] = 30,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 39,
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
  [65] = 64,
  [66] = 66,
  [67] = 66,
  [68] = 61,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 76,
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
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
};

static inline bool sym__special_char_character_set_1(int32_t c) {
  return (c < 'a'
    ? (c < '?'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '?' || c == 'E'))
    : (c <= 'b' || (c < 'r'
      ? (c < 'n'
        ? (c >= 'e' && c <= 'f')
        : c <= 'n')
      : (c <= 'r' || (c >= 't' && c <= 'v')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(84);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '^') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(83);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(121);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '?') ADVANCE(104);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(86);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '?') ADVANCE(104);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(86);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '[') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('[' <= lookahead && lookahead <= '^')) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (sym__special_char_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 12:
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('[' <= lookahead && lookahead <= '^')) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 13:
      if (lookahead == '\\') ADVANCE(14);
      if (!eof && (0 <= lookahead && lookahead <= 127)) ADVANCE(95);
      END_STATE();
    case 14:
      if (lookahead == '\\') ADVANCE(95);
      END_STATE();
    case 15:
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '-' &&
          lookahead != ']') ADVANCE(101);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(117);
      END_STATE();
    case 17:
      if (lookahead == ']') ADVANCE(103);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'g') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'k') ADVANCE(10);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 60:
      if (lookahead == 'w') ADVANCE(27);
      END_STATE();
    case 61:
      if (lookahead == '!' ||
          lookahead == '^') ADVANCE(98);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '[') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(101);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '?') ADVANCE(104);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != 11 &&
          lookahead != '\f') ADVANCE(86);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead == '?' ||
          lookahead == '\\') ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'E' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(88);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__quoted_pattern_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__quoted_pattern_token1);
      if (lookahead == '\n') ADVANCE(121);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__quoted_pattern_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__pattern_char);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_escaped_char);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__special_char);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__octal_code);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__octal_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__octal_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__hex_code);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__unicode_code_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__unicode_code_token2);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__control_code);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_range_notation_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__class_char);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__class_char);
      if (lookahead == ':') ADVANCE(18);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_character_class);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_wildcard);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_wildcard);
      if (lookahead == '*') ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_dir_sep);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__attr_value_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__attr_value_token2);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__attr_value_token2);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__attr_value_token2);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__attr_value_token2);
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__attr_value_token2);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__attr_value_token2);
      if (lookahead == 'u') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__attr_value_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_attr_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACKattr_RBRACK);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(122);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_eol);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_crlf);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_delta);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_ident);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_whitespace);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_export_DASHsubst);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_export_DASHignore);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_working_DASHtree_DASHencoding);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 76},
  [3] = {.lex_state = 76},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 76},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 76},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 76},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 76},
  [72] = {.lex_state = 76},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 76},
  [76] = {.lex_state = 76},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 76},
  [79] = {.lex_state = 76},
  [80] = {.lex_state = 76},
  [81] = {.lex_state = 76},
  [82] = {.lex_state = 76},
  [83] = {.lex_state = 76},
  [84] = {.lex_state = 76},
  [85] = {.lex_state = 76},
  [86] = {.lex_state = 76},
  [87] = {.lex_state = 76},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 76},
  [92] = {.lex_state = 28},
  [93] = {.lex_state = 76},
  [94] = {.lex_state = 76},
  [95] = {.lex_state = 76},
  [96] = {.lex_state = 76},
  [97] = {.lex_state = 76},
  [98] = {.lex_state = 76},
  [99] = {.lex_state = 76},
  [100] = {.lex_state = 76},
  [101] = {.lex_state = 76},
  [102] = {.lex_state = 76},
  [103] = {.lex_state = 76},
  [104] = {.lex_state = 76},
  [105] = {.lex_state = 76},
  [106] = {.lex_state = 76},
  [107] = {.lex_state = 76},
  [108] = {.lex_state = 76},
  [109] = {.lex_state = 76},
  [110] = {.lex_state = 76},
  [111] = {.lex_state = 76},
  [112] = {.lex_state = 76},
  [113] = {.lex_state = 76},
  [114] = {.lex_state = 76},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 76},
  [117] = {.lex_state = 76},
  [118] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_attr_name] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__quoted_pattern_token1] = ACTIONS(1),
    [sym__pattern_char] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym_range_notation_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_dir_sep] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_eol] = ACTIONS(1),
    [anon_sym_crlf] = ACTIONS(1),
    [anon_sym_working_DASHtree_DASHencoding] = ACTIONS(1),
    [anon_sym_ident] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_diff] = ACTIONS(1),
    [anon_sym_merge] = ACTIONS(1),
    [anon_sym_whitespace] = ACTIONS(1),
    [anon_sym_export_DASHignore] = ACTIONS(1),
    [anon_sym_export_DASHsubst] = ACTIONS(1),
    [anon_sym_delta] = ACTIONS(1),
    [anon_sym_encoding] = ACTIONS(1),
    [anon_sym_binary] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(115),
    [sym__line] = STATE(3),
    [sym__attr_list] = STATE(114),
    [sym_pattern] = STATE(86),
    [aux_sym__pattern] = STATE(37),
    [sym_quoted_pattern] = STATE(86),
    [sym_range_notation] = STATE(37),
    [sym_macro_def] = STATE(114),
    [sym_comment] = STATE(114),
    [sym__space] = STATE(7),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_BSLASH] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym__pattern_char] = ACTIONS(7),
    [sym_escaped_char] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_wildcard] = ACTIONS(11),
    [sym_dir_sep] = ACTIONS(15),
    [anon_sym_LBRACKattr_RBRACK] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym__eol] = ACTIONS(21),
    [aux_sym__space_token1] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      sym_dir_sep,
    ACTIONS(45), 1,
      anon_sym_LBRACKattr_RBRACK,
    ACTIONS(48), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      sym__eol,
    ACTIONS(54), 1,
      aux_sym__space_token1,
    STATE(7), 1,
      sym__space,
    ACTIONS(30), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(36), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(2), 2,
      sym__line,
      aux_sym_file_repeat1,
    STATE(37), 2,
      aux_sym__pattern,
      sym_range_notation,
    STATE(86), 2,
      sym_pattern,
      sym_quoted_pattern,
    STATE(114), 3,
      sym__attr_list,
      sym_macro_def,
      sym_comment,
  [56] = 16,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_dir_sep,
    ACTIONS(17), 1,
      anon_sym_LBRACKattr_RBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      aux_sym__space_token1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym__eol,
    STATE(7), 1,
      sym__space,
    ACTIONS(7), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(11), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(2), 2,
      sym__line,
      aux_sym_file_repeat1,
    STATE(37), 2,
      aux_sym__pattern,
      sym_range_notation,
    STATE(86), 2,
      sym_pattern,
      sym_quoted_pattern,
    STATE(114), 3,
      sym__attr_list,
      sym_macro_def,
      sym_comment,
  [112] = 8,
    ACTIONS(61), 1,
      sym_attr_name,
    ACTIONS(63), 1,
      anon_sym_BANG,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      sym__eol,
    STATE(70), 1,
      sym_builtin_attr,
    STATE(93), 1,
      sym__prefixed_attr,
    STATE(94), 1,
      sym_attribute,
    ACTIONS(67), 14,
      anon_sym_text,
      anon_sym_eol,
      anon_sym_crlf,
      anon_sym_working_DASHtree_DASHencoding,
      anon_sym_ident,
      anon_sym_filter,
      anon_sym_diff,
      anon_sym_merge,
      anon_sym_whitespace,
      anon_sym_export_DASHignore,
      anon_sym_export_DASHsubst,
      anon_sym_delta,
      anon_sym_encoding,
      anon_sym_binary,
  [150] = 8,
    ACTIONS(61), 1,
      sym_attr_name,
    ACTIONS(63), 1,
      anon_sym_BANG,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      sym__eol,
    STATE(70), 1,
      sym_builtin_attr,
    STATE(93), 1,
      sym__prefixed_attr,
    STATE(94), 1,
      sym_attribute,
    ACTIONS(67), 14,
      anon_sym_text,
      anon_sym_eol,
      anon_sym_crlf,
      anon_sym_working_DASHtree_DASHencoding,
      anon_sym_ident,
      anon_sym_filter,
      anon_sym_diff,
      anon_sym_merge,
      anon_sym_whitespace,
      anon_sym_export_DASHignore,
      anon_sym_export_DASHsubst,
      anon_sym_delta,
      anon_sym_encoding,
      anon_sym_binary,
  [188] = 7,
    ACTIONS(61), 1,
      sym_attr_name,
    ACTIONS(63), 1,
      anon_sym_BANG,
    ACTIONS(65), 1,
      anon_sym_DASH,
    STATE(70), 1,
      sym_builtin_attr,
    STATE(93), 1,
      sym__prefixed_attr,
    STATE(94), 1,
      sym_attribute,
    ACTIONS(67), 14,
      anon_sym_text,
      anon_sym_eol,
      anon_sym_crlf,
      anon_sym_working_DASHtree_DASHencoding,
      anon_sym_ident,
      anon_sym_filter,
      anon_sym_diff,
      anon_sym_merge,
      anon_sym_whitespace,
      anon_sym_export_DASHignore,
      anon_sym_export_DASHsubst,
      anon_sym_delta,
      anon_sym_encoding,
      anon_sym_binary,
  [223] = 12,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_dir_sep,
    ACTIONS(17), 1,
      anon_sym_LBRACKattr_RBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(73), 1,
      sym__eol,
    ACTIONS(7), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(11), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(37), 2,
      aux_sym__pattern,
      sym_range_notation,
    STATE(86), 2,
      sym_pattern,
      sym_quoted_pattern,
    STATE(99), 3,
      sym__attr_list,
      sym_macro_def,
      sym_comment,
  [266] = 9,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_escaped_char,
    ACTIONS(81), 1,
      sym__special_char,
    ACTIONS(85), 1,
      sym_dir_sep,
    STATE(85), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(75), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(16), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(83), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [301] = 9,
    ACTIONS(79), 1,
      sym_escaped_char,
    ACTIONS(81), 1,
      sym__special_char,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_dir_sep,
    STATE(75), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(75), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(16), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(83), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [336] = 3,
    ACTIONS(91), 1,
      sym_attr_name,
    STATE(74), 1,
      sym_builtin_attr,
    ACTIONS(67), 14,
      anon_sym_text,
      anon_sym_eol,
      anon_sym_crlf,
      anon_sym_working_DASHtree_DASHencoding,
      anon_sym_ident,
      anon_sym_filter,
      anon_sym_diff,
      anon_sym_merge,
      anon_sym_whitespace,
      anon_sym_export_DASHignore,
      anon_sym_export_DASHsubst,
      anon_sym_delta,
      anon_sym_encoding,
      anon_sym_binary,
  [359] = 9,
    ACTIONS(79), 1,
      sym_escaped_char,
    ACTIONS(81), 1,
      sym__special_char,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym_dir_sep,
    STATE(82), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(75), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(16), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(83), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [394] = 3,
    ACTIONS(97), 1,
      sym_attr_name,
    STATE(73), 1,
      sym_builtin_attr,
    ACTIONS(67), 14,
      anon_sym_text,
      anon_sym_eol,
      anon_sym_crlf,
      anon_sym_working_DASHtree_DASHencoding,
      anon_sym_ident,
      anon_sym_filter,
      anon_sym_diff,
      anon_sym_merge,
      anon_sym_whitespace,
      anon_sym_export_DASHignore,
      anon_sym_export_DASHsubst,
      anon_sym_delta,
      anon_sym_encoding,
      anon_sym_binary,
  [417] = 9,
    ACTIONS(79), 1,
      sym_escaped_char,
    ACTIONS(81), 1,
      sym__special_char,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_dir_sep,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(75), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(16), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(83), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [452] = 7,
    ACTIONS(103), 1,
      sym__special_char,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    ACTIONS(114), 1,
      sym__class_char,
    ACTIONS(109), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(32), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(14), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(106), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [482] = 8,
    ACTIONS(81), 1,
      sym__special_char,
    ACTIONS(117), 1,
      anon_sym_BANG,
    ACTIONS(121), 1,
      sym_escaped_char,
    ACTIONS(123), 1,
      sym_dir_sep,
    ACTIONS(119), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(11), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(83), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [514] = 7,
    ACTIONS(130), 1,
      sym_escaped_char,
    ACTIONS(133), 1,
      sym__special_char,
    ACTIONS(125), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    ACTIONS(128), 2,
      anon_sym_DQUOTE,
      sym_dir_sep,
    STATE(16), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(136), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [544] = 7,
    ACTIONS(139), 1,
      sym__special_char,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    ACTIONS(147), 1,
      sym__class_char,
    ACTIONS(143), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(32), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(14), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(141), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [574] = 7,
    ACTIONS(139), 1,
      sym__special_char,
    ACTIONS(147), 1,
      sym__class_char,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    ACTIONS(143), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(32), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(14), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(141), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [604] = 7,
    ACTIONS(139), 1,
      sym__special_char,
    ACTIONS(147), 1,
      sym__class_char,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    ACTIONS(143), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(32), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(14), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(141), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [634] = 7,
    ACTIONS(139), 1,
      sym__special_char,
    ACTIONS(147), 1,
      sym__class_char,
    ACTIONS(153), 1,
      aux_sym_range_notation_token1,
    ACTIONS(155), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(32), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(18), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(141), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [664] = 7,
    ACTIONS(139), 1,
      sym__special_char,
    ACTIONS(147), 1,
      sym__class_char,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    ACTIONS(143), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(32), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(14), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(141), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [694] = 7,
    ACTIONS(139), 1,
      sym__special_char,
    ACTIONS(147), 1,
      sym__class_char,
    ACTIONS(159), 1,
      aux_sym_range_notation_token1,
    ACTIONS(161), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(32), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(21), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(141), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [724] = 6,
    ACTIONS(139), 1,
      sym__special_char,
    ACTIONS(147), 1,
      sym__class_char,
    ACTIONS(163), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(32), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(17), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(141), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [751] = 6,
    ACTIONS(139), 1,
      sym__special_char,
    ACTIONS(147), 1,
      sym__class_char,
    ACTIONS(165), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(32), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(19), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(141), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [778] = 7,
    ACTIONS(81), 1,
      sym__special_char,
    ACTIONS(169), 1,
      sym_escaped_char,
    ACTIONS(171), 1,
      sym_dir_sep,
    ACTIONS(167), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(13), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(83), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [807] = 2,
    ACTIONS(175), 3,
      anon_sym_BSLASH,
      sym__pattern_char,
      anon_sym_LBRACK,
    ACTIONS(173), 10,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_escaped_char,
      sym_wildcard,
      sym_dir_sep,
      anon_sym_LBRACKattr_RBRACK,
      anon_sym_POUND,
      sym__eol,
      aux_sym__space_token1,
  [825] = 2,
    ACTIONS(179), 3,
      anon_sym_BSLASH,
      sym__pattern_char,
      anon_sym_LBRACK,
    ACTIONS(177), 10,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_escaped_char,
      sym_wildcard,
      sym_dir_sep,
      anon_sym_LBRACKattr_RBRACK,
      anon_sym_POUND,
      sym__eol,
      aux_sym__space_token1,
  [843] = 6,
    ACTIONS(81), 1,
      sym__special_char,
    ACTIONS(183), 1,
      sym_escaped_char,
    ACTIONS(181), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(8), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(83), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [869] = 6,
    ACTIONS(81), 1,
      sym__special_char,
    ACTIONS(187), 1,
      sym_escaped_char,
    ACTIONS(185), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(9), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(83), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [895] = 2,
    ACTIONS(189), 3,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
      sym__special_char,
    ACTIONS(191), 8,
      anon_sym_DQUOTE,
      sym_escaped_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      sym_dir_sep,
  [911] = 7,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      sym_dir_sep,
    ACTIONS(201), 1,
      aux_sym__space_token1,
    STATE(80), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(193), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(195), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [936] = 3,
    ACTIONS(189), 1,
      sym__class_char,
    ACTIONS(203), 1,
      anon_sym_DASH,
    ACTIONS(191), 8,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      anon_sym_RBRACK,
      sym_character_class,
  [953] = 3,
    ACTIONS(203), 1,
      anon_sym_DASH,
    ACTIONS(207), 1,
      sym__class_char,
    ACTIONS(205), 8,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      anon_sym_RBRACK,
      sym_character_class,
  [970] = 7,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      sym_dir_sep,
    ACTIONS(211), 1,
      aux_sym__space_token1,
    STATE(79), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(193), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(195), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [995] = 7,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      sym_dir_sep,
    ACTIONS(215), 1,
      aux_sym__space_token1,
    STATE(87), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(193), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(195), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1020] = 2,
    ACTIONS(189), 1,
      sym__class_char,
    ACTIONS(191), 9,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      anon_sym_DASH,
      anon_sym_RBRACK,
      sym_character_class,
  [1035] = 7,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      sym_dir_sep,
    ACTIONS(219), 1,
      aux_sym__space_token1,
    STATE(81), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(193), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(195), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1060] = 2,
    ACTIONS(223), 1,
      sym__class_char,
    ACTIONS(221), 9,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      anon_sym_DASH,
      anon_sym_RBRACK,
      sym_character_class,
  [1075] = 5,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(195), 2,
      sym_escaped_char,
      sym_wildcard,
    ACTIONS(225), 2,
      sym_dir_sep,
      aux_sym__space_token1,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1095] = 5,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(230), 2,
      sym_escaped_char,
      sym_wildcard,
    ACTIONS(236), 2,
      sym_dir_sep,
      aux_sym__space_token1,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1115] = 5,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 2,
      anon_sym_DQUOTE,
      sym_dir_sep,
    ACTIONS(238), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(241), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1135] = 5,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(225), 2,
      anon_sym_DQUOTE,
      sym_dir_sep,
    ACTIONS(247), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(249), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1155] = 5,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1174] = 5,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      aux_sym__space_token1,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1193] = 5,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1212] = 2,
    STATE(38), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(267), 6,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      sym__class_char,
  [1225] = 5,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 1,
      aux_sym__space_token1,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1244] = 5,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1263] = 5,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      aux_sym__space_token1,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1282] = 5,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1301] = 5,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1320] = 5,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1339] = 5,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      aux_sym__space_token1,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1358] = 5,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(287), 1,
      sym_dir_sep,
    ACTIONS(283), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(285), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(35), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1377] = 5,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(289), 1,
      aux_sym__space_token1,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1396] = 5,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      aux_sym__space_token1,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1415] = 5,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      aux_sym__space_token1,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1434] = 5,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1453] = 5,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1472] = 5,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      aux_sym__space_token1,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1491] = 4,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1507] = 4,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(303), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(31), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1523] = 4,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(307), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(34), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1539] = 2,
    ACTIONS(309), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(311), 5,
      anon_sym_DQUOTE,
      sym_escaped_char,
      anon_sym_LBRACK,
      sym_wildcard,
      sym_dir_sep,
  [1551] = 2,
    ACTIONS(309), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(311), 5,
      sym_escaped_char,
      anon_sym_LBRACK,
      sym_wildcard,
      sym_dir_sep,
      aux_sym__space_token1,
  [1563] = 2,
    ACTIONS(313), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(315), 5,
      sym_escaped_char,
      anon_sym_LBRACK,
      sym_wildcard,
      sym_dir_sep,
      aux_sym__space_token1,
  [1575] = 2,
    ACTIONS(313), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(315), 5,
      anon_sym_DQUOTE,
      sym_escaped_char,
      anon_sym_LBRACK,
      sym_wildcard,
      sym_dir_sep,
  [1587] = 4,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1603] = 4,
    ACTIONS(317), 1,
      sym__eol,
    ACTIONS(319), 1,
      aux_sym__space_token1,
    STATE(5), 1,
      sym__space,
    STATE(72), 1,
      aux_sym__attr_list_repeat1,
  [1616] = 3,
    ACTIONS(321), 1,
      anon_sym_EQ,
    STATE(91), 1,
      sym__attr_value,
    ACTIONS(323), 2,
      sym__eol,
      aux_sym__space_token1,
  [1627] = 4,
    ACTIONS(325), 1,
      sym__eol,
    ACTIONS(327), 1,
      aux_sym__space_token1,
    STATE(4), 1,
      sym__space,
    STATE(72), 1,
      aux_sym__attr_list_repeat1,
  [1640] = 4,
    ACTIONS(329), 1,
      sym__eol,
    ACTIONS(331), 1,
      aux_sym__space_token1,
    STATE(6), 1,
      sym__space,
    STATE(72), 1,
      aux_sym__attr_list_repeat1,
  [1653] = 3,
    ACTIONS(321), 1,
      anon_sym_EQ,
    STATE(96), 1,
      sym__attr_value,
    ACTIONS(334), 2,
      sym__eol,
      aux_sym__space_token1,
  [1664] = 3,
    ACTIONS(321), 1,
      anon_sym_EQ,
    STATE(95), 1,
      sym__attr_value,
    ACTIONS(336), 2,
      sym__eol,
      aux_sym__space_token1,
  [1675] = 3,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
    ACTIONS(340), 1,
      sym_dir_sep,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
  [1685] = 3,
    ACTIONS(342), 1,
      sym_dir_sep,
    ACTIONS(345), 1,
      aux_sym__space_token1,
    STATE(76), 1,
      aux_sym_pattern_repeat1,
  [1695] = 1,
    ACTIONS(347), 3,
      anon_sym_EQ,
      sym__eol,
      aux_sym__space_token1,
  [1701] = 3,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(349), 1,
      sym_dir_sep,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
  [1711] = 3,
    ACTIONS(352), 1,
      sym_dir_sep,
    ACTIONS(354), 1,
      aux_sym__space_token1,
    STATE(76), 1,
      aux_sym_pattern_repeat1,
  [1721] = 3,
    ACTIONS(356), 1,
      sym_dir_sep,
    ACTIONS(358), 1,
      aux_sym__space_token1,
    STATE(76), 1,
      aux_sym_pattern_repeat1,
  [1731] = 3,
    ACTIONS(360), 1,
      sym_dir_sep,
    ACTIONS(362), 1,
      aux_sym__space_token1,
    STATE(76), 1,
      aux_sym_pattern_repeat1,
  [1741] = 3,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(366), 1,
      sym_dir_sep,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
  [1751] = 3,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      sym_dir_sep,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
  [1761] = 3,
    ACTIONS(372), 1,
      aux_sym__space_token1,
    STATE(6), 1,
      sym__space,
    STATE(69), 1,
      aux_sym__attr_list_repeat1,
  [1771] = 3,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
    ACTIONS(376), 1,
      sym_dir_sep,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
  [1781] = 3,
    ACTIONS(372), 1,
      aux_sym__space_token1,
    STATE(6), 1,
      sym__space,
    STATE(71), 1,
      aux_sym__attr_list_repeat1,
  [1791] = 3,
    ACTIONS(378), 1,
      sym_dir_sep,
    ACTIONS(380), 1,
      aux_sym__space_token1,
    STATE(76), 1,
      aux_sym_pattern_repeat1,
  [1801] = 3,
    ACTIONS(382), 1,
      aux_sym_comment_token1,
    ACTIONS(385), 1,
      sym__eol,
    STATE(88), 1,
      aux_sym_comment_repeat1,
  [1811] = 3,
    ACTIONS(387), 1,
      aux_sym_comment_token1,
    ACTIONS(389), 1,
      sym__eol,
    STATE(88), 1,
      aux_sym_comment_repeat1,
  [1821] = 3,
    ACTIONS(391), 1,
      aux_sym_comment_token1,
    ACTIONS(393), 1,
      sym__eol,
    STATE(89), 1,
      aux_sym_comment_repeat1,
  [1831] = 1,
    ACTIONS(395), 2,
      sym__eol,
      aux_sym__space_token1,
  [1836] = 2,
    ACTIONS(397), 1,
      aux_sym__attr_value_token1,
    ACTIONS(399), 1,
      aux_sym__attr_value_token2,
  [1843] = 1,
    ACTIONS(401), 2,
      sym__eol,
      aux_sym__space_token1,
  [1848] = 1,
    ACTIONS(329), 2,
      sym__eol,
      aux_sym__space_token1,
  [1853] = 1,
    ACTIONS(403), 2,
      sym__eol,
      aux_sym__space_token1,
  [1858] = 1,
    ACTIONS(405), 2,
      sym__eol,
      aux_sym__space_token1,
  [1863] = 1,
    ACTIONS(407), 2,
      sym__eol,
      aux_sym__space_token1,
  [1868] = 1,
    ACTIONS(407), 2,
      sym__eol,
      aux_sym__space_token1,
  [1873] = 1,
    ACTIONS(409), 1,
      sym__eol,
  [1877] = 1,
    ACTIONS(411), 1,
      aux_sym__space_token1,
  [1881] = 1,
    ACTIONS(413), 1,
      aux_sym__space_token1,
  [1885] = 1,
    ACTIONS(415), 1,
      aux_sym__space_token1,
  [1889] = 1,
    ACTIONS(417), 1,
      aux_sym__space_token1,
  [1893] = 1,
    ACTIONS(419), 1,
      aux_sym__space_token1,
  [1897] = 1,
    ACTIONS(421), 1,
      aux_sym__space_token1,
  [1901] = 1,
    ACTIONS(423), 1,
      aux_sym__space_token1,
  [1905] = 1,
    ACTIONS(425), 1,
      aux_sym__space_token1,
  [1909] = 1,
    ACTIONS(427), 1,
      aux_sym__space_token1,
  [1913] = 1,
    ACTIONS(429), 1,
      aux_sym__space_token1,
  [1917] = 1,
    ACTIONS(431), 1,
      aux_sym__space_token1,
  [1921] = 1,
    ACTIONS(433), 1,
      aux_sym__space_token1,
  [1925] = 1,
    ACTIONS(435), 1,
      aux_sym__space_token1,
  [1929] = 1,
    ACTIONS(437), 1,
      aux_sym__space_token1,
  [1933] = 1,
    ACTIONS(73), 1,
      sym__eol,
  [1937] = 1,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
  [1941] = 1,
    ACTIONS(441), 1,
      aux_sym__space_token1,
  [1945] = 1,
    ACTIONS(443), 1,
      aux_sym__space_token1,
  [1949] = 1,
    ACTIONS(445), 1,
      sym_attr_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 188,
  [SMALL_STATE(7)] = 223,
  [SMALL_STATE(8)] = 266,
  [SMALL_STATE(9)] = 301,
  [SMALL_STATE(10)] = 336,
  [SMALL_STATE(11)] = 359,
  [SMALL_STATE(12)] = 394,
  [SMALL_STATE(13)] = 417,
  [SMALL_STATE(14)] = 452,
  [SMALL_STATE(15)] = 482,
  [SMALL_STATE(16)] = 514,
  [SMALL_STATE(17)] = 544,
  [SMALL_STATE(18)] = 574,
  [SMALL_STATE(19)] = 604,
  [SMALL_STATE(20)] = 634,
  [SMALL_STATE(21)] = 664,
  [SMALL_STATE(22)] = 694,
  [SMALL_STATE(23)] = 724,
  [SMALL_STATE(24)] = 751,
  [SMALL_STATE(25)] = 778,
  [SMALL_STATE(26)] = 807,
  [SMALL_STATE(27)] = 825,
  [SMALL_STATE(28)] = 843,
  [SMALL_STATE(29)] = 869,
  [SMALL_STATE(30)] = 895,
  [SMALL_STATE(31)] = 911,
  [SMALL_STATE(32)] = 936,
  [SMALL_STATE(33)] = 953,
  [SMALL_STATE(34)] = 970,
  [SMALL_STATE(35)] = 995,
  [SMALL_STATE(36)] = 1020,
  [SMALL_STATE(37)] = 1035,
  [SMALL_STATE(38)] = 1060,
  [SMALL_STATE(39)] = 1075,
  [SMALL_STATE(40)] = 1095,
  [SMALL_STATE(41)] = 1115,
  [SMALL_STATE(42)] = 1135,
  [SMALL_STATE(43)] = 1155,
  [SMALL_STATE(44)] = 1174,
  [SMALL_STATE(45)] = 1193,
  [SMALL_STATE(46)] = 1212,
  [SMALL_STATE(47)] = 1225,
  [SMALL_STATE(48)] = 1244,
  [SMALL_STATE(49)] = 1263,
  [SMALL_STATE(50)] = 1282,
  [SMALL_STATE(51)] = 1301,
  [SMALL_STATE(52)] = 1320,
  [SMALL_STATE(53)] = 1339,
  [SMALL_STATE(54)] = 1358,
  [SMALL_STATE(55)] = 1377,
  [SMALL_STATE(56)] = 1396,
  [SMALL_STATE(57)] = 1415,
  [SMALL_STATE(58)] = 1434,
  [SMALL_STATE(59)] = 1453,
  [SMALL_STATE(60)] = 1472,
  [SMALL_STATE(61)] = 1491,
  [SMALL_STATE(62)] = 1507,
  [SMALL_STATE(63)] = 1523,
  [SMALL_STATE(64)] = 1539,
  [SMALL_STATE(65)] = 1551,
  [SMALL_STATE(66)] = 1563,
  [SMALL_STATE(67)] = 1575,
  [SMALL_STATE(68)] = 1587,
  [SMALL_STATE(69)] = 1603,
  [SMALL_STATE(70)] = 1616,
  [SMALL_STATE(71)] = 1627,
  [SMALL_STATE(72)] = 1640,
  [SMALL_STATE(73)] = 1653,
  [SMALL_STATE(74)] = 1664,
  [SMALL_STATE(75)] = 1675,
  [SMALL_STATE(76)] = 1685,
  [SMALL_STATE(77)] = 1695,
  [SMALL_STATE(78)] = 1701,
  [SMALL_STATE(79)] = 1711,
  [SMALL_STATE(80)] = 1721,
  [SMALL_STATE(81)] = 1731,
  [SMALL_STATE(82)] = 1741,
  [SMALL_STATE(83)] = 1751,
  [SMALL_STATE(84)] = 1761,
  [SMALL_STATE(85)] = 1771,
  [SMALL_STATE(86)] = 1781,
  [SMALL_STATE(87)] = 1791,
  [SMALL_STATE(88)] = 1801,
  [SMALL_STATE(89)] = 1811,
  [SMALL_STATE(90)] = 1821,
  [SMALL_STATE(91)] = 1831,
  [SMALL_STATE(92)] = 1836,
  [SMALL_STATE(93)] = 1843,
  [SMALL_STATE(94)] = 1848,
  [SMALL_STATE(95)] = 1853,
  [SMALL_STATE(96)] = 1858,
  [SMALL_STATE(97)] = 1863,
  [SMALL_STATE(98)] = 1868,
  [SMALL_STATE(99)] = 1873,
  [SMALL_STATE(100)] = 1877,
  [SMALL_STATE(101)] = 1881,
  [SMALL_STATE(102)] = 1885,
  [SMALL_STATE(103)] = 1889,
  [SMALL_STATE(104)] = 1893,
  [SMALL_STATE(105)] = 1897,
  [SMALL_STATE(106)] = 1901,
  [SMALL_STATE(107)] = 1905,
  [SMALL_STATE(108)] = 1909,
  [SMALL_STATE(109)] = 1913,
  [SMALL_STATE(110)] = 1917,
  [SMALL_STATE(111)] = 1921,
  [SMALL_STATE(112)] = 1925,
  [SMALL_STATE(113)] = 1929,
  [SMALL_STATE(114)] = 1933,
  [SMALL_STATE(115)] = 1937,
  [SMALL_STATE(116)] = 1941,
  [SMALL_STATE(117)] = 1945,
  [SMALL_STATE(118)] = 1949,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(54),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(37),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(15),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(37),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(22),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(62),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(118),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(90),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_list, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_def, 4, .production_id = 9),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(36),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(32),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(14),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(33),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(16),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_pattern, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(16),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(30),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(30),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ansi_c_escape, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ansi_c_escape, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_range_notation_repeat1, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_range, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_range, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 10),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(40),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(40),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(22),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pattern, 2),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(41),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(41),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(20),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 16),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 5, .production_id = 20),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 7),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 5),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 15),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 13),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 11),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_notation, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_notation, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_notation, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_notation, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_def, 3, .production_id = 9),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_list, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attr_list_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attr_list_repeat1, 2), SHIFT_REPEAT(6),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 2, .production_id = 18),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 2, .production_id = 17),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 12), SHIFT_REPEAT(61),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 12),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_attr, 1),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 12), SHIFT_REPEAT(68),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 14),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 8),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 6),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(88),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 3, .production_id = 24),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 3, .production_id = 25),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_value, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 15),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 14),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 26),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 27),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 13),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 28),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 20),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 7, .production_id = 29),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 23),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 22),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 21),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4, .production_id = 6),
  [439] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4, .production_id = 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4, .production_id = 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gitattributes(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_attr_name,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
