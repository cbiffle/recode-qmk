#include "quantum.h"

void keyboard_pre_init_kb(void) {
    // Only the A/B rev have the ident pins floating. To prevent booting on a
    // later board that could have an arbitrarily different pinout, check this
    // and force DFU if required.
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

    if (float_mask != 0b11) {
        // One or both pins is not floating, this is not the right board!
        bootloader_jump();
    }
}


bool dip_switch_update_mask_kb(uint32_t state) {
    if (!dip_switch_update_mask_user(state)) { return false; }
    return true;
}
