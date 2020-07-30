#include QMK_KEYBOARD_H

#include "keymap_danish.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    LOWER,
    RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Default Layer
     * ,-----------------------------------------------------------.
     * | Esc|  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P | BS |
     * |-----------------------------------------------------------|
     * | Tab |  A |  S |  D |  F |  G |  H |  J |  K |  L | Ent    |
     * |-----------------------------------------------------------|
     * |  ⇧     |  Z |  X |  C |  V |  B |  N |  M |  ,  |  ↑ | -  |
     * |-----------------------------------------------------------|
     * |  ⌃  |  ⌥  |  ⌘  |   ␣  fn0  |   ␣  fn1    |  ←  |  ↓  | → |
     * `-----------------------------------------------------------'
     */
    [_QWERTY] = LAYOUT(
        LT(_RAISE, KC_ESC), DK_Q, DK_W, DK_E, DK_R, DK_T, DK_Y, DK_U, DK_I, DK_O, DK_P, KC_BSPC,
        KC_TAB, DK_A, DK_S, DK_D, DK_F, DK_G, DK_H, DK_J, DK_K, DK_L, KC_ENT,
        KC_LSFT, DK_Z, DK_X, DK_C, DK_V, DK_B, DK_N, DK_M, DK_COMM, KC_UP, KC_SLSH,
        KC_LCTL, KC_LALT, KC_LGUI, LT(_LOWER, KC_SPC), LT(_RAISE, KC_SPC), KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_LOWER] = LAYOUT(
        KC_TRNS, DK_1, DK_2, DK_3, DK_4, DK_5, DK_6, DK_7, DK_8, DK_9, DK_0, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DK_ARNG, DK_DIAE, KC_TRNS,
        KC_TRNS, DK_LABK, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DK_QUOT, DK_DOT, KC_TRNS,
        DK_LABK, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [_RAISE] = LAYOUT(
        KC_GRV, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DK_PLUS, DK_ACUT, KC_BSPC,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DK_ARNG, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DK_AE, DK_OSTR, KC_TRNS, KC_TRNS,
        RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
};

