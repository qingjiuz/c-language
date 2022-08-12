#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define SetEasy 10

//初始化数组
void init_board(char(*bp)[COLS], int rows, int cols, char set);

//打印棋盘
void display_board(char board[ROWS][COLS], int row, int col);

//设置地雷
void set_mine(char board[ROWS][COLS], int row, int col);

//玩家排雷
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

