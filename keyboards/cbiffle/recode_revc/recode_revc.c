#include "quantum.h"

bool dip_switch_update_mask_kb(uint32_t state) {
    if (!dip_switch_update_mask_user(state)) { return false; }
    return true;
}
