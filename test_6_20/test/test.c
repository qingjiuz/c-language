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
	//随机数部分
	ret = rand()%100 + 1;
	//printf("%d\n", ret);
	//游戏逻辑部分
	while (i <= 5)
	{
		printf("请输入数字>: ");
		scanf("%d", &arr);
		if (arr < 1 || arr > 100)
		{
			printf("请重新输入数字");
			continue;
		}
		if (arr < ret)
		{
			printf("猜小了，还剩余%d次机会\n", 5 - i);
			i++;
		}
		else if (arr > ret)
		{
			printf("猜大了，还剩余%d次机会\n", 5 - i);
			i++;
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
	if (i == 6)
	{
		printf("机会已经用完了，请再次尝试\n");
	}

	
	//for (i = 1; i <= 5; i++)
	//{
	//	printf("请输入数字>:");
	//	scanf("%d", &arr);
	//	
	//	if (arr < 1 || arr > 100)
	//	{
	//		printf("输入错误，请重新输入%d--%d的数字\n", left, right);
	//		continue;
	//	}
	//	if (arr < ret)
	//	{
	//		left = arr + 1;
	//		printf("猜小了，数字在%d--%d之间\n", left, right);
	//		continue;
	//	}
	//	else if (arr > ret)
	//	{
	//		right = arr - 1;
	//		printf("猜大了，数字在%d--%d之间\n", left, right);
	//		continue;
	//	}
	//	else if (arr == ret)
	//	{
	//		printf("猜对了\n");
	//		break;
	//	}
	//}
	//if (i == 6)
	//{
	//	printf("请重新开始游戏\n");
	//}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请输入>:");
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
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);

	return 0;
}