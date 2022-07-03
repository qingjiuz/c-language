#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("*****  1.play   0.exit  ******\n");
	printf("******************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret = ' ';
	srand((unsigned int)time(NULL));
	//初始化数组
	Initboard(board, ROW, COL);
	//打印棋盘
	Displayborad(board, ROW, COL);
	while (1)
	{
		//玩家回合
		Player(board, ROW, COL);
		Displayborad(board, ROW, COL);
		if (IsWin(board, ROW, COL) == '*')
		{
			printf("玩家胜利\n");
			break;
		}
		else if (IsWin(board, ROW, COL) == 'P')
		{
			printf("平局\n");
			break;
		}
		//ret = IsWin(board, ROW, COL);
		//if (ret != 'C')
		//{
		//	break;
		//}

		//电脑回合
		Computer(board, ROW, COL);
		Displayborad(board, ROW, COL);
		if (IsWin(board, ROW, COL) == '#')
		{
			printf("电脑胜利\n");
			break;
		}
		else if (IsWin(board, ROW, COL) == 'P')
		{
			printf("平局\n");
			break;
		}
		//ret = IsWin(board, ROW, COL);
		//if (ret != 'C')
		//{
		//	break;
		//}
	}
	//if (ret == '*')
	//{
	//	printf("玩家胜利\n");
	//}
	//else if (ret == '#')
	//{
	//	printf("电脑胜利\n");
	//}
	//else
	//{
	//	printf("平局\n");
	//}
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入（1/0）:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}