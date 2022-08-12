#include "game.h"

void menu()
{
	printf("****************************\n");
	printf("******    1. play     ******\n");
	printf("******    0. exit     ******\n");
	printf("****************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//初始化棋盘
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');

	//打印棋盘
	display_board(show, ROW, COL);

	//设置地雷
	set_mine(mine, ROW, COL);

	//玩家排雷
	//display_board(mine, ROW, COL);
	find_mine(mine, show, ROW, COL);
	

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请输入:>");
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
			printf("请重新输入正确的数字\n");
			break;
		}
	} while (input);
	return 0;
}