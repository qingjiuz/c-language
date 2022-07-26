#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int i = 0;
//	double a = 0;
//	double b = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			a += 1.0 / i;
//		}
//		else
//		{
//			b += 1.0 / i;
//		}
//	}
//	printf("%lf", b - a);
//	return 0;
//}


//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10 == 9) || (i / 10 == 9))
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k == arr[mid])
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char ch[] = "abc";
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}


//int Fac(int n)
//{
//	if (n > 0)
//		return n * Fac(n - 1);
//	else
//		return 1;
//}

//int Fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = Fac(n);
//	printf("%d\n", sum);
//	return 0;
//}


//int Fib1(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib1(n - 1) + Fib1(n - 2);
//}
//
//int Fib2(int n)
//{
//	int i = 0;
//	int tmp = 0;
//	int a = 1;
//	int b = 1;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	for (i = 2; i < n; i++)
//	{
//		tmp = a;
//		a = a + b;
//		b = tmp;
//	}
//	return a;
//}
//
//int Fib3(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib3(n);
//	printf("%d\n", ret);
//	return 0;
//}