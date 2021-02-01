/*
  Copyright 2021 Joseph Luck <joseph.luck@gmail.com>

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
#include "version.h"

#define _QWERTY 0
#define _RAISE 1
#define _UTILS 2

enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    RAISE,
    UTILS,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_ergodox_pretty(
    KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, 
    KC_EQL, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_NO, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, 
    KC_MINS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
    RSFT_T(KC_GRV), LCTL_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, RCTL_T(KC_SLSH), RSFT_T(KC_ESC), 
    KC_NO, KC_NO, KC_NO, LALT_T(KC_UP), LGUI_T(KC_DOWN), RGUI_T(KC_LEFT), RALT_T(KC_RGHT), KC_NO, KC_NO, KC_NO, LT(2, KC_DEL), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LT(1, KC_SPC), KC_NO, KC_NO, KC_NO, KC_NO, LT(1, KC_ENT)
  ),
  [_RAISE]  = LAYOUT_ergodox_pretty(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_LPRN, KC_LBRC, KC_LCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_RPRN, KC_RBRC, KC_RCBR, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_LT, KC_SLSH, KC_GT, KC_NO, KC_NO, KC_NO, KC_NO, KC_0, KC_DOT, KC_SLSH, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
  [_UTILS]  = LAYOUT_ergodox_pretty(
    RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DEBUG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, EEP_RST, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  )
};
