#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("sum=%d\n", Add(a, b));
//	return 0;
//}

//求素数

//void print_u(int n)
//{
//	if (n > 9)
//	{
//		print_u(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int input = 0;
//	scanf("%d", &input);
//	print_u(input);
//	return 0;
//}

#include<string.h>

//求字符串长度

//int my_strlen1(char* a)
//{
//	int i = 0;
//	while (*a != '\0')
//	{
//		i++;
//		a++;
//	}
//	return i;
//}
//
//int my_strlen2(char* a)
//{
//	if (*a == '\0')
//	{
//		return 0;
//	}
//	return my_strlen2(a+1) + 1;
//}
//
//int my_strlen(char* a)
//{
//	if (*a != '\0')
//	{
//		return 1 + my_strlen(a + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "hello";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//求n的阶乘

//int Fac1(int a)
//{
//	int i = 0;
//	int tmp = 1;
//	//int sum = 0;
//	for (i = 1; i <= a; i++)
//	{
//		tmp = i * tmp;
//		//sum = tmp + sum;
//	}
//	return tmp;
//}
//
//int Fac2(int a)
//{
//	if (a != 1)
//	{
//		return Fac2(a - 1) * a;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	sum = Fac2(n);
//	printf("%d\n", sum);
//}

//求斐波那契数列

//int Fib(int a)
//{
//	if (a <= 2)
//	{
//		return 1;
//	}
//	else if (a > 2)
//	{
//		return Fib(a - 1) + Fib(a - 2);
//	}
//	
//}

int Fib(int x)
{
	int i = 0;
	int a = 1;
	int b = 1;
	int c = 0;

	if (x <= 2)
	{
		return 1;
	}

	for (i = 1; i <= x-2; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int Fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	int num = 0;
	scanf("%d", &n);
	num = Fib(n);
	printf("num = %d\n", num);
	return 0;
}