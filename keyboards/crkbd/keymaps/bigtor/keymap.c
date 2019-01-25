#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum layers {
  _QWERTY,
  _NUMBER,
  _NAVIGA,
  _FUNCTI
};

enum custom_keycodes {
  KC_QWERTY = SAFE_RANGE,
  KC_NUMBER = LT(_NUMBER,KC_SPC),
  KC_NAVIGA = LT(_NAVIGA,KC_ENT),
  KC_FUNCTI = LT(_FUNCTI,KC_MNXT),
  KC_CTLESC = CTL_T(KC_ESC), 
  KC_SFTDEL = SFT_T(KC_BSPC),
  KC_UNLOCK = LCA(KC_DEL),
  KC_ALTSPC = LALT_T(KC_SPC),
  KC_OSMSFT = OSM(MOD_LSFT),
  KC________ = KC_TRNS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT_kc(
    TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    GRV,  \
    CTLESC,  A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN, QUOT, \
    OSMSFT,  Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH, MINS, \
    RALT, NUMBER,  ALTSPC,  SFTDEL,  NAVIGA,  FUNCTI\
),

[_NUMBER] = LAYOUT_kc(
    _______, EXLM, AT,   HASH, DLR,  PERC, CIRC, AMPR, ASTR, LPRN, RPRN, _______, \
    _______, 1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    _______, \
    _______, BSLS, PIPE, PLUS, EQL,  GRV,  TILD, LCBR, RCBR, LBRC, RBRC, _______, \
	_______, _______, _______, DEL,  _______, _______  \
),

[_NAVIGA] = LAYOUT_kc(
    _______, _______, _______, _______, _______, _______, INS,  HOME, PGDN, PGUP, END,  _______, \
    _______, LCTL, LGUI, LALT, LSFT, TAB,  LEFT, DOWN, UP,   RGHT, BSPC, _______, \
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
	_______, _______, _______, _______, _______, _______  \
),

[_FUNCTI] = LAYOUT_kc(
    _______, _______,   PSCR, _______, _______, _______, _______, F9,   F10,  F11,  F12,  _______, \
	_______, LCTL, LGUI, LALT, LSFT, TAB,  _______, F5,   F6,   F7,   F8,   _______, \
    _______, VOLD, VOLU, MPLY, _______, _______, _______, F1,   F2,   F3,   F4,   _______, \
	_______, _______, _______, _______, _______, _______  \
)
};
