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
#include <stdio.h>


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
	init_LCD();
	unsigned char buffer[16];

	// initial conditions
	robot_state.robot_motion = forward;
	robot_state.ir_left = HIGH;
	robot_state.ir_right = HIGH;

	while(robot_state.robot_motion != stop)
	{
		sprintf(buffer, "%d", robot_state.robot_motion);
		lcd_putstring(buffer);
		delay(2000000/4); // reason for division by 4 was done by inspection
		lcd_command(CLEAR);
		delay(500000/4);
		sprintf(buffer, "%d", robot_state.ir_left);
		lcd_putstring(buffer);
		lcd_command(LINE_TWO);
		sprintf(buffer, "%d", robot_state.ir_right);
		lcd_putstring(buffer);
		delay(2000000/4);
		lcd_command(CLEAR);

	}
}

// FUNCTION DEFINITIONS


// END OF PROGRAM
