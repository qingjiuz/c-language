#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define SetEasy 10

//��ʼ������
void init_board(char(*bp)[COLS], int rows, int cols, char set);

//��ӡ����
void display_board(char board[ROWS][COLS], int row, int col);

//���õ���
void set_mine(char board[ROWS][COLS], int row, int col);

//�������
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

