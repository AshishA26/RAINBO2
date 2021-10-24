/*==============================================================================
	RAINBO2 (PIC12F1840) symbolic constants for main and other user functions.
==============================================================================*/

// PORT I/O device definitions

#define Q1         	RA0			// Phototransistor light sensor input
#define T1         	RA1			// Touch sensor (Cap Sense) input
#define U2      	RA2			// IR demodulator input
#define IR      	RA2			// IR demodulator input
#define S1			RA3			// Switch S1 input
#define H1      	RA4			// Expansion header input/output
#define N1			RA5			// Neopixel output

// A-D Converter input channel definitions

#define AN0			0b00000000	// Phototransistor Q1 A-D channel input (Ch0)
#define ANQ1		0b00000000	// Phototransistor Q1 A-D channel input (Ch0)
#define AN3			0b00001100	// H1 header A-D channel input (Ch3)
#define ANH1        0b00001100  // H1 header A-D channel input (Ch3)
#define ANTIM		0b01110100	// PICmicro on-die temperature indicator module
#define ANDAC       0b01111000  // DAC output
#define ANFVR       0b01111100  // Fixed voltage reference output

// Clock frequency for delay macros and simulation

#define _XTAL_FREQ	32000000	// Set clock frequency for time delays
#define FCY	_XTAL_FREQ/4        // Set processor instruction cycle time

// TODO - Add function prototypes for all functions in RAINBO.c here:

void init(void);                // Initialization function prototype