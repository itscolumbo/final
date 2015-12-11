#ifndef FINALFN_H_
#define FINALFN_H_

#include <stdbool.h>
#include <stdio.h>
#include "gfx5.h"


#endif //FINALFN_H_

 struct Jewel {
 	char type; //Ramzi-- 'r', Corey-- 'c'
 	int x1; //PIXEL location of jewel (square area)
 	int y1;
 	int x2;
 	int y2;
 };

void fillBoard(struct Jewel arr[8][8]); //fill array with random jewels
void initializeJewel(struct Jewel jewel); //assign Jewel its x1, y1, x2, y2;
void drawBoard(struct Jewel arr[8][8]); //draw board based on current array
void drawJewel(struct Jewel); // will contain functions for pixel art
void drawName(void);
void drawNameOutline(void);
void clicktoJewel(int arr[2]); //translate click into x, y coordinates of jewel
void userMove(int arr1[2], int arr2[2], struct Jewel arr[8][8]); //input the results of two clicktoJewel, perform swap and animations if valid
int checkMove(int x1, int y1, int x2, int y2, struct Jewel arr[8][8]); //check if move is valid
void swap(int x1, int y1, int x2, int y2, struct Jewel arr[8][8]); //perform swap on arr
void dropFill(struct Jewel arr[8][8]); //move jewels down into empty space, fill top spaces
void moveAni(int x1, int y1, int x2, int y2); //animate swap, remove, refilling
int moreMoves(struct Jewel arr[8][8]); //check if more moves exist
void shuffle(struct Jewel arr[8][8]); //shuffle if no new moves exist
void updateScore(int * scorep); //updates the current score (called in/after checkMove if move is found to be valid)
