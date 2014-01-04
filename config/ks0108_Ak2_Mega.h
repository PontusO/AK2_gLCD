/*
 * Ak2_ks0108_Mega.h - User specific configuration for Arduino GLCD library
 *
 * Use this file to set io pins
 *
 * The configuration below uses a single port for data 
 * This config is specific for the Ak2 Mega board from Sweet Peas
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
#define glcdCSEL1     22 // CS1 Bit
#define glcdCSEL2     23 // CS2 Bit
#define glcdRW        24 // R/W Bit
#define glcdDI        25 // D/I Bit
#define glcdEN        26 // EN Bit

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
#define glcdData0Pin    6
#define glcdData1Pin    7
#define glcdData2Pin    8
#define glcdData3Pin    9
#define glcdData4Pin    10
#define glcdData5Pin    11
#define glcdData6Pin    12
#define glcdData7Pin    13

// Reset Bit  - uncomment the next line if reset is connected to an output pin
//#define glcdRES         30    // Reset Bit

#endif //GLCD_PIN_CONFIG_H
