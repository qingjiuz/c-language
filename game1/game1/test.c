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
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	Displayborad(board, ROW, COL);
	while (1)
	{
		//��һغ�
		Player(board, ROW, COL);
		Displayborad(board, ROW, COL);
		if (IsWin(board, ROW, COL) == '*')
		{
			printf("���ʤ��\n");
			break;
		}
		else if (IsWin(board, ROW, COL) == 'P')
		{
			printf("ƽ��\n");
			break;
		}
		//ret = IsWin(board, ROW, COL);
		//if (ret != 'C')
		//{
		//	break;
		//}

		//���Իغ�
		Computer(board, ROW, COL);
		Displayborad(board, ROW, COL);
		if (IsWin(board, ROW, COL) == '#')
		{
			printf("����ʤ��\n");
			break;
		}
		else if (IsWin(board, ROW, COL) == 'P')
		{
			printf("ƽ��\n");
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
	//	printf("���ʤ��\n");
	//}
	//else if (ret == '#')
	//{
	//	printf("����ʤ��\n");
	//}
	//else
	//{
	//	printf("ƽ��\n");
	//}
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("�����루1/0��:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}