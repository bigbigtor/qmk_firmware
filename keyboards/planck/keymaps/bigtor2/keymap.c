#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum planck_layers {
  _QWERTY,
  _NUMBER,
  _NAVIGA,
  _FUNCTI
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  NUMBER = LT(_NUMBER,KC_TAB),
  NAVIGA = LT(_NAVIGA,KC_ENT),
  FUNCTI = LT(_FUNCTI,KC_MNXT),
  CTLESC = CTL_T(KC_ESC), 
  SFTDEL = SFT_T(KC_BSPC),
  SYSTEM = LGUI(KC_0),
  LANGSW = LALT(KC_SPC),
  WINSPC = LGUI_T(KC_SPC),
  OSMSFT = OSM(MOD_LSFT),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT_planck_grid(
    LANGSW,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRV,  \
    CTLESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
    OSMSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_MINS, \
    SYSTEM,  KC_RALT, KC_LALT, CTLESC,  NUMBER,  WINSPC,  SFTDEL,  NAVIGA,  FUNCTI,  KC_VOLD, KC_VOLU, KC_MPLY  \
),

[_NUMBER] = LAYOUT_planck_grid(
    _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, \
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
    _______, KC_BSLS, KC_PIPE, KC_PLUS, KC_EQL,  KC_GRV,  KC_TILD, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, _______, \
	_______, _______, _______, _______, _______, _______, KC_DEL,  _______, _______, _______, _______, _______  \
),

[_NAVIGA] = LAYOUT_planck_grid(
    _______, _______, _______, _______, _______, _______, KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, \
    _______, KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, KC_TAB,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BSPC, _______, \
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  \
),

[_FUNCTI] = LAYOUT_planck_grid(
    _______, RESET,   KC_PSCR, _______, _______, _______, _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, \
	_______, KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, KC_TAB,  _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______, \
    _______, _______, _______, _______, _______, _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______, \
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  \
),
};
