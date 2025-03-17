// Copyright 2025 Andrei S (bleacheda@gmail.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_layer {
    // LINUX
    _QWERTY, // DF[0]
    _COLEMAK_DH, // DF[1]
    _EXT, // [2]
    _SYM, // [3]
    _NUM, // [4]
    _FN, // [5]
    _SYS, // [6]
    _EXTRA, // [7]
    // MACOS
    _QWERTY_MAC, // DF[8]
    _COLEMAK_DH_MAC, // DF[9]
    _EXT_MAC, // [10]
    _SYM_MAC, // [11]
    _NUM_MAC, // [12]
    _FN_MAC, // [13]
    _SYS_MAC, // [14]
    _EXTRA_MAC // [15]
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// ########################################### LINUX ##################################################################

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

    [2] = LAYOUT(   // _EXT: EXTend / NAVigation layer
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

    [6] = LAYOUT(   // _SYS: System layer
        KC_NO, KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,                          KC_NO,     KC_NO,  KC_NO,      KC_NO, KC_NO, KC_NO,
        KC_NO, RGB_TOG,  KC_NO,   QK_BOOT,  EE_CLR,  QK_REBOOT,                      QK_REBOOT, EE_CLR, QK_BOOT,    KC_NO, KC_NO, KC_NO,
        KC_NO, RGB_MOD,  RGB_VAI, RGB_HUI,  RGB_SAI, RGB_SPI,                        KC_NO,     KC_NO,  KC_NO,      DF(0), DF(8), KC_NO,
        KC_NO, RGB_RMOD, RGB_VAD, RGB_HUD,  RGB_SAD, RGB_SPD,                        KC_NO,     KC_NO,  KC_NO,      DF(1), DF(9), KC_NO,
                                            KC_NO,   KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_NO
    ),

    [7] = LAYOUT(   // _EXTRA: Extra layer, currently unused
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                    KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO
    ),

// ########################################### MACOS ##################################################################

    [8] = LAYOUT(   // DF(8): _QWERTY_MAC
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                        KC_NO, KC_NO, KC_NO,   KC_NO,  KC_NO,   KC_NO,
        KC_NO, KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,                         KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,    KC_NO,
        KC_NO, KC_A,  KC_S,  KC_D,  KC_F,  KC_G,                         KC_H,  KC_J,  KC_K,    KC_L,   KC_SCLN, KC_NO,
        KC_NO, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,                         KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_NO,
                                    KC_NO, MO(10), KC_SPC,       KC_LSFT, MO(11), KC_NO
    ),

    [9] = LAYOUT(   // DF(9): _COLEMAK_DH_MAC
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                        KC_NO, KC_NO, KC_NO,   KC_NO,  KC_NO,   KC_NO,
        KC_NO, KC_Q,  KC_W,  KC_F,  KC_P,  KC_B,                         KC_J,  KC_L,  KC_U,    KC_Y,   KC_SCLN, KC_NO,
        KC_NO, KC_A,  KC_R,  KC_S,  KC_T,  KC_G,                         KC_M,  KC_N,  KC_E,    KC_I,   KC_O,    KC_NO,
        KC_NO, KC_Z,  KC_X,  KC_C,  KC_D,  KC_V,                         KC_K,  KC_H,  KC_COMM, KC_DOT, KC_SLSH, KC_NO,
                                    KC_NO, MO(10), KC_SPC,       KC_LSFT, MO(11), KC_NO
    ),

    [10] = LAYOUT(   // _EXT_MAC: EXTend / NAVigation layer
        KC_NO, KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_ESC,        LGUI(KC_F),    LALT(KC_LEFT), LALT(KC_RGHT), KC_INS,                             KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_CAPS, KC_NO,
        KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_RALT),                      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DEL,  KC_NO,
        KC_NO, LGUI(KC_Z),    LGUI(KC_X),    LGUI(KC_C),    LGUI(KC_V),    KC_LGUI,                            KC_ENT,  KC_BSPC, KC_TAB,  KC_APP,  KC_PSCR, KC_NO,
                                                            KC_NO,         KC_TRNS,       KC_TRNS,      MO(13), MO(12),   KC_NO
    ),

    [11] = LAYOUT(   // _SYM_MAC: Symbol layer
        KC_NO, KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,                               KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_EXLM,       KC_AT,         KC_HASH,       KC_DLR,        KC_PERC,                             KC_EQL,  KC_GRV,  KC_QUOT, KC_DQUO, KC_PLUS, KC_NO,
        KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), KC_CIRC,                             KC_ASTR, KC_LPRN, KC_LCBR, KC_LBRC, KC_MINS, KC_NO,
        KC_NO, KC_NO,         KC_NO,         KC_BSLS,       KC_PIPE,       KC_AMPR,                             KC_TILD, KC_RPRN, KC_RCBR, KC_RBRC, KC_UNDS, KC_NO,
                                                            KC_NO,         MO(12),   MO(14),             KC_TRNS, KC_TRNS, KC_NO
    ),

    [12] = LAYOUT(   // _NUM_MAC: Number layer
        KC_NO, KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,                               KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,
        KC_NO, KC_NO,         KC_NO,         KC_COMM,       KC_DOT,        KC_NO,                               KC_EQL,  KC_7,  KC_8,  KC_9,  KC_PLUS, KC_NO,
        KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_RALT),                       KC_ASTR, KC_4,  KC_5,  KC_6,  KC_MINS, KC_NO,
        KC_NO, KC_NO,         KC_APP,        KC_TAB,        KC_BSPC,       KC_ENT,                              KC_0,    KC_1,  KC_2,  KC_3,  KC_SLSH, KC_NO,
                                                            KC_NO,         KC_TRNS,       KC_TRNS,     KC_TRNS, KC_TRNS, KC_NO
    ),

    [13] = LAYOUT(   // _FUN_MAC: Function layer
        KC_NO, KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,                               KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO,         KC_MUTE,       KC_VOLD,       KC_VOLU,       KC_NO,                               KC_F12, KC_F7, KC_F8, KC_F9, KC_NO, KC_NO,
        KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_RALT),                       KC_F11, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO,
        KC_NO, KC_NO,         KC_MPLY,       KC_MPRV,       KC_MNXT,       KC_ENT,                              KC_F10, KC_F1, KC_F2, KC_F3, KC_NO, KC_NO,
                                                            KC_NO,         KC_TRNS,       KC_TRNS,     KC_TRNS, KC_TRNS, KC_NO
    ),

    [14] = LAYOUT(   // _SYS: System layer
        KC_NO, KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,                          KC_NO,     KC_NO,  KC_NO,      KC_NO, KC_NO, KC_NO,
        KC_NO, RGB_TOG,  KC_NO,   QK_BOOT,  EE_CLR,  QK_REBOOT,                      QK_REBOOT, EE_CLR, QK_BOOT,    KC_NO, KC_NO, KC_NO,
        KC_NO, RGB_MOD,  RGB_VAI, RGB_HUI,  RGB_SAI, RGB_SPI,                        KC_NO,     KC_NO,  KC_NO,      DF(0), DF(8), KC_NO,
        KC_NO, RGB_RMOD, RGB_VAD, RGB_HUD,  RGB_SAD, RGB_SPD,                        KC_NO,     KC_NO,  KC_NO,      DF(1), DF(9), KC_NO,
                                            KC_NO,   KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_NO
    ),

    [15] = LAYOUT(   // _EXTRA_MAC: Extra layer, currently unused
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                    KC_NO, KC_NO, KC_NO,        KC_NO, KC_NO, KC_NO
    )

};

///////////////////////////////////////////////////////////////////////////////
// Chordal Hold Handedness
///////////////////////////////////////////////////////////////////////////////

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
        'L', 'L', 'L', 'L', 'L', 'L',            'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',            'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',            'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',            'R', 'R', 'R', 'R', 'R', 'R',
                       'L', 'L', 'L',            'R', 'R', 'R'
    );

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
const uint16_t PROGMEM esc_combo[] = {KC_Q, KC_Z, COMBO_END};
const uint16_t PROGMEM tab_combo[] = {KC_W, KC_X, COMBO_END};
const uint16_t PROGMEM ent_combo[] = {KC_Y, KC_N, COMBO_END};
const uint16_t PROGMEM bspc_combo[] = {KC_U, KC_M, COMBO_END};
// Arrows
const uint16_t PROGMEM left_combo[] = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM down_combo[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM up_combo[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM right_combo[] = {KC_DOT, KC_SLSH, COMBO_END};
// Media
const uint16_t PROGMEM volu_combo[] = {KC_T, KC_B, COMBO_END};
const uint16_t PROGMEM vold_combo[] = {KC_R, KC_V, COMBO_END};
const uint16_t PROGMEM mute_combo[] = {KC_E, KC_C, COMBO_END};

combo_t my_key_combos[] = { // this is ignored by Vial; I put it here just for documentation; combos can only be configured in the Vial GUI; keep the key_combos[] name for standard QMK.
    // Esc, Tab, Bspc, Enter
    COMBO(esc_combo, KC_ESC),   // Q and Z => ESCAPE
    COMBO(tab_combo, KC_TAB),   // W and X => tab_combo
    COMBO(ent_combo, KC_ENT),   // Y and N => ENTER
    COMBO(bspc_combo, KC_BSPC), // U and M => BACKSPACE
    // Arrows
    COMBO(left_combo, KC_LEFT),     // N and M => LEFT
    COMBO(down_combo, KC_DOWN),     // M and , => DOWN
    COMBO(up_combo, KC_UP),         // , and . => UP
    COMBO(right_combo, KC_RGHT),    // . and / => RIGHT
    // MEDIA
    COMBO(volu_combo, KC_VOLU),    // T and B => VOLUME UP
    COMBO(vold_combo, KC_VOLD),    // R and V => VOLUME DOWN
    COMBO(mute_combo, KC_MUTE),    // E and C => MUTE
};
#endif  // COMBO_ENABLE

///////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////
