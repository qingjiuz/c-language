#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*****************************\n");
	printf("****  1.play    0.exit  *****\n");
	printf("*****************************\n");
}

void play()
{
	int ret = 0;
	int left = 1;
	int right = 100;
	int i = 1;
	int arr = 0;
	//���������
	ret = rand()%100 + 1;
	//printf("%d\n", ret);
	//��Ϸ�߼�����
	while (i <= 5)
	{
		printf("����������>: ");
		scanf("%d", &arr);
		if (arr < 1 || arr > 100)
		{
			printf("��������������");
			continue;
		}
		if (arr < ret)
		{
			printf("��С�ˣ���ʣ��%d�λ���\n", 5 - i);
			i++;
		}
		else if (arr > ret)
		{
			printf("�´��ˣ���ʣ��%d�λ���\n", 5 - i);
			i++;
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
	if (i == 6)
	{
		printf("�����Ѿ������ˣ����ٴγ���\n");
	}

	
	//for (i = 1; i <= 5; i++)
	//{
	//	printf("����������>:");
	//	scanf("%d", &arr);
	//	
	//	if (arr < 1 || arr > 100)
	//	{
	//		printf("�����������������%d--%d������\n", left, right);
	//		continue;
	//	}
	//	if (arr < ret)
	//	{
	//		left = arr + 1;
	//		printf("��С�ˣ�������%d--%d֮��\n", left, right);
	//		continue;
	//	}
	//	else if (arr > ret)
	//	{
	//		right = arr - 1;
	//		printf("�´��ˣ�������%d--%d֮��\n", left, right);
	//		continue;
	//	}
	//	else if (arr == ret)
	//	{
	//		printf("�¶���\n");
	//		break;
	//	}
	//}
	//if (i == 6)
	//{
	//	printf("�����¿�ʼ��Ϸ\n");
	//}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("������>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("play game\n");
			play();
			break;
		case 0:
			printf("exit game\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);

	return 0;
}