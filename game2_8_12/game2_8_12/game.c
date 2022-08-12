#include "game.h"

void init_board(char(*bp)[COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			(* (bp + i))[j] = set;
		}
	}
}


void display_board(char board[ROWS][COLS], int row, int col)
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


void set_mine(char board[ROWS][COLS], int row, int col)
{
	int ret = SetEasy;
	while (ret)
	{
		int x = rand() % 9 + 1;//1~9
		int y = rand() % 9 + 1;//1~9
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			ret--;
		}
	}
}


//����������Χ�ĵ�����
char num_mine(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0');
}

//չ������
void exten_board(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int count = num_mine(mine, x, y);
	if (count != 0)
	{
		show[x][y] = count + '0';
	}
	else if (count == 0 && show[x][y] == '*')
	{
		show[x][y] = ' ';
		exten_board(mine, show, x - 1, y - 1);
		exten_board(mine, show, x - 1, y);
		exten_board(mine, show, x - 1, y + 1);
		exten_board(mine, show, x, y - 1);
		exten_board(mine, show, x, y + 1);
		exten_board(mine, show, x + 1, y - 1);
		exten_board(mine, show, x + 1, y);
		exten_board(mine, show, x + 1, y + 1);
	}
	
}

//����Ƿ��ʤ
int is_win(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
			{
				count++;
			}
		}
	}
	return count;
}


void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = row * col;//��һ��:0

	while (win > SetEasy)//��һ��:(win < (row*col-SetEasy))
	{
		
		printf("����������:>");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '0')
				{
					//��һ��(û��չ������)
					//int count = num_mine(mine, x, y);
					//show[x][y] = count + '0';
					//win++;

					//�ڶ���(����չ������)
					exten_board(mine, show, x, y);
					display_board(show, row, col);
					win = is_win(show, row, col);

				}
				else
				{
					printf("�ȵ����ˣ���Ϸ����\n");
					display_board(mine, ROW, COL);
					break;
				}
			}
			else
			{
				printf("��������ȷ������\n");
			}
		}
		else
		{
			printf("��������ȷ������\n");
		}
	}
	if (win == SetEasy)//��һ��:(win == (row*col-SetEasy))
	{
		printf("��ϲ�ɹ�����\n");
	}
}

