//final.c
//Bejewelled-type game using GFX Library and XMing
//Note: our use of gfx5.c does NOT detect motion- ability removed from gfx_event_waiting & gfx_wait
//Author: Kat Herring & Mara Staines

#include "finalfn.h"

int main(void) { 
	int event, score = 0, valid = 0, avalid, firstClick[2], secondClick[2];
	int *scorep = &score;
	char c, pc = 0;
	Jewel jewels[8][8];

	gfx_open(900,600,"Final Project");
	initBoard(jewels);
	valid = validBoard(jewels); //checks if board is valid (has 3-in-a-row already present and matches are possible)
	while(valid == 0) { 
		removeMatch(jewels); //finds a match on the board, gets rid of it
		valid = validBoard(jewels); //checks if board now valid
	} 

	drawOutline(scorep);
	drawBoard(jewels);
	while(c!='q') { //runs until user presses q to quit
		event = gfx_event_waiting();
		
		if(event) {
			//printf("\n%d ", event);
			c = gfx_wait();
			if (c == 's') {
				initBoard(jewels);
				valid = validBoard(jewels); //checks if board is valid (has 3-in-a-row already present and matches are possible)
				while(valid == 0) { 
					removeMatch(jewels); //finds a match on the board, gets rid of it
					valid = validBoard(jewels); //checks if board now valid
				} 
				drawOutline(scorep);
				drawBoard(jewels);
				if (score > 200) {
					score -= 200;
				} else {
					score = 0;
				}
			}
			if (c==1) {
				if(event==4) {
					if(pc == 1 && valid) { //mouse clicked previously
						valid = clickJewel(secondClick);
						if(valid==1) {
							pc = 0;
							valid = 0;
							avalid = adj(firstClick, secondClick);
							if (avalid) {
								swap(firstClick[0], firstClick[1], secondClick[0], secondClick[1], jewels);
								//undo swap if move does not create a match
								if(validBoard(jewels)) {
									printf("\nNot a match");
									swap(firstClick[0], firstClick[1], secondClick[0], secondClick[1], jewels);
								} else {
									dropFill(jewels, scorep);
								}
							}
						}
					} else {
						valid = clickJewel(firstClick);
						if(valid==1) {
							pc = 1;
						}
					}
				}
				event = 0;
			}
			gfx_clear();
			drawOutline(scorep);
			drawBoard(jewels);
			
		}
		gfx_flush();
		if (score >= 3000) {
			gfx_color(255, 255, 255);
			int i;
			for (i = 0; i < 11; i++) {
				gfx_text(600, 350 + i * 15, "You WIN!");
				gfx_flush();
				usleep(1000000);
				c = 'q'; //ends game once user has won
			}
		}
	}
	return 0;
}
