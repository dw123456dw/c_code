#define _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void initboard(char board[ROW][COL], int row, int col);

void Displayboard(char board[ROW][COL],int row,int col);

void Playermove(char board[ROW][COL],int row,int col);

void Computermove(char board[ROW][COL],int row,int col);

char IsWin(char board[ROW][COL],int row,int col);

