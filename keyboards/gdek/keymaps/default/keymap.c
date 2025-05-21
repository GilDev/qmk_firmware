// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤Bsp├───┐   ┌───┤Ent├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
      QK_BOOT,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                       QK_BOOT,     KC_7,     KC_8,    KC_9,    KC_0,    QK_BOOT,
      QK_RGB_MATRIX_VALUE_UP,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                       QK_RGB_MATRIX_VALUE_UP,     KC_U,     KC_I,    KC_O,    KC_P,    QK_RGB_MATRIX_VALUE_UP,
      QK_RGB_MATRIX_VALUE_DOWN,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                       QK_RGB_MATRIX_VALUE_DOWN,     KC_J,     KC_K,    KC_L,    KC_SCLN, QK_RGB_MATRIX_VALUE_DOWN,
      DB_TOGG,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE,   DB_TOGG,KC_N,     KC_M,     KC_COMM, KC_DOT,  KC_SLSH, DB_TOGG,
                        KC_LCTL, KC_LGUI, KC_LCMD, KC_LALT, KC_ENT,    KC_SPC, KC_RALT,  KC_RCMD,  KC_RGUI, KC_RCTL
    )
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  debug_mouse=true;
}
