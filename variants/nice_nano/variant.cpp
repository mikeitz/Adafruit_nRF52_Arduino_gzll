/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] =
{
  8,
  6,
  17,
  20,
  22,
  24,
  32,
  43,
  36,
  38,

  9,
  15, // 11 // blue led
  0xff, // 12
  13, // POWER OFF
  43,
  45,
  0xff, // 16
  0xff, // 17
  47,
  2,
  29,
  31,

  33,
  34,
  39,
};

void initVariant()
{
  pinMode(PIN_LED1, OUTPUT);
  digitalWrite(PIN_LED1, 0);
}

