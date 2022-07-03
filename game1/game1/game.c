#include"game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Displayborad(char board[ROW][COL], int row, int col)
{
	system("cls");
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//��ӡ�ָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}		
			}
			printf("\n");
		}
		
	}
	
}

//����λ��Ϊ��--����'1'
//����λ�÷ǿ�--����'0'
int ChackBoard(char board[ROW][COL], int row, int col)
{
	if (board[row][col] == ' ')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//���--'*'
void Player(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("��һغϣ�> ");
		scanf("%d %d", &x, &y);
		if (ChackBoard(board, x - 1, y - 1) == 1)
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("��������ȷ��λ��\n");
		}
	}
	
}

//����--'#'
void Computer(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (ChackBoard(board, x, y) == 1)
		{
			board[x][y] = '#';
			break;
		}
	}
}

//���Ӯ--'*'
//����Ӯ--'#'
//ƽ��--'P'
//����--'C'
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2]) && (board[1][1] != ' '))
	{
		//if (board[0][0] == '*')
		//{
		//	return '*';
		//}
		//else if (board[0][0] == '#')
		//{
		//	return '#';
		//}
		return board[1][1];
	}

	//
	if ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0]) && (board[1][1] != ' '))
	{
		//if (board[2][0] == '*')
		//{
		//	return '*';
		//}
		//else if (board[2][0] == '#')
		//{
		//	return '#';
		//}
		return board[1][1];
	}

	for (i = 0; i <= col; i++)
	{
		if ((board[0][i] == board[1][i]) && (board[1][i] == board[2][i]) && (board[1][i] != ' '))
		{
			return board[1][i];
		}
		if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]) && (board[i][1] != ' '))
		{
			return board[i][1];
		}
	}
	//
	for (i = 0; i <= ROW; i++)
	{
		for (j = 0; j <= COL; j++)
		{
			if (board[i][j] == ' ')
			{
				return 'C';
			}
		}
	}
	return 'P';
}