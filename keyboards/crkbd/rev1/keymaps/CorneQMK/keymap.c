/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
#include "combos.h"
// #include "quantum.h"
//

enum layers  {
    BASE,        // 0 Base Layer
    NAV,         // 1 Navigation
    NUM_SYM,     // 2 Numbers & Symboyls
    FN,    // 3 Function Keys
    MOUSE_NAV,   // 4 Mouse Navigation
    UTILITIES,   // 5 Utilities (keyboard settings)
    PROD_A,      // 6 productivity
    PROD_B,      // 7
    GAMING_A,    // 8 Gaming
    GAMING_B,    // 9
    GAMING_C,    // 10
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_split_3x6_3(
  //|-----------------------------------------------------|  |-----------------------------------------------------|
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        KC_H,    KC_J,    KC_K,    KC_L, KC_QUOT,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------|   |--------+--------+--------+--------+--------+--------|
                                 KC_LGUI, MO(NAV),  KC_SPC,     KC_ENT, MO(NUM_SYM), KC_LALT
                             //|--------------------------|   |------------------------------'

  ),

    [NAV] = LAYOUT_split_3x6_3(
  //|-----------------------------------------------------|  |-----------------------------------------------------|
       KC_TAB, KC_TRNS,   KC_P7,   KC_P8,   KC_P9,  KC_NUM,    KC_HOME, KC_PGUP, KC_PGDN,  KC_END,    KC_0, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_TRNS,   KC_P4,   KC_P5,   KC_P6, KC_TRNS,    KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
      KC_LSFT,   KC_P0,   KC_P1,   KC_P2,   KC_P3, KC_TRNS,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_LGUI,  KC_TRNS,  KC_SPC,     KC_ENT,  MO(FN), KC_RALT
                             //`--------------------------|  |--------------------------'
  ),

    [NUM_SYM] = LAYOUT_split_3x6_3(
  //|-----------------------------------------------------|  |-----------------------------------------------------|
       KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
      KC_LCTL,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
      KC_LSFT,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_LGUI,  MO(FN),  KC_SPC,     KC_ENT, KC_TRNS, KC_RALT
                             //`--------------------------|  |--------------------------'
  ),

    [FN] = LAYOUT_split_3x6_3(
  //|-----------------------------------------------------|  |-----------------------------------------------------|
      QK_BOOT,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,      KC_NO,  KC_F13,  KC_F14,  KC_F15,  KC_F16,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
      KC_TRNS,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,      KC_NO, KC_F17,   KC_F18,  KC_F19,  KC_F20,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
      KC_TRNS,   KC_F9,  KC_F10,  KC_F11,  KC_F12,   KC_NO,      KC_NO,   KC_F21,  KC_F22, KC_F23,  KC_F24,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_LGUI, KC_TRNS,  KC_SPC,     KC_ENT, KC_TRNS, KC_RALT
                             //`--------+--------+--------|  |--------+--------+--------'
  ),

  [MOUSE_NAV] = LAYOUT_split_3x6_3(
  //|-----------------------------------------------------|  |-----------------------------------------------------|
      QK_BOOT,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
      RM_TOGG, RM_HUEU, RM_SATU, RM_VALU,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
      RM_NEXT, RM_HUED, RM_SATD, RM_VALD,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_LGUI, KC_TRNS,  KC_SPC,     KC_ENT, KC_TRNS, KC_RALT
                             //|--------+--------+--------|  |--------+--------+--------|
  ),

  [UTILITIES] = LAYOUT_split_3x6_3(
  //|-----------------------------------------------------|  |-----------------------------------------------------|
      QK_BOOT,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
      RM_TOGG, RM_HUEU, RM_SATU, RM_VALU,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
      RM_NEXT, RM_HUED, RM_SATD, RM_VALD,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_LGUI, KC_TRNS,  KC_SPC,     KC_ENT, KC_TRNS, KC_RALT
                             //`--------+--------+--------|  |--------+--------+--------'
  ),

  [PROD_A] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_P7,   KC_P8,   KC_P9,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_P4,   KC_P5,   KC_P6,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_P1,   KC_P2,   KC_P3,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          MO(PROD_B), KC_LALT,  KC_SPC,     KC_ENT, KC_P0, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [PROD_B] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_P7,   KC_P8,   KC_P9,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_P4,   KC_P5,   KC_P6,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_P1,   KC_P2,   KC_P3,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_LALT,  KC_SPC,     KC_ENT, KC_P0, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [GAMING_B] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RM_TOGG, RM_HUEU, RM_SATU, RM_VALU,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RM_NEXT, RM_HUED, RM_SATD, RM_VALD,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [GAMING_C] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RM_TOGG, RM_HUEU, RM_SATU, RM_VALU,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RM_NEXT, RM_HUED, RM_SATD, RM_VALD,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
