#include "quantum.h"

void keyboard_pre_init_kb(void) {
    // The rev A/B and C boards have enough electrical incompatibilities that
    // it's dangerous to run firmware intended for one on the other. Check the
    // ident pins and force back into the bootloader if the rev is wrong.
    gpio_set_pin_input_high(A9);
    gpio_set_pin_input_high(A10);
    wait_ms(1);
    bool a9_pulled_high = gpio_read_pin(A9);
    bool a10_pulled_high = gpio_read_pin(A10);

    gpio_set_pin_input_low(A9);
    gpio_set_pin_input_low(A10);
    wait_ms(1);
    bool a9_pulled_low = !gpio_read_pin(A9);
    bool a10_pulled_low = !gpio_read_pin(A10);

    uint8_t float_mask = 0;
    if (a9_pulled_high & a9_pulled_low) float_mask |= 1;
    if (a10_pulled_high & a10_pulled_low) float_mask |= 2;

    uint8_t code = 0;
    if (a9_pulled_high && !a9_pulled_low) code |= 1;
    if (a10_pulled_high && !a10_pulled_low) code |= 2;

    if (float_mask != 0) {
        // This is a rev A/B board.
        bootloader_jump();
    } else {
        switch (code) {
            case 0b00:
                // C rev, we're good
                break;
            default:
                // Unknown future rev, we're not good
                bootloader_jump();
                break;
        }
    }
}

bool dip_switch_update_mask_kb(uint32_t state) {
    if (!dip_switch_update_mask_user(state)) { return false; }
    return true;
}
