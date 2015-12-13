//final.c
//Bejewelled-type game using GFX Library and XMing
//Note: our use of gfx5.c does NOT detect motion- ability removed from gfx_event_waiting
//Author: Kat Herring & Mara Staines

#include "finalfn.h"

int main(void) { 
	int event, score = 0, valid = 0;
	int * scorep = &score;
	char c;
	Jewel jewels[8][8];

	gfx_open(800,600,"Final Project");
	initBoard(jewels);
	valid = validBoard(jewels); //checks if board is valid (has 3-in-a-row already present and matches are possible)
	while(valid==1) { 
		removeMatch(jewels); //finds a match on the board, gets rid of it
		valid = validBoard(jewels); //checks if board now valid
	} 

	while(c!='q') { //runs until user presses q to quit
		event = gfx_event_waiting();
		if(event) {
			gfx_clear();
			drawOutline();
			drawBoard(jewels);
			gfx_flush();
			c = gfx_wait();
			usleep(1000000);
			event = 0;
		}
		gfx_flush();
	}

	return 0;
}
