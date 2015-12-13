//final.c
//Bejewelled-type game using GFX Library and XMing
//Note: our use of gfx5.c does NOT detect motion- ability removed from gfx_event_waiting
//Author: Kat Herring & Mara Staines

#include "finalfn.h"

int main(void) { 
	int event, score = 0, valid = 0, avalid, firstClick[2], secondClick[2];
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
			//printf("\n%d ", event);
			c = gfx_wait();
			if (c==1) {
				if(event==4) {
					if(pc==1&&valid) { //mouse clicked previously
						valid = clicktoJewel(secondClick);
						if(valid==1) {
							//printf("\nSecond click at: %d, %d", secondClick[0], secondClick[1]);
							pc = 0;
							valid = 0;
							avalid = adj(firstClick, secondClick);
							if (avalid) {
								//printf("swapping");
								swap(firstClick[0], firstClick[1], secondClick[0], secondClick[1], jewels);
								//undo swap if move does not create a match
								if(!checkMove(firstClick[0], firstClick[1], secondClick[0], secondClick[1], jewels)) {
									swap(firstClick[0], firstClick[1], secondClick[0], secondClick[1], jewels);
								}
							}
						}
					} else {
						valid = clicktoJewel(firstClick);
						//printf("\nFirst click at: %d, %d", firstClick[0], firstClick[1]);
						if(valid==1) {
							pc = 1;
						}
					}
				}
				event = 0;
			}
			gfx_clear();
			drawOutline();
			drawBoard(jewels);
			//usleep(1000000);
			
		}
		gfx_flush();
	}

	return 0;
}
