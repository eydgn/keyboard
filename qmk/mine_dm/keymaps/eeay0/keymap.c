// Copyright 2022 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _QK
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT_split_3x5_3(
//    ┌───┬───┬───┬───┬─────────────┐                                ┌─────────────┬───┬───┬───┬───┐
//    │ q │ w │ e │ r │      t      │                                │      y      │ u │ i │ o │ p │
//    ├───┼───┼───┼───┼─────────────┤                                ├─────────────┼───┼───┼───┼───┤
//    │ a │ s │ d │ f │      g      │                                │      h      │ j │ k │ l │ ; │
//    ├───┼───┼───┼───┼─────────────┤                                ├─────────────┼───┼───┼───┼───┤
//    │ z │ x │ c │ v │      b      │                                │      n      │ m │ , │ . │ / │
//    └───┴───┴───┴───┼─────────────┼──────┬─────┐       ┌─────┬─────┼─────────────┼───┴───┴───┴───┘
//                    │ LT(1, lgui) │ bspc │ spc │       │ spc │ ent │ LT(1, lalt) │                
//                    └─────────────┴──────┴─────┘       └─────┴─────┴─────────────┘                
  KC_Q , KC_W , KC_E , KC_R , KC_T           ,                                              KC_Y           , KC_U , KC_I    , KC_O   , KC_P   ,
  KC_A , KC_S , KC_D , KC_F , KC_G           ,                                              KC_H           , KC_J , KC_K    , KC_L   , KC_SCLN,
  KC_Z , KC_X , KC_C , KC_V , KC_B           ,                                              KC_N           , KC_M , KC_COMM , KC_DOT , KC_SLSH,
                              LT(1, KC_LGUI) , KC_BSPC , KC_SPC ,         KC_SPC , KC_ENT , LT(1, KC_LALT)                                    
),

[_QK] = LAYOUT_split_3x5_3(
//    ┌──────┬────┬────┬────┬────┐                           ┌────┬────┬────┬────┬──────┐
//    │ boot │ no │ no │ no │ no │                           │ no │ no │ no │ no │ boot │
//    ├──────┼────┼────┼────┼────┤                           ├────┼────┼────┼────┼──────┤
//    │  no  │ no │ no │ no │ no │                           │ no │ no │ no │ no │  no  │
//    ├──────┼────┼────┼────┼────┤                           ├────┼────┼────┼────┼──────┤
//    │  no  │ no │ no │ no │ no │                           │ no │ no │ no │ no │  no  │
//    └──────┴────┴────┴────┼────┼────┬────┐       ┌────┬────┼────┼────┴────┴────┴──────┘
//                          │ no │ no │ no │       │ no │ no │ no │                      
//                          └────┴────┴────┘       └────┴────┴────┘                      
  QK_BOOT , KC_NO , KC_NO , KC_NO , KC_NO ,                                         KC_NO , KC_NO , KC_NO , KC_NO , QK_BOOT,
  KC_NO   , KC_NO , KC_NO , KC_NO , KC_NO ,                                         KC_NO , KC_NO , KC_NO , KC_NO , KC_NO  ,
  KC_NO   , KC_NO , KC_NO , KC_NO , KC_NO ,                                         KC_NO , KC_NO , KC_NO , KC_NO , KC_NO  ,
                                    KC_NO , KC_NO , KC_NO ,         KC_NO , KC_NO , KC_NO                                  
)
};
