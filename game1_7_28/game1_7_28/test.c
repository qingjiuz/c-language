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

	//初始化棋盘
	init_board(board, ROW, COL);
	//打印棋盘
	display_board(board, ROW, COL);
	while (1)
	{
		//玩家输入
		play_move(board, ROW, COL);
		display_board(board, ROW, COL);
		//判断胜利
		if ('C' != (ret = is_win(board, ROW, COL)))
		{
			break;
		}
		
		//电脑输入
		computer_move(board, ROW, COL);
		display_board(board, ROW, COL);
		//判断胜利
		if ('C' != (ret = is_win(board, ROW, COL)))
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("恭喜玩家胜利\n");
	}
	else if ('#' == ret)
	{
		printf("电脑胜利\n");
	}
	else if ('D' == ret)
	{
		printf("平局\n");
	}
}
//玩家胜利-->'*'
//电脑胜利-->'#'
//平局    -->'D'
//继续    -->'C'

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		mune();
		printf("请输入:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请输入正确的数字\n");
			break;
		}
	} while (input);
	return 0;
}
