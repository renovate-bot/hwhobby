/*
 * Copyright 2019 saehie.park@gmail.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __HWBOARD_GPIO_INTERFACE_H__
#define __HWBOARD_GPIO_INTERFACE_H__

#include <hwabc/standard.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Initialize gpio
 */
int hwboard_gpio_init(void);

/**
 * @brief Close gpio
 */
void hwboard_gpio_close(void);

/**
 * @brief Set port to High
 */
void hwboard_gpio_set(ioport_t port, ioport_t pin);

/**
 * @brief Clear port to Low
 */
void hwboard_gpio_clr(ioport_t port, ioport_t pin);

/**
 * @brief Configure port
 * 
 * @note  This may change. RPi for now.
 */
void hwboard_gpio_cfg(ioport_t port, ioport_t pin, uint8_t pud, uint8_t fsel);

#define HWBOARD_GPIO_PUD_OFF 0x00
#define HWBOARD_GPIO_PUD_DN 0x01
#define HWBOARD_GPIO_PUD_UP 0x02

#define HWBOARD_GPIO_FSEL_INP 0x00
#define HWBOARD_GPIO_FSEL_OUT 0x01

void hwboard_delay(int usec);
void hwboard_delay_ms(int msec);

#ifdef __cplusplus
}
#endif


#endif // __HWBOARD_GPIO_INTERFACE_H__