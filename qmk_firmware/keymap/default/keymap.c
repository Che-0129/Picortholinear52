#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

#define MHEN_FN  LT(1, JP_MHEN)
#define SPC_NUM  LT(2, KC_SPC)
#define SPC_SMBL LT(3, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_TAB,       JP_Q,        JP_W,        JP_E,        JP_R,        JP_T,        JP_Y,        JP_U,        JP_I,        JP_O,        JP_P,        JP_AT,       JP_LBRC,
        MO(4),        JP_A,        JP_S,        JP_D,        JP_F,        JP_G,        JP_H,        JP_J,        JP_K,        JP_L,        JP_SCLN,     JP_COLN,     JP_RBRC,
        KC_LSFT,      JP_Z,        JP_X,        JP_C,        JP_V,        JP_B,        JP_N,        JP_M,        JP_COMM,     JP_DOT,      JP_SLSH,     JP_BSLS,     KC_SYRQ,
        KC_LCTL,      KC_LGUI,     KC_LALT,     MHEN_FN,     SPC_NUM,     KC_SPC,      KC_SPC,      SPC_SMBL,    JP_HENK,     KC_BRID,     KC_VOLD,     KC_VOLU,     KC_BRIU
    ),
    [1] = LAYOUT(
        KC_NO,        KC_ESC,      KC_NO,       KC_END,      KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_BSPC,     KC_NO,       KC_NO,       KC_NO,
        KC_NO,        KC_HOME,     KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_LEFT,     KC_DOWN,     KC_UP,       KC_RGHT,     KC_NO,       KC_NO,       KC_NO,
        KC_NO,        KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_DEL,      KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,
        KC_NO,        KC_NO,       KC_NO,       KC_NO,       KC_ENT,      KC_ENT,      KC_ENT,      KC_ENT,      KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO
    ),
    [2] = LAYOUT(
        KC_NO,        KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,
        KC_NO,        JP_1,        JP_2,        JP_3,        JP_4,        JP_5,        JP_6,        JP_7,        JP_8,        JP_9,        JP_0,        KC_NO,       KC_NO,
        KC_NO,        KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,
        KC_NO,        KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO
    ),
    [3] = LAYOUT(
        KC_NO,        KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,
        KC_NO,        JP_EXLM,     JP_DQUO,     JP_HASH,     JP_DLR,      JP_PERC,     JP_AMPR,     JP_QUOT,     JP_LPRN,     JP_RPRN,     JP_MINS,     JP_CIRC,     JP_YEN,
        KC_NO,        KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,
        KC_NO,        KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO
    ),
    [4] = LAYOUT(
        KC_NO,        KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,
        KC_NO,        KC_F1,       KC_F2,       KC_F3,       KC_F4,       KC_F5,       KC_F6,       KC_F7,       KC_F8,       KC_F9,       KC_F10,      KC_F11,      KC_F12,
        KC_NO,        KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,
        KC_NO,        KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (layer_state_is(2) && record->event.pressed) {
        del_mods(MOD_MASK_SHIFT);
    }
    return true;
}
