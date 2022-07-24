#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, , i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,10,16,7,8,10,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d",max);
//	
//	return 0;
//}


//求n的阶乘
//int Fact(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fact(n - 1);
//	}
//
//}


//int Fact2(int n)
//{
//	int i = 0;
//	int a = 1;
//	for (i = 1; i <= n; i++)
//	{
//		a *= i;
//	}
//	return a;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = Fact2(n);
//	printf("%d\n", sum);
//	return 0;
//}


//打印一个整数的每一位
void print(int n)
{
	if (n > 0)
	{
		print(n / 10);
		printf("%d ", n % 10);
	}
}

int main()
{
	int n = 1234;
	print(n);
	return 0;
}