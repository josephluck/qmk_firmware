#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _RAISE 1
#define _UTILS 2

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  RAISE,
  UTILS,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_NO ,   KC_1   , KC_2   , KC_3   , KC_4   , KC_5,                               KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_NO  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC,   KC_Q   , KC_W   , KC_E   , KC_R   , KC_T,                               KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_EQL  , KC_A   , KC_S   , KC_D   , KC_F   , KC_G,                               KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT,LCTL_T(KC_Z),KC_X , KC_C   , KC_V   , KC_B   ,LT(_UTILS,KC_DEL),  KC_NO,  KC_N   , KC_M   , KC_COMM, KC_DOT , RCTL_T(KC_SLSH), KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                            LALT_T(KC_UP), LGUI_T(KC_DOWN), LT(_RAISE, KC_SPC),    LT(_RAISE,KC_BSPC), RGUI_T(KC_LEFT), RALT_T(KC_RGHT)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,                            KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_DEL ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_MINS, KC_EXLM, KC_AT  ,KC_HASH , KC_DLR , KC_PERC,                            RESET  , KC_7   , KC_8   , KC_9   , KC_0   , KC_PLUS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_UNDS, KC_AMPR, KC_LPRN,KC_LBRC ,KC_LCBR , KC_ASTR,                            KC_HASH, KC_4   , KC_5   , KC_6   , KC_NO  , KC_GRV ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
LSFT_T(KC_TILDE),LCTL_T(KC_CIRC),KC_RPRN,KC_RBRC,KC_RCBR,KC_NO,KC_NO,         KC_NO  , KC_NO  , KC_1   , KC_2   , KC_3   , KC_BSLS, KC_PIPE,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                            LALT_T(KC_UP), LGUI_T(KC_DOWN), KC_TAB,              KC_ENT, RGUI_T(KC_LEFT), RALT_T(KC_RGHT)                               
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_UTILS] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      RESET,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RESET,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      DEBUG,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   DEBUG,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      EEP_RST, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   EEP_RST,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     KC_NO,   KC_NO,   KC_NO,                     KC_NO,   KC_NO,   KC_NO                                
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};


#ifdef ENCODER_ENABLE
void encoder_update_user(uint8_t index, bool clockwise) {
    switch (biton32(layer_state)) {
        case _RAISE:
            clockwise ? tap_code(KC_BRIU) : tap_code(KC_BRID);
            break;
        default:
            clockwise ? tap_code(KC_VOLU) : tap_code(KC_VOLD);
            break;
    }
}
#endif  // ENCODER_ENABLE
