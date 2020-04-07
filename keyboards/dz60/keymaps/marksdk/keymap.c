#include QMK_KEYBOARD_H

#include "keymap_danish.h"

enum keyboard_layers {
  _BL = 0, // Base Layer
  _FL,     // Function Layer
  _CL      // Color Layer
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Base layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ ´ │_CL│ ⌫ │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │Enter│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─┐   │
     * │ _FL  │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Æ │ Ø │ '  │   │
     * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┼───┤
     * │LSft│ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ RSft │ ↑ │ - │
     * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴─┬─┴──┬┴──┬───┼───┼───┤
     * │LCtl│LAlt│LGui│         Space         │RGui│RAl│ ← │ ↓ │ → │
     * └────┴────┴────┴───────────────────────┴────┴───┴───┴───┴───┘
     */
	[_BL] = LAYOUT_60_b_iso(
		KC_ESC, DK_1,   DK_2,   DK_3,   DK_4,   DK_5,   DK_6,   DK_7,   DK_8,   DK_9,   DK_0,   DK_PLUS,    DK_ACUT,    MO(2),  KC_BSPC,
        KC_TAB, DK_Q,   DK_W,   DK_E,   DK_R,   DK_T,   DK_Y,   DK_U,   DK_I,   DK_O,   DK_P,   DK_ARNG,    DK_DIAE,
        MO(1),  DK_A,   DK_S,   DK_D,   DK_F,  DK_G, DK_H,    DK_J,   DK_K,  DK_L,   DK_AE,  DK_OSTR,   DK_QUOT,     KC_ENT,
        KC_LSFT,    DK_LABK,    DK_Z,   DK_X,  DK_C, DK_V,    DK_B,   DK_N,  DK_M,  DK_COMM,    DK_DOT, DK_MINS,    KC_UP,  KC_SLSH,
        KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_SPC, KC_NO, KC_RGUI, KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT),

    [_FL] = LAYOUT_60_b_iso(
        DK_DLR, KC_BRMD, KC_BRMU, KC_NO, KC_NO, KC_NO, KC_NO, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC__MUTE, KC__VOLDOWN, KC__VOLUP, KC_NO, KC_DEL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_END),

    [_CL] = LAYOUT_60_b_iso(
        KC_TRNS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, RGB_MODE_RAINBOW, RGB_MODE_SWIRL, RGB_MODE_SNAKE, RGB_MODE_KNIGHT, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};

// Set underglow RGB leds to purple
// Find the list of available colors in quantum/rgblight_list.h
void matrix_init_user(void) {
  rgblight_sethsv_noeeprom_purple();
}
