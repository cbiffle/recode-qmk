// Copyright 2024 Cliff L. Biffle (@cbiffle)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define DEF_SERIAL_NUMBER "314159265358"

#ifndef SERIAL_NUMBER
#define SERIAL_NUMBER DEF_SERIAL_NUMBER
#endif

//#define WEAR_LEVELING_ELF_FIRST_SECTOR (60)
#define STM32_FLASH_SECTORS_PER_BANK (64)

#define BACKLIGHT_PWM_DRIVER PWMD1
#define BACKLIGHT_PWM_CHANNEL 1
#define BACKLIGHT_PAL_MODE 1
