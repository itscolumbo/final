//final.c
//Bejewelled-type game using GFX Library and XMing
//Note: our use of gfx5.c does NOT detect motion- ability removed from gfx_event_waiting
//Author: Kat Herring & Mara Staines

#include "finalfn.h"

int main(void) { 
	int event, score = 0, valid = 0, avalid, arr1[2], arr2[2];
	int * scorep = &score;
	char c, pc = 0;
	Jewel jewels[8][8];

	gfx_open(800,600,"Final Project");
	initBoard(jewels);
	valid = validBoard(jewels); //checks if board is valid (has 3-in-a-row already present and matches are possible)
	while(valid == 0) { 
		removeMatch(jewels); //finds a match on the board, gets rid of it
		valid = validBoard(jewels); //checks if board now valid
	} 

	while(c!='q') { //runs until user presses q to quit
		event = gfx_event_waiting();

		if(event) {
			c = gfx_wait();
			if (c == 1) {
				valid = clicktoJewel(arr1);
				printf("\nFirst click at: %d, %d", arr1[0], arr1[1]);
				if (pc == 1) { //pc is previous c
					valid = clicktoJewel(arr2);
					printf("\nSecond click at: %d, %d", arr2[0], arr2[1]);
					avalid = adj(arr1, arr2);
					if (valid && avalid) {
						swap(arr1[0], arr1[1], arr2[0], arr2[1], jewels);
						if(!checkMove(arr1[0], arr1[1], arr2[0], arr2[1], jewels)) {
							swap(arr1[0], arr1[1], arr2[0], arr2[1], jewels);
						}
					}
				}
			}
			gfx_clear();
			drawOutline();
			drawBoard(jewels);
			gfx_flush();
			usleep(1000000);
			event = 0;
		}
		gfx_flush();
		event = 0;
		if (valid) {
			pc = c;
		} else pc = 0;
		c = 0;
	}

	return 0;
}
