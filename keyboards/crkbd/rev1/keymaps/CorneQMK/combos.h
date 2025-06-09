/*
Copyright 2025 @cyb3rkun / @Cyb3r-Kun

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// semi colon and colon combos
const uint16_t PROGMEM semcol[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM colon[] = {KC_K, KC_L, COMBO_END};

//brackets
const uint16_t PROGMEM l_bracket[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM r_bracket[] = {KC_U, KC_I, COMBO_END};
//parenthases
const uint16_t PROGMEM l_parenthases[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM r_parenthases[] = {KC_J, KC_K, COMBO_END};
//braces
const uint16_t PROGMEM l_braces[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM r_braces[] = {KC_M, KC_COMM, COMBO_END};
//angle brackets
const uint16_t PROGMEM s_than[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM g_than[] = {KC_I, KC_O, COMBO_END};

//grave
const uint16_t PROGMEM grave[] = {KC_A, KC_S, COMBO_END};
//tilde
const uint16_t PROGMEM tilde[] = {KC_S, KC_D, COMBO_END};
//pipe
const uint16_t PROGMEM pipe[] = {KC_X, KC_C, COMBO_END};
//backslash
const uint16_t PROGMEM backslash[] = {KC_L, KC_QUOT, COMBO_END};

// symbols
// asterisk
const uint16_t PROGMEM asterisk[] = {KC_E, KC_I, COMBO_END};
// plus
const uint16_t PROGMEM plus[] = {KC_R, KC_U, COMBO_END};
// dollar
const uint16_t PROGMEM dollar[] = {KC_D, KC_K, COMBO_END};
// equals
const uint16_t PROGMEM equals[] = {KC_F, KC_J, COMBO_END};
// ampersand
const uint16_t PROGMEM ampersand[] = {KC_G, KC_H, COMBO_END};
// minus
const uint16_t PROGMEM minus[] = {KC_V, KC_M, COMBO_END};
// Underscore
const uint16_t PROGMEM underscore[] = {KC_B, KC_N, COMBO_END};
// exclamation mark
const uint16_t PROGMEM exclamation[] = {KC_C, KC_COMM, COMBO_END};
// caret
const uint16_t PROGMEM caret[] = {KC_T, KC_Y, COMBO_END};
// percentage
const uint16_t PROGMEM percent[] = {KC_DOT, KC_SLSH, COMBO_END};
// hashtag/pound
const uint16_t PROGMEM hash[] = {KC_Z, KC_X, COMBO_END};

// Utilities
// capslock
const uint16_t PROGMEM capslock[] = {KC_LSFT, KC_RSFT, COMBO_END};

// underscore
// const uint16_t PROGMEM backslash[] = {KC_L, KC_QUOT, COMBO_END};

combo_t key_combos[] = {
    COMBO(semcol, KC_SCLN),
    COMBO(colon, KC_COLN),

    COMBO(l_parenthases, KC_LPRN),
    COMBO(r_parenthases, KC_RPRN),

    COMBO(l_bracket, KC_LBRC),
    COMBO(r_bracket, KC_RBRC),

    COMBO(l_braces, KC_LCBR),
    COMBO(r_braces, KC_RCBR),

    COMBO(s_than, KC_LABK),
    COMBO(g_than, KC_RABK),

    COMBO(grave, KC_GRAVE),
    COMBO(tilde, KC_TILD),
    COMBO(pipe, KC_PIPE),
    COMBO(backslash, KC_BSLS),

    COMBO(asterisk, KC_ASTR),
    COMBO(plus, KC_PLUS),
    COMBO(dollar, KC_DLR),
    COMBO(equals, KC_EQL),
    COMBO(ampersand, KC_AMPR),
    COMBO(minus, KC_MINS),
    COMBO(underscore, KC_UNDS),
    COMBO(exclamation, KC_EXLM),
    COMBO(caret, KC_CIRC),
    COMBO(percent, KC_PERC),
    COMBO(hash, KC_HASH),


    COMBO(capslock, KC_CAPS),

};
