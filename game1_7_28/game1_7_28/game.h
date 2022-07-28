#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 3
#define COL 3

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��ӡ����
void display_board(char board[ROW][COL], int row, int col);

//��ʼ������
void init_board(char board[ROW][COL], int row, int col);

//�������
void play_move(char board[ROW][COL], int row, int col);

//��������
void computer_move(char board[ROW][COL], int row, int col);

//�ж�ʤ��
char is_win(char board[ROW][COL], int row, int col);