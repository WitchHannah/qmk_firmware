#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4b50 //KP = Kevin Pratt
#define PRODUCT_ID      0x4e42 //NB = Numbyboi
#define DEVICE_VER      0x0001
#define MANUFACTURER    KPWorks
#define PRODUCT         Numbeboi
#define DESCRIPTION     A Pro Micro-Powered 5x4 numpad

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { 15, 14, 16, 8, 9 }
#define MATRIX_COL_PINS { 21, 20, 19, 18 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

