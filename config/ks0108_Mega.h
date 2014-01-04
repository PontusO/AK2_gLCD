/*
 * ks0108_Mega.h - User specific configuration for Arduino GLCD library
 *
 * Use this file to set io pins
 *
 * The configuration below uses a single port for data 
 * and has the same wiring as the mega config from the previous ks0108 library 
 *
*/

#ifndef GLCD_PIN_CONFIG_H
#define GLCD_PIN_CONFIG_H

/*
 * define name for pin configuration
 */
#define glcd_PinConfigName "ks0108-Mega"

/*********************************************************/
/*  Configuration for assigning LCD bits to Arduino Pins */
/*********************************************************/
/*
 * Pins used for Commands
 */
#define glcdCSEL1     22 // 33    // CS1 Bit
#define glcdCSEL2     23 // 34    // CS2 Bit
#define glcdRW        24 // 35    // R/W Bit
#define glcdDI        25 // 36    // D/I Bit 
#define glcdEN        26 // 37    // EN Bit

#if NBR_CHIP_SELECT_PINS > 2
#define glcdCSEL3     32   // third chip select if needed
#endif

#if NBR_CHIP_SELECT_PINS > 3
#define glcdCSEL4     31   // fourth chip select if needed
#endif

/*
 * Data pin definitions
 * This version uses pins 22-29 for LCD Data 
 */
#define glcdData0Pin    6 // 22
#define glcdData1Pin    7 // 23
#define glcdData2Pin    8 // 24
#define glcdData3Pin    9 // 25
#define glcdData4Pin    10 // 26
#define glcdData5Pin    11 // 27
#define glcdData6Pin    12 // 28
#define glcdData7Pin    13 // 29

// Reset Bit  - uncomment the next line if reset is connected to an output pin
//#define glcdRES         30    // Reset Bit

#endif //GLCD_PIN_CONFIG_H
