/* Copyright 2018 Jumail Mundekkat
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

#define ______ KC_TRNS

/*
Key:
	L	Locking
	M 	Momentary

+---+---+---+---+---+---+
| M | M | M | M | M | M |
+---+---+---+---+---+---+
| M | M | M | M | M | M |
+---+---+---+---+---+---+
| M | M | M | M | M | L |
+---+---+---+---+---+---+
| M | M | M | M | M | L |
+---+---+---+---+---+---+
| M | M | M | M | M | L |
+---+---+---+---+---+---+
*/

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  CUSTOM_KEY_1 = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_F13, KC_F14, KC_F15, KC_F16, KC_A  , MO(1),
		KC_F17, KC_F18, KC_F19, KC_F20, KC_B  , MO(2), 
		KC_F21, KC_F22, KC_F23, KC_F24, KC_C  , MO(3), 
		KC_D  , KC_E  , KC_F  , KC_G  , KC_H  , MO(4), 
		KC_I  , KC_J  , KC_K  , KC_L  , KC_M  , MO(5)
    ),

	[1] = LAYOUT(
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______, 
		RESET,  ______, ______, ______, ______, ______
    ),

	[2] = LAYOUT(
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______
    ),

	[3] = LAYOUT(
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______
    ),

	[4] = LAYOUT(
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______
    ),

	[5] = LAYOUT(
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______, 
		______, ______, ______, ______, ______, ______
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case CUSTOM_KEY_1:
      if (record->event.pressed) {
		// pressed
      } else {
		// released
      }
      break;
  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
