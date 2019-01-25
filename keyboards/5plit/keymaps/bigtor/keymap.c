#include "5plit.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _______ KC_TRNS
#define _QWERTY 0
#define _NUMBER 1
#define _NAVIGA 2
#define _FUNCTI 3

enum custom_keycodes {
  NUMBER = LT(_NUMBER,KC_TAB),
  NAVIGA = LT(_NAVIGA,KC_ENT),
  FUNCTI = LT(_FUNCTI,KC_BSPC),
  CTLESC = CTL_T(KC_ESC), 
  ALTSPC = ALT_T(KC_SPC),
  OSMSFT = OSM(MOD_LSFT),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = KEYMAP ( \
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I,    KC_O,   KC_P, \
    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, \
    KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, \
    CTLESC, NUMBER, ALTSPC, FUNCTI, NAVIGA, OSMSFT \
),

[_NUMBER] = KEYMAP ( \
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, \
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, \
    KC_BSLS, KC_PIPE, KC_PLUS, KC_EQL,  KC_GRV,  KC_TILD, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, \
		      _______, _______, _______, KC_DEL,  _______, _______ \
),

[_NAVIGA] = KEYMAP ( \
    _______, _______, _______, _______, _______, KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END, \
    KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, KC_TAB,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BSPC, \
    _______, _______, _______, _______, _______, _______, KC_DQUO, KC_QUOT, KC_UNDS, KC_MINS, \
                      _______, _______, _______, KC_DEL,  _______, _______ \
),

[_FUNCTI] = KEYMAP ( \
    RESET,   _______, _______, KC_PSCR, _______, _______, KC_F9,   KC_F10,  KC_F11,  KC_F12, \
    KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, KC_TAB,  _______, KC_F5,   KC_F6,   KC_F7,   KC_F8, \
    KC_MPLY, KC_VOLD, KC_VOLU, KC_MNXT, _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4, \
                      _______, _______, _______, _______, _______, _______ \
)
};
