#include "quantum.h"

void keyboard_post_init_user(void) {
    // We need our indicators to be open-drain, not push-pull, so they can turn
    // all the way off.
    gpio_set_pin_output_open_drain(H0);
    gpio_set_pin_output_open_drain(H1);
    gpio_set_pin_output_open_drain(A8);
}
