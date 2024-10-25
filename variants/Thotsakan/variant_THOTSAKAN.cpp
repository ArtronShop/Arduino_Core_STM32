/*
 *******************************************************************************
 * Copyright (c) 2020, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#if defined(ARDUINO_THOTSAKAN)
#include "pins_arduino.h"

// Digital PinName array
const PinName digitalPin[] = {
  PB_11,  // D0
  PB_12,  // D1
  PB_13,  // D2
  PB_14,  // D3
  PB_15,  // D4
  PC_10,  // D5
  PC_11,  // D6
  PB_3,   // D7
  PB_4,   // D8
  PB_5,   // D9
  PC_13,  // D10
  PC_0,   // D11/SV1
  PC_1,   // D12/SV2
  PC_2,   // D13/SV3
  PC_3,   // D14/SV4
  PA_0,   // D15/A0
  PA_1,   // D16/A1
  PA_2,   // D17/A2
  PA_3,   // D18/A3
  PA_4,   // D19/A4
  PA_5,   // D20/A5
  PA_6,   // D21/A6
  PA_7,   // D22/A7
  PC_4,   // D23/A8
  PC_5,   // D24/A9
  PB_2,   // D25/A10/KNOB/SW_OK
  PA_8,   // D26
  PA_9,   // D27/TX0
  PA_10,  // D28/RX0
  PA_11,  // D29/M1_PWM
  PA_12,  // D30/M2_PWM
  PA_13,  // D31
  PA_14,  // D32
  PA_15,  // D33
  PB_0,   // D34/SV5
  PB_1,   // D35/SV6
  PB_6,   // D36
  PB_7,   // D37
  PB_8,   // D38
  PB_9,   // D39
  PB_10,  // D40
  PC_6,   // D41/M1_INA
  PC_7,   // D42/M1_INB
  PC_8,   // D43/M2_INA
  PC_9,   // D44/M2_INB
  PC_12,  // D45
  PC_14,  // D46
  PC_15,  // D47
  PD_2,   // D48
  PF_0,   // D49
  PF_1,   // D50
  PG_10   // D51
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  15, // A0,  PA0
  16, // A1,  PA1
  17, // A2,  PA2
  18, // A3,  PA3
  19, // A4,  PA4
  20, // A5,  PA5
  21, // A6,  PA6
  22, // A7,  PA7
  23, // A8,  PC4
  24, // A9,  PC5
  25, // A10, PB2
};

#endif /* ARDUINO_THOTSAKAN_* */
