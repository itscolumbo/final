

#ifndef FINALFN_H_
#define FINALFN_H_

typedef struct Jewel {
 	int type; //0-5, 6 means empty
 	int x0; //PIXEL location of jewel (square area)
 	int y0;
}Jewel;

#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include "gfx5.h"




int clickJewel(int arr[2]);
void dropFill(Jewel arr[8][8], int *p); //move jewels down into empty space, fill top spaces
void moveDown(Jewel arr[8][8], int col);
void drawOutline(int *scorep); //draw board grid
void drawBoard(Jewel arr[8][8]); //draw board based on current array
void drawJewel(Jewel jewel); // will contain functions for pixel art
void drawName(void);
void drawNameOutline(void);
void removeMatch(Jewel arr[8][8]);
void initBoard(Jewel arr[8][8]); //sets up board for first time
void initJewel(Jewel* jewel, int x, int y); //assign Jewel its x1, y1, x2, y2;
int moreMoves(Jewel arr[8][8]); //check if more moves exist
void moveAni(int x1, int y1, int x2, int y2); //animate swap, remove, refilling
void shuffle(Jewel arr[8][8]); //shuffle if no new moves exist
void swap(int x1, int y1, int x2, int y2, Jewel arr[8][8]); //perform swap on arr 
void userMove(int arr1[2], int arr2[2], Jewel arr[8][8]); //input the results of two clicktoJewel, perform swap and animations if valid
int validBoard(Jewel arr[8][8]); //returns 0 if board is valid, 1 otherwise
int adj(int arr1[2], int arr2[2]); //returns 1 if squares are adjacent
int checkMove(int x1, int y1, int x2, int y2, Jewel arr[8][8]); //check if move is valid

#endif

