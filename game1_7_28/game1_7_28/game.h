#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//打印棋盘
void display_board(char board[ROW][COL], int row, int col);

//初始化棋盘
void init_board(char board[ROW][COL], int row, int col);

//玩家输入
void play_move(char board[ROW][COL], int row, int col);

//电脑输入
void computer_move(char board[ROW][COL], int row, int col);

//判断胜利
char is_win(char board[ROW][COL], int row, int col);