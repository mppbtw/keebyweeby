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
#include "keymap_uk.h"

#define LM_G(a) MT(KC_LEFT_GUI, a)
#define RM_G(a) MT(KC_RIGHT_GUI, a)
#define LM_S(a) MT(KC_LEFT_SHIFT, a)
#define RM_S(a) MT(KC_RIGHT_SHIFT, a)
#define LM_C(a) MT(KC_LEFT_CTRL, a)
#define RM_C(a) MT(KC_RIGHT_CTRL, a)
#define LM_A(a) MT(KC_LEFT_ALT, a)
#define RM_A(a) MT(KC_RIGHT_ALT, a)
#define X XXXXXXX

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      X      ,    UK_Q,    UK_W,    UK_E,    UK_R,    UK_T,                         UK_Y,    UK_U,    UK_I,    UK_O,   UK_P,  X      ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      X      ,    UK_A,    UK_S,    UK_D,    UK_F,    UK_G,                         UK_H,    UK_J,    UK_K,    UK_L, KC_LEFT_SHIFT, X ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      X      ,    UK_Z,    UK_X,    UK_C,    UK_V,    UK_B,                         UK_N,    UK_M, KC_MINUS,  KC_ESC, KC_LCTL, X      ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(2),  KC_ENT,     KC_SPC,   MO(1), KC_BSPC
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      X      ,    UK_1,    UK_2,    UK_3,    UK_4,    UK_5,                         UK_6,    UK_7,    UK_8,    UK_9,    UK_0,X      ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      X      , X      , X      , X      , X      , KC_TAB,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, X      , X      ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      X      , X      , X      , X      , X      , X      ,                      X      , X      , X      , X      , X      , X      ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_SPC,   MO(3), KC_BSPC
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      X      , UK_AT,   UK_AT, UK_HASH,  UK_DLR, UK_QUOT,                      UK_LABK, UK_RABK, UK_LCBR, UK_RCBR, UK_ASTR, X      ,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      X      , UK_DLR , UK_EXLM, UK_SCLN, UK_EQL , UK_PLUS,                      UK_DOT,  KC_UNDERSCORE, UK_LPRN, UK_RPRN, UK_CIRC,X,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      X      , UK_GRV , UK_BSLS,  UK_PND, UK_HASH, UK_QUES,                      UK_DQUO, UK_COMM, UK_LBRC, UK_RBRC, UK_TILD, X      ,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(3),  KC_ENT,     KC_SPC, UK_COLN, KC_SLASH
                                      //`--------------------------'  `--------------------------'
  )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
