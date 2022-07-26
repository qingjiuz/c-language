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
	//1.生成随机数
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	//2.猜数字
	int n = 0;
	int count = 0;
	while (count < 5)
	{
		printf("请猜数字:>");
		scanf("%d", &n);
		if (n < ret)
		{
			printf("猜小了\n");
			count++;
		}
		else if (n > ret)
		{
			printf("猜大了\n");
			count++;
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
	if (5 == count)
	{
		printf("5次机会已经用完了，数字是%d\n请重新开始游戏\n", ret);
	}
}


int main()
{
	srand((unsigned int) time (NULL));
	int input = 0;
	do 
	{
		menu();
		printf("请输入(0/1):> ");
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