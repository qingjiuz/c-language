#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("***********************\n");
	printf("******** 1.play *******\n");
	printf("******** 0.exit *******\n");
	printf("***********************\n");
}

void game()
{
	//1.���������
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	//2.������
	int n = 0;
	int count = 0;
	while (count < 5)
	{
		printf("�������:>");
		scanf("%d", &n);
		if (n < ret)
		{
			printf("��С��\n");
			count++;
		}
		else if (n > ret)
		{
			printf("�´���\n");
			count++;
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
	if (5 == count)
	{
		printf("5�λ����Ѿ������ˣ�������%d\n�����¿�ʼ��Ϸ\n", ret);
	}
}


int main()
{
	srand((unsigned int) time (NULL));
	int input = 0;
	do 
	{
		menu();
		printf("������(0/1):> ");
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