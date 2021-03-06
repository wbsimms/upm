/*
 * Author: Yevgeniy Kiveisha <yevgeniy.kiveisha@intel.com>
 * Copyright (c) 2014 Intel Corporation.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#pragma once

#include <string>
#include <mraa/aio.h>
#include <mraa/gpio.h>
#include <mraa/spi.h>

#include <lib_aci.h>
#include <aci_setup.h>

/**
 * @brief nrf8001 Bluetooth Low Energy library
 * @defgroup nrf8001 libupm-nrf8001
 */

/**
 * @brief C++ API for the Nordic Semiconductor NRF8001 Bluetooth Low Energy
 *
 * This file defines the NRF8001 C++ interface for lib-nrf8001.
 * Most of the interaction with this device is done using the ACI classes
 * provided by Nordic Semiconductor. Please see our examples for further
 * details.
 *
 * @ingroup nrf8001 spi
 * @snippet nrf8001-helloworld.cxx Interesting
 * @snippet nrf8001-broadcast.cxx Interesting
 */

void init_local_interfaces (aci_state_t* aci, uint8_t reqn, uint8_t rdyn, uint8_t rst);
void close_local_interfaces (aci_state_t* aci);
