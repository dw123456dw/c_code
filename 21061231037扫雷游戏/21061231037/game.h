#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define easy_count 10;
void initboard(char board[ROWS][COLS],int rows,int cols,char set);
void displayboard(char board[ROWS][COLS],int row,int col);
void setmine(char board[ROWS][COLS], int row, int col);
void findmine(char mine[ROWS][COLS], char  show[ROWS][COLS],int row,int col);