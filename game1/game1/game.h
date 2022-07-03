#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void Initboard(char board[ROW][COL], int row, int col);
void Displayborad(char board[ROW][COL], int row, int col);
void Player(char board[ROW][COL], int row, int col);
void Computer(char board[ROW][COL], int row, int col);
int ChackBoard(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);