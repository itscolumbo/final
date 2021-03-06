//finalfn.c
//Functions used in  program for final project CSE20211
//Author: Kat Herring & Mara Staines

#include "finalfn.h"

int adj(int arr1[2], int arr2[2]) { //check if squares user clocked on are adjacent to each other
	if (arr1[1] == arr2[1]) {
		if (arr1[0] == arr2[0]) {
			return 0;
		} else if (arr1[0] - arr2[0] == 1 || arr2[0] - arr1[0] == 1) {
			return 1;
		}
	} else if (arr1[0] == arr2[0]) {
		if (arr1[1] == arr2[1]) {
			return 0;
		} else if (arr1[1] - arr2[1] == 1 || arr2[1] - arr1[1] == 1) {
			return 1;
		}
	}
	return 0;
}
int checkMove(int x1, int y1, int x2, int y2, Jewel arr[8][8]) { //checks if move is valid
	if (validBoard(arr)) {
		return 0;
	}
	return 1;
}
int clickJewel(int arr[2]) { //returns which square on the map they clicked on (if valid)
	int x = gfx_xpos();
	int y = gfx_ypos();
	int temp1, temp2;
	temp1 = (x - 150) / 50;
	temp2 = (y - 150) / 50;
	if (temp1 >= 0 && temp1 < 8) {
		if (temp2 >= 0 && temp2 < 8) {
			arr[0] = (x - 150) / 50;
			arr[1] = (y - 150) / 50;
			return 1;
		}
	}
	return 0;
}
void drawBoard(Jewel arr[8][8]) {
	int i, j;
	for (i = 0; i < 8; i++) {
		for(j = 0; j < 8; j++) {
			drawJewel(arr[i][j]);
		}
	}
}
void drawJewel(Jewel jewel) {
	typedef struct pixel {
	int arr[3];
	} pixel;

	//pixel Rarr[16][16];
	//pixel Carr[16][16];
	//pixel Tarr[16][16];
	//pixel Farr[16][16];
	//pixel Warr[16][16];
	//pixel Marr[16][16];

	//two letter color-code is assigned to each RGB value
	pixel lb = {{145, 113, 55}};
	pixel gr = {{155, 231, 71}};
	pixel pe = {{255, 204, 153}};
	pixel pi = {{255, 125, 125}};
	pixel br = {{88, 59, 0}};
	pixel bu = {{42, 28, 0}};
	pixel wh = {{255, 255, 255}};
	pixel ub = {{217, 225, 242}};
	pixel sb = {{180, 198, 231}};
	pixel mb = {{142, 169, 219}};
	pixel db = {{48, 84, 150}};
	pixel na = {{32, 55, 100}};
	pixel bl = {{0, 0, 0}};
	pixel vg = {{22, 22, 22}};
	pixel dg = {{56, 56, 56}};
	pixel mg = {{113, 113, 113}};
	pixel lg = {{170, 170, 170}};
	pixel ye = {{255, 255, 102}};
	pixel pu = {{204, 153, 255}};;


	pixel Rarr[16][16] = { //ramsey
	gr,gr,lb,lb,lb,lb,lb,lb,lb,lb,lb,lb,lb,lb,gr,gr,
	gr,lb,lb,lb,lb,lb,lb,lb,lb,lb,lb,lb,lb,lb,lb,gr,
	lb,lb,pe,lb,lb,lb,lb,lb,lb,lb,lb,lb,pe,pe,lb,gr,
	lb,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,lb,lb,
	lb,lb,pe,pe,lb,lb,pe,pe,pe,pe,lb,pe,pe,pe,lb,lb,
	lb,lb,lb,lb,pe,pe,lb,pe,pe,lb,pe,lb,lb,pe,lb,lb,
	lb,lb,pe,pe,wh,pe,pe,br,pe,pe,wh,pe,pe,lb,lb,lb,
	pe,lb,pe,wh,br,wh,pe,br,pe,wh,br,wh,wh,pe,lb,pe,
	pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,
	pe,pe,pe,pe,pe,pe,br,pe,pe,br,pe,pe,pe,pe,pe,pe,
	pe,pe,pe,pe,pe,pe,pe,br,br,pe,pe,pe,pe,pe,pe,pe,
	gr,gr,pe,pe,pi,pe,pe,pe,pe,pe,pe,pi,pe,pe,gr,gr,
	gr,gr,pe,pe,pe,wh,wh,wh,wh,wh,wh,pe,pe,pe,gr,gr,
	gr,gr,gr,pe,pe,pe,pi,pi,pi,pi,pe,pe,pe,gr,gr,gr,
	gr,gr,gr,gr,pe,pe,pe,pe,pe,pe,pe,pe,gr,gr,gr,gr,
	gr,gr,gr,gr,gr,pe,pe,pe,pe,pe,pe,gr,gr,gr,gr,gr,
	};

	pixel Carr[16][16] = { //corey
	pu,pu,br,br,br,br,br,br,br,br,br,br,br,pu,pu,pu,
	pu,br,br,br,br,br,br,br,br,br,br,br,br,br,pu,pu,
	br,br,br,br,br,br,br,br,br,br,br,br,br,br,br,pu,
	br,br,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,br,br,br,
	br,br,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,br,br,br,
	br,br,pe,lb,lb,lb,pe,pe,lb,lb,lb,lb,pe,br,br,br,
	br,br,lb,pe,pe,pe,pe,bu,pe,pe,pe,pe,lb,pe,br,br,
	pe,br,pe,wh,br,wh,pe,bu,pe,wh,br,wh,pe,pe,br,pe,
	pe,br,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,br,pe,
	pe,pe,pe,pe,pe,pe,bu,pe,pe,bu,pe,pe,pe,pe,pe,pe,
	pe,pe,br,pe,pe,pe,pe,bu,bu,pe,pe,pe,pe,br,pe,pe,
	pu,br,pe,pe,pe,br,br,br,br,br,br,pe,pe,pe,br,pu,
	pu,br,br,pe,br,br,pi,pi,pi,pi,br,br,pe,br,br,pu,
	br,br,br,br,br,br,br,br,br,br,br,br,br,br,br,pu,
	br,br,br,br,br,br,br,br,br,br,br,br,br,br,br,br,
	br,br,br,br,br,br,br,br,br,br,br,br,br,br,br,br,
	};

	pixel Tarr[16][16] = { //tijana
	pi,pi,bl,bl,bl,bl,bl,bl,bl,bl,bl,bl,bl,pi,pi,pi,
	pi,bl,bl,bl,bl,bl,bl,bl,bl,bl,bl,bl,bl,bl,bl,pi,
	bl,bl,bl,bl,bl,pe,pe,bl,bl,bl,bl,bl,bl,bl,bl,pi,
	bl,bl,bl,pe,pe,pe,pe,pe,pe,pe,bl,bl,bl,bl,bl,bl,
	bl,bl,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,bl,bl,bl,bl,
	bl,bl,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,bl,bl,bl,
	bl,bl,pe,br,br,br,pe,pe,pe,br,br,br,br,pe,bl,bl,
	bl,bl,br,pe,wh,pe,pe,bu,pe,pe,wh,pe,pe,br,bl,bl,
	bl,bl,pe,wh,br,wh,pe,br,pe,wh,br,wh,wh,pe,bl,bl,
	bl,bl,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,pe,bl,bl,
	bl,bl,bl,pe,pe,pe,br,pe,bu,pe,pe,pe,pe,bl,bl,bl,
	bl,bl,bl,pe,pe,pe,pe,br,pe,pe,pe,pe,pe,bl,bl,bl,
	bl,bl,bl,pe,pe,pe,pe,pe,pe,pi,pe,pe,pe,bl,bl,bl,
	bl,bl,bl,bl,pe,pe,pi,pi,pi,pe,pe,pe,bl,bl,bl,bl,
	bl,bl,bl,bl,bl,pe,pe,pe,pe,pe,pe,bl,bl,bl,bl,bl,
	bl,bl,bl,bl,bl,bl,pe,pe,pe,pe,bl,bl,bl,bl,bl,bl,
	};

	pixel Farr[16][16] = { //floppy
	sb,sb,sb,mb,mb,mb,mb,mb,db,db,db,db,db,db,db,db,
	mb,ub,db,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,db,na,db,
	mb,ub,db,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,db,mb,db,
	mb,ub,db,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,db,mb,db,
	mb,ub,db,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,db,mb,db,
	mb,ub,db,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,db,mb,db,
	mb,ub,db,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,db,mb,db,
	mb,ub,db,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,db,mb,db,
	mb,ub,ub,db,db,db,db,db,db,db,db,db,db,sb,mb,na,
	mb,ub,ub,sb,sb,sb,sb,sb,sb,sb,sb,sb,mb,mb,mb,na,
	mb,ub,sb,mb,dg,dg,dg,dg,dg,dg,dg,dg,mb,mb,mb,na,
	db,ub,sb,mb,dg,bl,vg,vg,wh,wh,wh,dg,mb,mb,mb,na,
	db,ub,sb,mb,dg,vg,vg,dg,wh,wh,wh,dg,mb,mb,db,na,
	db,ub,sb,mb,dg,vg,dg,dg,wh,wh,wh,dg,mb,db,db,na,
	db,ub,sb,mb,dg,lg,lg,lg,lg,lg,lg,dg,db,db,db,na,
	ub,db,db,db,na,na,na,na,na,na,na,na,na,na,na,na,
	};

	pixel Warr[16][16] = { //window
	mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,
	mg,db,db,db,db,db,db,db,db,db,db,db,db,db,db,mg,
	mg,db,db,db,db,db,db,db,db,wh,db,wh,db,wh,db,mg,
	mg,db,db,db,db,db,db,db,db,db,db,db,db,db,db,mg,
	mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,
	mg,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,mg,
	mg,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,mg,
	mg,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,mg,
	mg,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,mg,
	mg,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,mg,
	mg,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,mg,
	mg,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,mg,
	mg,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,mg,
	mg,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,mg,
	mg,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,wh,mg,
	mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,
	};

	pixel Marr[16][16] = { //monitor
	ye,ye,ye,ye,mg,mg,mg,mg,mg,mg,mg,mg,lg,ye,ye,ye,
	ye,ye,ye,mg,lg,lg,lg,lg,lg,lg,lg,wh,mg,bl,ye,ye,
	ye,ye,mg,wh,wh,wh,wh,wh,wh,wh,wh,mg,mg,bl,ye,ye,
	ye,ye,mg,wh,na,na,na,na,na,na,wh,mg,mg,bl,ye,ye,
	ye,ye,mg,wh,na,na,na,na,na,na,wh,mg,mg,bl,ye,ye,
	ye,ye,mg,wh,na,wh,wh,na,na,na,wh,mg,mg,bl,ye,ye,
	ye,ye,mg,wh,na,na,na,wh,wh,na,wh,mg,mg,bl,ye,ye,
	ye,ye,mg,wh,na,na,na,na,na,na,wh,mg,mg,bl,ye,ye,
	ye,ye,mg,wh,na,na,na,na,na,na,wh,mg,mg,bl,ye,ye,
	ye,ye,mg,wh,wh,wh,wh,wh,wh,wh,wh,mg,bl,lg,ye,ye,
	ye,ye,mg,mg,mg,mg,mg,mg,mg,mg,mg,mg,lg,mg,bl,ye,
	ye,mg,lg,lg,lg,lg,lg,lg,lg,lg,lg,lg,mg,mg,bl,ye,
	ye,mg,lg,bl,lg,lg,bl,bl,bl,bl,bl,lg,mg,mg,bl,ye,
	ye,mg,lg,lg,lg,lg,lg,lg,lg,lg,lg,lg,mg,mg,bl,ye,
	ye,mg,lg,lg,lg,lg,lg,lg,lg,lg,lg,lg,mg,bl,ye,ye,
	ye,ye,bl,bl,bl,bl,bl,bl,bl,bl,bl,bl,bl,ye,ye,ye,
	};

	pixel pixelMap[16][16];
	int i, j, p, q, x, y;
	x = jewel.x0;
	y = jewel.y0;
	switch (jewel.type) {
		case 0 : //ramsey
			for (i = 0; i < 16; i++) {
				for(j = 0; j < 16; j++) {
					pixelMap[i][j] = Rarr[i][j];
				}
			}
			break;
		case 1 : //corey
			for (i = 0; i < 16; i++) {
				for(j = 0; j < 16; j++) {
					pixelMap[i][j] = Carr[i][j];
				}
			}
			break;
		case 2 : //tijana
			for (i = 0; i < 16; i++) {
				for(j = 0; j < 16; j++) {
					pixelMap[i][j] = Tarr[i][j];
				}
			}
			break;
		case 3 : //floppy
			for (i = 0; i < 16; i++) {
				for(j = 0; j < 16; j++) {
					pixelMap[i][j] = Farr[i][j];
				}
			}
			break;
		case 4 : //window
			for (i = 0; i < 16; i++) {
				for(j = 0; j < 16; j++) {
					pixelMap[i][j] = Warr[i][j];
				}
			}
			break;
		case 5 : //monitor
			for (i = 0; i < 16; i++) {
				for(j = 0; j < 16; j++) {
					pixelMap[i][j] = Marr[i][j];
				}
			}
			break;
		case 6 : //match was made
			for (i = 0; i < 16; i++) {
				for(j = 0; j < 16; j++) {
					pixelMap[i][j] = ye;
				}
			}
			break;
		case 7 : //blank square
			for (i = 0; i < 16; i++) {
				for(j = 0; j < 16; j++) {
					pixelMap[i][j] = bl;
				}
			}
			break;
		default :
			printf("\nDraw failed, case is %d", jewel.type);
	}
	for (i = 0; i < 16; i++) { //uses the color map (store above and chosen by case structure) to print correct picture
		for(j = 0; j < 16; j++) {
			gfx_color(pixelMap[i][j].arr[0], pixelMap[i][j].arr[1], pixelMap[i][j].arr[2]);
			for(p = 0; p < 3; p++) { //each rgb color square is three pixels large
				for(q = 0; q < 3; q++) {
					gfx_point(x + p, y + q);
				}
			}
			x += 3;
		}
		y += 3; 
		x = jewel.x0;
	}	
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
void drawOutline(int *scorep) {
	int i = 0;

	gfx_color(255,255,255);

	for(i=0;i<=400;i=i+400) { //draws border around game board
		gfx_line(150+i,150,150+i,550);
		gfx_line(150,150+i,550,150+i);
	}

	//current score box
	char buffer[15];
	snprintf(buffer, 14, "Score: %d", *scorep);
	gfx_text(600,200, buffer);

	gfx_text(600, 250, "Press q to quit");
	gfx_text(600, 300, "Press s to shuffle board (-200 points)");
	gfx_text(460, 75, "Click on two adjacent tiles to swap them.");
	gfx_text(460, 90, "Score 3000 Points!");
	gfx_text(460, 120, "Featuring Ramzi, Corey, and Tijana");

	drawName();
	drawNameOutline();

}
void dropFill(Jewel arr[8][8], int *scorep) { //animation to fill in matches
	int i, j, count = 0, fill;
	for (i = 0; i < 8; i++) {
		for(j = 0; j < 8; j++) {
			if(j<6) {
				 if(arr[i][j].type==arr[i][j+1].type && arr[i][j+2].type==arr[i][j+1].type) { //three in a row found
				 	arr[i][j].type = 6; //set to yellow empty square
				 	arr[i][j+1].type = 6;
				 	arr[i][j+2].type = 6;
				 	*scorep += 50; //updates sure if match made
				}
			}
			if(i<6) {
				if(arr[i][j].type==arr[i+1][j].type && arr[i+2][j].type==arr[i+1][j].type) {
		 			arr[i][j].type = 6; //set to yellow empty square
		 			arr[i+1][j].type = 6;
		 			arr[i+2][j].type = 6;
		 			*scorep += 50; //updates sure if match made
				}
				
			}
		}
	}
	gfx_clear();
	drawOutline(scorep);
	drawBoard(arr);
	usleep(600000);

	for(j = 0; j < 8; j++) {
		moveDown(arr, j); //adjusts board
	}
	
	Jewel *je;
	for (i = 0; i < 8; i++) {
		for(j = 0; j < 8; j++) {
			if (arr[i][j].type == 6) {
				je = &arr[i][j];
				je->type = rand() % 6; //adds new randomized jewel to board in blank spaces
			}
		}
	}
	gfx_clear();
	drawOutline(scorep);
	drawBoard(arr);
	usleep(700000);
	if (!validBoard(arr)) {
		dropFill(arr, scorep);
	}
	else {
		return;
	}
}
void initBoard(Jewel arr[8][8]) {
	int valid = 0;
	srand(time(NULL)); //initialize random number generator
	int i, j, x = 151, y = 151;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			initJewel(&arr[i][j], x, y);
			y += 50;
		}
		x += 50;
		y -= 400; //resets y position to zero
	}
}
void initJewel(Jewel *jewel, int x, int y) { //fills randomized array of jewels
	int ty = rand() % 6; //randomly generates type
	jewel->type = ty;
	jewel->x0 = x;
	jewel->y0 = y;
}
void moveDown(Jewel arr[8][8], int col) {
	int i, j, count = 0;
	Jewel *je;
	//moves jewels down on board until all blank spaces filled
	for(i = 7; i >=0; i--) {
		if(arr[col][i].type == 6) {
			count++;
			if (i - count < 0) {
				break;
			}
			for(j = i; j >= count; j--) {
				je = &arr[col][j];
				je->type = arr[col][j - count].type;
			}
		}
	}
}
void removeMatch(Jewel arr[8][8]) {
	int i, j;

	for (i = 0; i < 8; i++) {
		for(j = 0; j < 8; j++) {
			if(j<6) {
				 if(arr[i][j].type == arr[i][j+1].type) {
				 	if(arr[i][j+1].type==arr[i][j+2].type) { //three in a row found
					 	if(arr[i][j].type > 0) {
					 		arr[i][j].type--;
					 	} else {
					 		arr[i][j].type = 5; //ensure stays within boundary of array
					 	}
					} 
				}
			} 
			if(i<6) {
				if(arr[i][j].type==arr[i+1][j].type) {
					if(arr[i+1][j].type==arr[i+2][j].type) {
					 	if(arr[i+1][j].type > 0) {
					 		arr[i][j].type--; //sets type to a different one
					 	} else {
					 		arr[i][j].type = 5; //ensure stays within boundary of array
					 	}
					}	
				}
			}
		}
	}
}
void swap(int x1, int y1, int x2, int y2, Jewel arr[8][8]) { //swaps two jewels
	int temp;

	temp = arr[x1][y1].type;
	arr[x1][y1].type = arr[x2][y2].type;
	arr[x2][y2].type = temp;
}
int validBoard(Jewel arr[8][8]) {
	int valid = 1, i=0, j=0;
	//checks if board already contains matches
	
	for (i = 0; i < 8; i++) {
		for(j = 0; j < 8; j++) {
			if(j<6) {
				 if(arr[i][j].type==arr[i][j+1].type) {
				 	if(arr[i][j+2].type==arr[i][j+1].type) { //three in a row found
				 		valid = 0;
					} 
				}
			}
			if(i<6) {
				if(arr[i][j].type==arr[i+1][j].type) { //three in a row found
					if(arr[i+2][j].type==arr[i+1][j].type) {
			 			valid = 0;
					}
				}
				
			}
		}
	}
	return valid;
}