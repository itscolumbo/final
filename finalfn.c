//finalfn.c
//Functions used in  program for final project CSE20211
//Author: Kat Herring & Mara Staines

#include "finalfn.h"

void drawBoard(struct Jewel arr[8][8]) {
	int i = 0;

	gfx_color(255,255,255);
	for(i=0;i<=400;i=i+50) {
		gfx_line(150+i,150,150+i,550);
		gfx_line(150,150+i,550,150+i);
	}

	//drawn Game Name: M
	for(i=0;i<100;i=i+20) {
		gfx_fill_rectangle(175,100-i,20,20);
	}
	gfx_fill_rectangle(185,30,20,20);
	gfx_fill_rectangle(195,40,20,20);
	gfx_fill_rectangle(205,50,20,20);
	gfx_fill_rectangle(215,40,20,20);
	gfx_fill_rectangle(225,30,20,20);
	gfx_fill_rectangle(235,20,20,20);

	for(i=0;i<100;i=i+20) {
		gfx_fill_rectangle(235,100-i,20,20);
	}
	//A
	gfx_color(222,24,57);
	gfx_fill_rectangle(255,100,20,20);
	
}
