#ifndef FINALFN_H_
#define FINALFN_H_

#include <stdbool.h>
#include <stdio.h>
#include "gfx5.h"

typedef struct Jewel {
 	char type; //Ramzi-- 'r', Corey-- 'c'
 	int x1; //PIXEL location of jewel (square area)
 	int y1;
 	int x2;
 	int y2;
}Jewel;

void fillBoard(Jewel arr[8][8]); //fill array with random jewels
void initializeJewel(Jewel jewel); //assign Jewel its x1, y1, x2, y2;
void drawBoard(/*Jewel arr[8][8]*/); //draw board based on current array
void drawJewel(Jewel jewel); // will contain functions for pixel art
void drawName(void);
void drawNameOutline(void);
void clicktoJewel(int arr[2]); //translate click into x, y coordinates of jewel
void userMove(int arr1[2], int arr2[2], Jewel arr[8][8]); //input the results of two clicktoJewel, perform swap and animations if valid
int checkMove(int x1, int y1, int x2, int y2, Jewel arr[8][8]); //check if move is valid
void swap(int x1, int y1, int x2, int y2, Jewel arr[8][8]); //perform swap on arr
void dropFill(Jewel arr[8][8]); //move jewels down into empty space, fill top spaces
void moveAni(int x1, int y1, int x2, int y2); //animate swap, remove, refilling
int moreMoves(Jewel arr[8][8]); //check if more moves exist
void shuffle(Jewel arr[8][8]); //shuffle if no new moves exist
void updateScore(int * scorep); //updates the current score (called in/after checkMove if move is found to be valid)

#endif //FINALFN_H_

