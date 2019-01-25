#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum planck_layers {
  _QWERTY,
  _NUMBER,
  _NAVIGA,
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  NUMBER = LT(_NUMBER,KC_TAB),
  NAVIGA = LT(_NAVIGA,KC_ENT),
  ALTESC = ALT_T(KC_ESC), 
  CTLDEL = CTL_T(KC_BSPC),
  UNLOCK = LCA(KC_DEL),
  SFTSPC = LSFT_T(KC_SPC),
  EURO   = RALT(KC_E),
  PLYNXT = 0
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT_planck_grid(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_EQL,  KC_MINS, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    \
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LBRC, KC_RBRC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, \
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_GRV,  KC_QUOT, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, \
    UNLOCK,  KC_LGUI, KC_LALT, NUMBER,  SFTSPC,  _______, ALTESC,  CTLDEL,  NAVIGA,  KC_VOLD, KC_VOLU, TD(PLYNXT)\
),

[_NUMBER] = LAYOUT_planck_grid(
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______, _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, \
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    \
    KC_BSLS, KC_PIPE, KC_PLUS, KC_EQL,  KC_GRV,  _______, _______, KC_TILD, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, \
	_______, _______, _______, _______, _______, _______, _______, KC_DEL,  _______, _______, _______, _______  \
),

[_NAVIGA] = LAYOUT_planck_grid(
    RESET,   KC_PSCR, EURO,    _______, _______, _______, _______, KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  \
    KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, KC_TAB,  _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BSPC, \
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
	_______, _______, _______, _______, _______, _______, _______, KC_DEL,  _______, _______, _______, _______  \
),
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [PLYNXT]  = ACTION_TAP_DANCE_DOUBLE(KC_MPLY, KC_MNXT)
};
