#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;

}



int main()
{
	//写一个函数求两个数的较大值
	int num1 = 0;
	int num2 = 0;
	int max = 0;
	scanf("%d%d", &num1, &num2);
	max = Max(num1, num2);
	printf("最大值为：%d\n", max);





	/*if (num1 > num2)
		printf("较大值为%d\n", num1);
	else
		printf("较大值为%d\n", num2);*/





	return 0;
}

//int main()
//{
//	printf("%c\n", '\77');
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("输入数字1:");
//	scanf("%d", &a);
//	printf("输入数字2:");
//	scanf("%d", &b);
//	//printf("请输入数字1：",scanf("%d", &a));
//	//printf("请输入数字2：", scanf("%d", &b));
//	//scanf("%d%d", &a , &b);
//	c = a + b;
//	printf("结果是%d\n" , c);
//	return 0;
//} 