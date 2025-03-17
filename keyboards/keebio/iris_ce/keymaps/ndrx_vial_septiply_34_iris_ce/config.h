// Copyright 2025 Andrei S (bleacheda@gmail.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define VIAL_KEYBOARD_UID {0x45, 0xEE, 0xB2, 0xB2, 0xFE, 0x38, 0xF4, 0x4D}
#define VIAL_UNLOCK_COMBO_ROWS {0,9}
#define VIAL_UNLOCK_COMBO_COLS {0,5}

// Support more layers and macros
#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define DYNAMIC_KEYMAP_MACRO_COUNT 64

// Caps Word settings
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD /* Activate CAPS_WORD by double tapping Left Shift. */
#define CAPS_WORD_IDLE_TIMEOUT 3000 /* Configure CAPS_WORD Idle timeout, the default is 5000 (5 seconds). */

// One Shot keys settings
#define ONESHOT_TAP_TOGGLE 3  /* Tapping this number of times holds the key until tapped once again. (default 5). */
#define ONESHOT_TIMEOUT 3000  /* Time (in ms) before the one shot key is released. If this is not defined, the one shot key remains active indefinitely until another key is pressed. */

// Combo settings
#define COMBO_TERM 30 /* Lower the timeout from the default of 50ms to avoid accidental triggering of combos. */
#define COMBO_ONLY_FROM_LAYER 0 /* Combo keys are always checked out from layer 0, even if other layers are active */

