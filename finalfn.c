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

	//draws Game name
	drawName();
	drawNameOutline();
}
void drawName(void) {
	int i = 0;
	//drawn Game Name: M & -
	gfx_color(255,255,255);
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
	gfx_fill_rectangle(375,70,15,15);
	gfx_fill_rectangle(390,70,15,15);

	//A
	gfx_color(222,24,57);
	for(i=0;i<3;i++) {
		gfx_fill_rectangle(255+10*i,70,10,10);
		gfx_fill_rectangle(255+10*i,110,10,10);
	}
	for(i=0;i<5;i++) {
		gfx_fill_rectangle(285,70+10*i,10,10);
	}
	gfx_fill_rectangle(255,100,10,10);
	gfx_fill_rectangle(255,90,10,10);
	gfx_fill_rectangle(265,90,10,10);
	gfx_fill_rectangle(275,90,10,10);

	//T
	gfx_color(74, 57, 189);
	for(i=0;i<5;i++) {
		gfx_fill_rectangle(275+10*i,60,10,10);
	}
	for(i=0;i<8;i++) {
		gfx_fill_rectangle(295,40+10*i,10,10);
	}
	//C
	gfx_color(57,189,107);
	for(i=0;i<3;i++) {
		gfx_fill_rectangle(305+10*i,70,10,10);
		gfx_fill_rectangle(305+10*i,110,10,10);
	}
	for(i=0;i<5;i++) {
		gfx_fill_rectangle(305,70+10*i,10,10);
	}
	//H
	gfx_color(189,57,139);
	for(i=0;i<8;i++) {
		gfx_fill_rectangle(335,40+10*i,10,10);
	}
	for(i=0;i<3;i++) {
		gfx_fill_rectangle(335+10*i,80,10,10);
		gfx_fill_rectangle(365,80+10*i,10,10);
	}
	gfx_fill_rectangle(365,110,10,10);

	//3
	gfx_color(188,115,222);
	for(i=0;i<100;i=i+20) {
		gfx_fill_rectangle(425,100-i,20,20);
	}	
	gfx_fill_rectangle(405,20,20,20);
	gfx_fill_rectangle(405,100,20,20);
	gfx_fill_rectangle(405,60,20,20);
}
void drawNameOutline(void) {
	int i = 0;


	//A
	gfx_color(176,0,38);
	for(i=0;i<3;i++) {
		gfx_rectangle(255+10*i,70,10,10);
		gfx_rectangle(255+10*i,110,10,10);
	}
	for(i=0;i<5;i++) {
		gfx_rectangle(285,70+10*i,10,10);
	}
	gfx_rectangle(255,100,10,10);
	gfx_rectangle(255,90,10,10);
	gfx_rectangle(265,90,10,10);
	gfx_rectangle(275,90,10,10);

	//T
	gfx_color(28,74,107);
	for(i=0;i<5;i++) {
		gfx_rectangle(275+10*i,60,10,10);
	}
	for(i=0;i<8;i++) {
		gfx_rectangle(295,40+10*i,10,10);
	}
	//C
	gfx_color(16,107,48);
	for(i=0;i<3;i++) {
		gfx_rectangle(305+10*i,70,10,10);
		gfx_rectangle(305+10*i,110,10,10);
	}
	for(i=0;i<5;i++) {
		gfx_rectangle(305,70+10*i,10,10);
	}
	//H
	gfx_color(173,43,82);
	for(i=0;i<8;i++) {
		gfx_rectangle(335,40+10*i,10,10);
	}
	for(i=0;i<3;i++) {
		gfx_rectangle(335+10*i,80,10,10);
		gfx_rectangle(365,80+10*i,10,10);
	}
	gfx_rectangle(365,110,10,10);

	//3
	gfx_color(91,56,107);
	for(i=0;i<100;i=i+20) {
		gfx_rectangle(425,100-i,20,20);
	}	
	gfx_rectangle(405,20,20,20);
	gfx_rectangle(405,100,20,20);
	gfx_rectangle(405,60,20,20);

		//drawn Game Name: M & -
	gfx_color(225,225,225);
	for(i=0;i<100;i=i+20) {
		gfx_rectangle(175,100-i,20,20);
	}
	gfx_rectangle(185,30,20,20);
	gfx_rectangle(195,40,20,20);
	gfx_rectangle(205,50,20,20);
	gfx_rectangle(215,40,20,20);
	gfx_rectangle(225,30,20,20);
	gfx_rectangle(235,20,20,20);

	for(i=0;i<100;i=i+20) {
		gfx_rectangle(235,100-i,20,20);
	}
	gfx_rectangle(375,70,15,15);
	gfx_rectangle(390,70,15,15);
}