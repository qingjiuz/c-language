#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = Easy_Set;
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] +
		mine[x - 1][y] - 8 * '0';
}

void PlusBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	//坐标不是雷
	//坐标周围没有雷
	int count = get_mine_count(mine, x, y);
	if (count != 0)
	{
		show[x][y] = count + '0';
	}
	else
	{
		show[x][y] = ' ';
		//1
		if (show[x - 1][y - 1] == '*')
			PlusBoard(mine, show, x - 1, y - 1);
		//2
		if (show[x][y - 1] == '*')
			PlusBoard(mine, show, x, y - 1);
		//3
		if (show[x + 1][y - 1] == '*')
			PlusBoard(mine, show, x + 1, y - 1);
		//4
		if (show[x + 1][y] == '*')
			PlusBoard(mine, show, x + 1, y);
		//5
		if (show[x + 1][y + 1] == '*')
			PlusBoard(mine, show, x + 1, y + 1);
		//6
		if (show[x][y + 1] == '*')
			PlusBoard(mine, show, x, y + 1);
		//7
		if (show[x - 1][y + 1] == '*')
			PlusBoard(mine, show, x - 1, y + 1);
		//8
		if (show[x - 1][y] == '*')
			PlusBoard(mine, show, x - 1, y);

	}
	
}

int Win(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
				count++;
		}
	}
	return count;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("游戏结束，你踩到雷了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				system("cls");
				//展开功能
				PlusBoard(mine, show, x, y);
				//DisplayBoard(mine, row, col);
				DisplayBoard(show, row, col);
				//win = Win(show, mine, row, col);
				if (Win(mine, show, row, col) == Easy_Set)
				{
					printf("成功排雷\n");
					DisplayBoard(mine, row, col);
					break;
				}
			}
		}
		else
		{
			printf("请重新输入正确的坐标。\n");
		}
	}
}