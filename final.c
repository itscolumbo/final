//final.c
//Bejewelled-type game using GFX Library and XMing
//Author: Kat Herring

#include "finalfn.h"

int main(void) { 
	int event;
	char c;
	struct Jewel jewels[8][8];

	gfx_open(800,600,"Final Project");
	drawBoard(jewels);

	while(c!='q') { //runs until user presses q to quit
		event = gfx_event_waiting();
		if(event) {
			gfx_clear();
			drawBoard(jewels);
			c = gfx_wait();
			event = 0;
		}
		gfx_flush();
	}

	return 0;
}
