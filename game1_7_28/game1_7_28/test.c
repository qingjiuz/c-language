#include "game.h"

void mune()
{
	printf("*************************\n");
	printf("******   1. play    *****\n");
	printf("******   0. exit    *****\n");
	printf("*************************\n");
}


void game()
{
	char board[ROW][COL] = { 0 };
	char ret = 0;

	//��ʼ������
	init_board(board, ROW, COL);
	//��ӡ����
	display_board(board, ROW, COL);
	while (1)
	{
		//�������
		play_move(board, ROW, COL);
		display_board(board, ROW, COL);
		//�ж�ʤ��
		if ('C' != (ret = is_win(board, ROW, COL)))
		{
			break;
		}
		
		//��������
		computer_move(board, ROW, COL);
		display_board(board, ROW, COL);
		//�ж�ʤ��
		if ('C' != (ret = is_win(board, ROW, COL)))
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("��ϲ���ʤ��\n");
	}
	else if ('#' == ret)
	{
		printf("����ʤ��\n");
	}
	else if ('D' == ret)
	{
		printf("ƽ��\n");
	}
}
//���ʤ��-->'*'
//����ʤ��-->'#'
//ƽ��    -->'D'
//����    -->'C'

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		mune();
		printf("������:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������ȷ������\n");
			break;
		}
	} while (input);
	return 0;
}
