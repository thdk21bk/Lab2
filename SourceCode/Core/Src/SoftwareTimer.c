/*
 * SoftwareTimer.c
 *
 *  Created on: Oct 6, 2023
 *      Author: ASUS
 */
#include "SoftwareTimer.h"

int timer1_counter = 0;
int timer1_flag = 0;

void setTimer1(int duration){
	timer1_counter = duration;
	timer1_flag = 0;
}
void timerRun(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter <= 0){
			timer1_flag = 1;
		}
	}
}


