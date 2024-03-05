// Written by: Jono Bateman
// Date Created: 5 March 2024
// Programmed in: STM32CubeIDE
// Target: STM32F051 or PC
// Description: Prac 3 MEC4126F


// DEFINES AND INCLUDES
#define STM32F051
#include "stm32f0xx.h"
#include "lcd_stm32f0.h"
#define HIGH 1
#define LOW 0


// GLOBAL VARIABLES

enum motion {forward=1, back=-1, right=2, left=3, stop=0};

struct robot_status{
	enum motion robot_motion;
	uint8_t ir_left;
	uint8_t ir_right;
};

struct robot_status robot_state;



// GLOBAL CONSTANTS


// FUNCTION DECLARATIONS
void main(void);


// MAIN FUNCTION
void main(void)
{


	while(1)
	{

	}
}

// FUNCTION DEFINITIONS


// END OF PROGRAM
