/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * CREALITY v4.2.2 (STM32F103RE / STM32F103RC) board pin assignments
 */

#define BOARD_INFO_NAME      "Creality v4.2.2"
#define DEFAULT_MACHINE_NAME "Creality3D"

#define EMIT_CREALITY_422_WARNING

#include "pins_CREALITY_V4.h"

#define  I2C_BD_SDA_PIN    PC6   // Please change to the actual number which the SDA wire is connected to your mainboard 23/11/24
#define  I2C_BD_SCL_PIN    PB2   // Please change to the actual number which the SLK wire is connected to your mainboard 23/11/24
#define  I2C_BD_DELAY  20      // default value is 20, should be in the range [20,50]. 23/11/24