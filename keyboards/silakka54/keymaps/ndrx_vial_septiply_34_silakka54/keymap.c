// Copyright 2025 Andrei S (bleacheda@gmail.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_layer {
    _QWERTY,
    _COLEMAK_DH,
    _NAV,
    _SYM,
    _NUM,
    _FN,
    _SYS,
    _EXTRA
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(   // DF(0): _QWERTY
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                        KC_NO, KC_NO, KC_NO,   KC_NO,  KC_NO,   KC_NO,
        KC_NO, KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,                         KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,    KC_NO,
        KC_NO, KC_A,  KC_S,  KC_D,  KC_F,  KC_G,                         KC_H,  KC_J,  KC_K,    KC_L,   KC_SCLN, KC_NO,
        KC_NO, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,                         KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_NO,
                                    KC_NO, MO(2), KC_SPC,       KC_LSFT, MO(3), KC_NO
    ),

    [1] = LAYOUT(   // DF(1): _COLEMAK_DH
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                        KC_NO, KC_NO, KC_NO,   KC_NO,  KC_NO,   KC_NO,
        KC_NO, KC_Q,  KC_W,  KC_F,  KC_P,  KC_B,                         KC_J,  KC_L,  KC_U,    KC_Y,   KC_SCLN, KC_NO,
        KC_NO, KC_A,  KC_R,  KC_S,  KC_T,  KC_G,                         KC_M,  KC_N,  KC_E,    KC_I,   KC_O,    KC_NO,
        KC_NO, KC_Z,  KC_X,  KC_C,  KC_D,  KC_V,                         KC_K,  KC_H,  KC_COMM, KC_DOT, KC_SLSH, KC_NO,
                                    KC_NO, MO(2), KC_SPC,       KC_LSFT, MO(3), KC_NO
    ),

    [2] = LAYOUT(   // _NAV: Navigation layer
        KC_NO, KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_ESC,        LCTL(KC_F),    LALT(KC_LEFT), LALT(KC_RGHT), KC_INS,                             KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_CAPS, KC_NO,
        KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_RALT),                      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DEL,  KC_NO,
        KC_NO, LCTL(KC_Z),    LCTL(KC_X),    LCTL(KC_C),    LCTL(KC_V),    KC_LGUI,                            KC_ENT,  KC_BSPC, KC_TAB,  KC_APP,  KC_PSCR, KC_NO,
                                                            KC_NO,         KC_TRNS,       KC_TRNS,      MO(5), MO(4),   KC_NO
    ),

    [3] = LAYOUT(   // _SYM: Symbol layer
        KC_NO, KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,                               KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_EXLM,       KC_AT,         KC_HASH,       KC_DLR,        KC_PERC,                             KC_EQL,  KC_GRV,  KC_QUOT, KC_DQUO, KC_PLUS, KC_NO,
        KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), KC_CIRC,                             KC_ASTR, KC_LPRN, KC_LCBR, KC_LBRC, KC_MINS, KC_NO,
        KC_NO, KC_NO,         KC_NO,         KC_BSLS,       KC_PIPE,       KC_AMPR,                             KC_TILD, KC_RPRN, KC_RCBR, KC_RBRC, KC_UNDS, KC_NO,
                                                            KC_NO,         MO(4),   MO(6),             KC_TRNS, KC_TRNS, KC_NO
    ),

    [4] = LAYOUT(   // _NUM: Number layer
        KC_NO, KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,                               KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,
        KC_NO, KC_NO,         KC_NO,         KC_COMM,       KC_DOT,        KC_NO,                               KC_EQL,  KC_7,  KC_8,  KC_9,  KC_PLUS, KC_NO,
        KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_RALT),                       KC_ASTR, KC_4,  KC_5,  KC_6,  KC_MINS, KC_NO,
        KC_NO, KC_NO,         KC_APP,        KC_TAB,        KC_BSPC,       KC_ENT,                              KC_0,    KC_1,  KC_2,  KC_3,  KC_SLSH, KC_NO,
                                                            KC_NO,         KC_TRNS,       KC_TRNS,     KC_TRNS, KC_TRNS, KC_NO
    ),

    [5] = LAYOUT(   // _FUN: Function layer
        KC_NO, KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,                               KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO,         KC_MUTE,       KC_VOLD,       KC_VOLU,       KC_NO,                               KC_F12, KC_F7, KC_F8, KC_F9, KC_NO, KC_NO,
        KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_RALT),                       KC_F11, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO,
        KC_NO, KC_NO,         KC_MPLY,       KC_MPRV,       KC_MNXT,       KC_ENT,                              KC_F10, KC_F1, KC_F2, KC_F3, KC_NO, KC_NO,
                                                            KC_NO,         KC_TRNS,       KC_TRNS,     KC_TRNS, KC_TRNS, KC_NO
    ),

    [6] = LAYOUT(   // _SYS System layer
        KC_NO, KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,                          KC_NO,   KC_NO,  KC_NO,  KC_NO, KC_NO, KC_NO,
        KC_NO, RGB_TOG,  KC_NO,   KC_NO,    EE_CLR,  QK_BOOT,                        QK_BOOT, EE_CLR, KC_NO,  KC_NO, DF(0), KC_NO,
        KC_NO, RGB_MOD,  RGB_VAI, RGB_HUI,  RGB_SAI, RGB_SPI,                        KC_NO,   KC_NO,  KC_NO,  KC_NO, DF(1), KC_NO,
        KC_NO, RGB_RMOD, RGB_VAD, RGB_HUD,  RGB_SAD, RGB_SPD,                        KC_NO,   KC_NO,  KC_NO,  KC_NO, KC_NO, KC_NO,
                                            KC_NO,   KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_NO
    ),

    [7] = LAYOUT(   // _EXTRA: Extra layer, currently unused
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                    KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO
    )
};

///////////////////////////////////////////////////////////////////////////////
// Caps Word (https://docs.qmk.fm/features/caps_word)
///////////////////////////////////////////////////////////////////////////////

#ifdef CAPS_WORD_ENABLE
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_MINS: // I don't want the default behavior of automatically applying Shift to KC_MINS
        case KC_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}
#endif  // CAPS_WORD_ENABLE

///////////////////////////////////////////////////////////////////////////////
// Combos (https://docs.qmk.fm/features/combo)
///////////////////////////////////////////////////////////////////////////////

#ifdef COMBO_ENABLE
// Esc, Tab, Bspc, Enter
const uint16_t PROGMEM esc_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM tab_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM bspc_combo[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM ent_combo[] = {KC_L, KC_SCLN, COMBO_END};
// Arrows
const uint16_t PROGMEM left_combo[] = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM down_combo[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM up_combo[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM right_combo[] = {KC_DOT, KC_SLSH, COMBO_END};
// Media
const uint16_t PROGMEM volu_combo[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM vold_combo[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM mute_combo[] = {KC_W, KC_E, COMBO_END};

combo_t my_key_combos[] = { // this is ignored by Vial; just for documentation; combos can only be configured in the Vial GUI; keep the key_combos[] name for standard QMK.
    // Esc, Tab, Bspc, Enter
    COMBO(esc_combo, KC_ESC),   // Q and W => ESCAPE
    COMBO(tab_combo, KC_TAB),   // A and S => tab_combo
    COMBO(bspc_combo, KC_BSPC), // O and P => BACKSPACE
    COMBO(ent_combo, KC_ENT),   // L and ; => ENTER
    // Arrows
    COMBO(left_combo, KC_LEFT),     // N and M => LEFT
    COMBO(down_combo, KC_DOWN),     // M and , => DOWN
    COMBO(up_combo, KC_UP),         // , and . => UP
    COMBO(right_combo, KC_RGHT),    // . and / => RIGHT
    // MEDIA
    COMBO(volu_combo, KC_VOLU),    // R and T => RIGHT
    COMBO(vold_combo, KC_VOLD),    // E and R => RIGHT
    COMBO(mute_combo, KC_MUTE),    // W and E => RIGHT
};
#endif  // COMBO_ENABLE

///////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////
