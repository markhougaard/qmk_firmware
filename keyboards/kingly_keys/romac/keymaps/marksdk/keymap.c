/* Copyright 2018 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "config.h"

// Tap Dance declarations
enum {
    LEFT,
    RIGHT,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    [LEFT]  = ACTION_TAP_DANCE_DOUBLE(LCTL(LALT(KC_LEFT)), LCTL(LALT(LGUI(KC_LEFT)))),
    [RIGHT] = ACTION_TAP_DANCE_DOUBLE(LCTL(LALT(KC_RIGHT)), LCTL(LALT(LGUI(KC_RIGHT)))),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT(KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC__MUTE, KC__VOLDOWN, KC__VOLUP, KC_BRMD, KC_BRMU, MO(1), TD(LEFT), LCTL(LALT(KC_ENT)), TD(RIGHT)), [1] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LCTL(LALT(LGUI(KC_LEFT))), KC_TRNS, LCTL(LALT(LGUI(KC_RIGHT))))};
