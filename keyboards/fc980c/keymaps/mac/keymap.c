/*
Copyright 2024 Sam Vincent

For the Norbauer Heavy-9 with Hasu alt controller
Mac Pro Layout

Some key replacements for Mac OS specifically:
KC_BRIGHTNESS_DOWN is KC_SCRL
KC_BRIGHTNESS_UP is KC_PAUS
KC_F5 would be RGB_VAD but no RGB key backlighting
KC_F6 would be RGB_VAI but no RGB key backlighting
KC_DEL becomes KC_GLOBE (Mac Fn)
KC_INS becomes KC_CAPP (Snapshot)

Fn modifier on the FC980c should ideally be kept to preserve layer
access to F1-F12

$ qmk compile -kb fc980c -km mac
$ qmk flash --keyboard fc980c --keymap mac

~~~
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

#define KC_CAPP LGUI(LSFT(KC_4))        // Capture portion of screen

enum layers{
  MAC_BASE,
  MAC_FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT(
        KC_ESC, KC_SCRL, KC_PAUS, KC_MCTL, KC_LPAD, KC_F5, KC_F6, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, KC_GLOBE, KC_CAPP, KC_PGUP, KC_PGDN,
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_P7, KC_P8, KC_P9, KC_PPLS,
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_P4, KC_P5, KC_P6,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_P1, KC_P2, KC_P3, KC_PENT,
        KC_LCTL, KC_LOPT, KC_LCMD, KC_SPC, KC_RCMD, KC_RCTL, MO(MAC_FN), KC_LEFT, KC_DOWN, KC_RGHT, KC_P0, KC_PDOT),
    [MAC_FN] = LAYOUT(
        _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_INS, KC_HOME, KC_END,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SCRL, KC_PAUS, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, KC_APP, _______, KC_HOME, KC_PGDN, KC_END, _______, _______),
};
