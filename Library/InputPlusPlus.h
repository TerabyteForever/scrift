/*# MIT License
# Forked from https://github.com/FerhatGec/inputplusplus
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#*/

#ifndef INPUT_PLUS_PLUS_H
#define INPUT_PLUS_PLUS_H

#ifndef _TERMIOS_H
#include <termios.h>
#endif
#ifndef _STDIO_H
#include <stdio.h>
#endif

#define INPUT_PP_VERSION "0.1"
#define INPUT_PP_STATE "alpha-1"

#define INPUT_PP_SPACE 32
#define INPUT_PP_EXCLAMATION_MARK 33
#define INPUT_PP_QUOTATION_MARK 34
#define INPUT_PP_NUMBER_SIGN 35
#define INPUT_PP_DOLLAR_SIGN 36
#define INPUT_PP_PERCENT_SIGN 37
#define INPUT_PP_AMPERSAND 38
#define INPUT_PP_APOSTROPHE 39
#define INPUT_PP_BEGIN_BRACKETS 40
#define INPUT_PP_END_BRACKETS 41
#define INPUT_PP_ASTERISK 42
#define INPUT_PP_PLUS_SIGN 43
#define INPUT_PP_COMMA 44
#define INPUT_PP_HYPHEN 45
#define INPUT_PP_DOT 46
#define INPUT_PP_SLASH 47

#define INPUT_PP_NUMBER_ZERO 48
#define INPUT_PP_NUMBER_ONE 49
#define INPUT_PP_NUMBER_TWO 50
#define INPUT_PP_NUMBER_THREE 51
#define INPUT_PP_NUMBER_FOUR 52
#define INPUT_PP_NUMBER_FIVE 53
#define INPUT_PP_NUMBER_SIX 54
#define INPUT_PP_NUMBER_SEVEN 55
#define INPUT_PP_NUMBER_EIGHT 56
#define INPUT_PP_NUMBER_NINE 57

#define INPUT_PP_COLON 58
#define INPUT_PP_SEMICOLON 59
#define INPUT_PP_LESS_THAN_SIGN 60
#define INPUT_PP_EQUALS_SIGN 61
#define INPUT_PP_GREATER_THAN_SIGN 62
#define INPUT_PP_QUESTION_MARK 63
#define INPUT_PP_AT_SIGN 64
#define INPUT_PP_CAPITAL_LETTER_A 65
#define INPUT_PP_CAPITAL_LETTER_B 66
#define INPUT_PP_CAPITAL_LETTER_C 67
#define INPUT_PP_CAPITAL_LETTER_D 68
#define INPUT_PP_CAPITAL_LETTER_E 69
#define INPUT_PP_CAPITAL_LETTER_F 70
#define INPUT_PP_CAPITAL_LETTER_G 71
#define INPUT_PP_CAPITAL_LETTER_H 72
#define INPUT_PP_CAPITAL_LETTER_I 73
#define INPUT_PP_CAPITAL_LETTER_J 74 
#define INPUT_PP_CAPITAL_LETTER_K 75
#define INPUT_PP_CAPITAL_LETTER_L 76
#define INPUT_PP_CAPITAL_LETTER_M 77
#define INPUT_PP_CAPITAL_LETTER_N 78
#define INPUT_PP_CAPITAL_LETTER_O 79
#define INPUT_PP_CAPITAL_LETTER_P 80
#define INPUT_PP_CAPITAL_LETTER_Q 81
#define INPUT_PP_CAPITAL_LETTER_R 82
#define INPUT_PP_CAPITAL_LETTER_S 83
#define INPUT_PP_CAPITAL_LETTER_T 84
#define INPUT_PP_CAPITAL_LETTER_U 85
#define INPUT_PP_CAPITAL_LETTER_V 86 
#define INPUT_PP_CAPITAL_LETTER_W 87
#define INPUT_PP_CAPITAL_LETTER_X 88
#define INPUT_PP_CAPITAL_LETTER_Y 89
#define INPUT_PP_CAPITAL_LETTER_Z 90

#define INPUT_PP_BEGIN_SQUARE_BRACKETS 91
#define INPUT_PP_BACK_SLASH 92
#define INPUT_PP_END_SQUARE_BRACKETS 93
#define INPUT_PP_CIRCUMFLEX 94
#define INPUT_PP_UNDER_BAR 95
#define INPUT_PP_GRAVE_ACCENT 96

#define INPUT_PP_LOWER_CASE_A 97
#define INPUT_PP_LOWER_CASE_B 98
#define INPUT_PP_LOWER_CASE_C 99
#define INPUT_PP_LOWER_CASE_D 100
#define INPUT_PP_LOWER_CASE_E 101
#define INPUT_PP_LOWER_CASE_F 102
#define INPUT_PP_LOWER_CASE_G 103
#define INPUT_PP_LOWER_CASE_H 104
#define INPUT_PP_LOWER_CASE_I 105
#define INPUT_PP_LOWER_CASE_J 106
#define INPUT_PP_LOWER_CASE_K 107
#define INPUT_PP_LOWER_CASE_L 108
#define INPUT_PP_LOWER_CASE_M 109
#define INPUT_PP_LOWER_CASE_N 110
#define INPUT_PP_LOWER_CASE_O 111
#define INPUT_PP_LOWER_CASE_P 112
#define INPUT_PP_LOWER_CASE_Q 113
#define INPUT_PP_LOWER_CASE_R 114
#define INPUT_PP_LOWER_CASE_S 115
#define INPUT_PP_LOWER_CASE_T 116
#define INPUT_PP_LOWER_CASE_U 117
#define INPUT_PP_LOWER_CASE_V 118
#define INPUT_PP_LOWER_CASE_W 119
#define INPUT_PP_LOWER_CASE_X 120
#define INPUT_PP_LOWER_CASE_Y 121
#define INPUT_PP_LOWER_CASE_Z 122

#define INPUT_PP_BEGIN_BRACES 123
#define INPUT_PP_VERTICAL_BAR 124
#define INPUT_PP_END_BRACES 125
#define INPUT_PP_TILDE_SIGN 126

#define INPUT_PP_MAJUSCULE_C_CEDILLA 128 
#define INPUT_PP_U_UMLAUT 129
#define INPUT_PP_E_ACUTE 130
#define INPUT_PP_A_CIRCUMFLEX 131
#define INPUT_PP_A_UMLAUT 132
#define INPUT_PP_LETTER_A_GRAVE_ACCENT 133
#define INPUT_PP_LETTER_A_WITH_RING 134
#define INPUT_PP_MINUSCULE_C_CEDILLA 135
#define INPUT_PP_E_CIRCUMFLEX 136
#define INPUT_PP_E_UMLAUTS 137
#define INPUT_PP_LETTER_E_WITH_GRAVE_ACCENT 138
#define INPUT_PP_I_UMLAUT 139
#define INPUT_PP_I_CIRCUMFLEX 140
#define INPUT_PP_LETTER_I_WITH_GRAVE_ACCENT 141
#define INPUT_PP_LETTER_A_UMLAUT 142
#define INPUT_PP_CAPITAL_LETTER_A_WITH_RING 143
#define INPUT_PP_CAPITAL_LETTER_E_WITH_ACUTE_ACCENT 144
#define INPUT_PP_LATIN_DIPHTHONG_LOWERCASE_AE 145
#define INPUT_PP_LATIN_DIPHTHONG_UPPERCASE_AE 146 

#endif // INPUT_PLUS_PLUS_H
