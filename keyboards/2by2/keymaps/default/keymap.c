// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define MATRIX_ROWS 2
#define MATRIX_COLS 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬
     * │ A │ B │
     * ├───┼───┼
     * │ D │ E │
     * └───┴───┴
     */
    [0] = LAYOUT_2x2(
        KC_A,    KC_B,
        KC_D,    KC_E
    )
};
