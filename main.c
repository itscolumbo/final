//final.c
//Bejewelled-type game using GFX Library and XMing
//Author: Kat Herring

#include "finalfn.h"

int main(void) { 
	int event;
	char c;

	gfx_open(800,600,"Final Project");
	drawBoard();

	while(c!='q') { //runs until user presses q to quit
		event = gfx_event_waiting();
		if(event) {
			gfx_clear();
			drawBoard();
			c = gfx_wait();
			event = 0;
		}
		gfx_flush();
	}

	return 0;
}
