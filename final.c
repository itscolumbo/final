//final.c
//Bejewelled-type game using GFX Library and XMing
//Author: Kat Herring & Mara Staines

#include "finalfn.h"

int main(void) { 
	int event, score = 0;
	int * scorep = &score;
	char c;
	Jewel jewels[8][8];
	initBoard(jewels);
	//initializeJewel(jewel);
	gfx_open(800,600,"Final Project");

	while(c!='q') { //runs until user presses q to quit
		event = gfx_event_waiting();
		if(event) {
			gfx_clear();
			drawOutline();
			drawBoard(jewels);
			gfx_flush();
			c = gfx_wait();
			event = 0;
		}
		gfx_flush();
	}

	return 0;
}
