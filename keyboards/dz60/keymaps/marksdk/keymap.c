/*  TODO:
    - Send unicodes for ÆØÅ - https://gist.github.com/alxbrn/6869b1cd976d6304df952644fda84ba9
*/

#include QMK_KEYBOARD_H

#include "keymap_danish.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Base layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
     * │ ⎋ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ ´ │   ⌫   │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
     * │  ⇥  │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │  ⏎  │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
     * │ MO2  │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Æ │ Ø │ ' │    │
     * ├───┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
     * │ ⇧ │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │ ⇧ │ ↑ │MO1│
     * ├───┴┬──┴─┬─┴──┬┴───┴───┴───┴───┴───┴───┼───┼───┼───┼───┼───┤
     * │ ⌃  │ ⌥  │ ⌘  │           ␣            │ ⌘ │ ⌥ │ ← │ ↓ │ → │
     * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┘
     */

    [0] = LAYOUT_60_iso_4th_row_all_1u(LT(1, KC_ESC), DK_1, DK_2, DK_3, DK_4, DK_5, DK_6, DK_7, DK_8, DK_9, DK_0, DK_PLUS, DK_ACUT, KC_BSPC, KC_TAB, DK_Q, DK_W, DK_E, DK_R, DK_T, DK_Y, DK_U, DK_I, DK_O, DK_P, DK_ARNG, DK_DIAE, MO(2), DK_A, DK_S, DK_D, DK_F, DK_G, DK_H, DK_J, DK_K, DK_L, DK_AE, DK_OSTR, DK_QUOT, KC_ENT, KC_LSFT, DK_LABK, DK_Z, DK_X, DK_C, DK_V, DK_B, DK_N, DK_M, DK_COMM, DK_DOT, KC_SLSH, KC_RSFT, KC_UP, MO(1), KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_RGUI, KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT),

    /* Function layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
     * │ 💤│ ⛅️│ ☀ │   │ 📸│   │   │ ⏮│ ⏯│ ⏭│ 🔇│ 🔉│ 🔊│  DEL  │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
     * │     │RGB│RGB│RGB│RGB│RGB│RGB│RGB│RGB│RGB│RGB│RGB│RGB│     │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
     * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
     * ├───┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
     * │   │   │   │   │   │   │   │   │   │   │   │   │   │ ⇞ │   │
     * ├───┴┬──┴─┬─┴──┬┴───┴───┴───┴───┴───┴───┼───┼───┼───┼───┼───┤
     * │    │    │    │                        │   │   │ ⇱ │ ⇟ │ ⇲ │
     * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┘
     */

    [1] = LAYOUT_60_iso_4th_row_all_1u(KC_SYSTEM_SLEEP, KC_BRMD, KC_BRMU, KC_TRNS, LSFT(LCTL(LGUI(KC_4))), KC_TRNS, KC_TRNS, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC__MUTE, KC__VOLDOWN, KC__VOLUP, KC_DEL, KC_TAB, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, RGB_MODE_RAINBOW, RGB_MODE_SWIRL, RGB_MODE_SNAKE, RGB_MODE_KNIGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END),

    /* F-keys layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
     * │   │ F1│ F2│ F3│ F4│ F5│ F6│ F7│ F8│ F9│F10│F11│F12│   ⌫   │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
     * │     │   │   │   │   │   │   │   │   │   │   │   │   │     │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
     * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
     * ├───┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬───┤
     * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
     * ├───┴┬──┴─┬─┴──┬┴───┴───┴───┴───┴───┴───┼───┼───┼───┼───┼───┤
     * │    │    │    │                        │   │   │   │   │   │
     * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┘
     */

    [2] = LAYOUT_60_iso_4th_row_all_1u(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

};
