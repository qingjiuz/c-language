#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[] = "hello word";
//	char arr2[20] = "############";
//	
//	memset(arr2, '*', 5);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "hello word";
//	char arr2[20] = { 0 };
//
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int get_max(int x, int y)
//{
//	int z = (x > y ? x : y);
//	return z;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//void swap(int x, int y)  //error
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//void swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a=%d b=%d", a, b);
//
//	return 0;
//}

#include<math.h>

//int pri_num(int x)
//{
//	int n;
//	for (n = 2; n <= sqrt(x); n++)
//	{
//		if (x % n == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int input = 0;
//	int num = 0;
//	int i = 0;
//	//scanf("%d", &input);
//	//num = pri_num(input);
//	//printf("%d\n", num);
//
//	for (i = 100; i <= 200; i++)
//	{
//		if (pri_num(i) == 1)
//		{
//			printf("%d是素数\n", i);
//		}
//	}
//
//	return 0;
//}

//int year(int x)
//{
//	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (year(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int screah_num(int x, int y[], int z)
//{
//	int left = 0;
//	int right = z - 1;
//	int mid = 0;
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (y[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (y[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (y[mid] == x)
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = 0;
//	
//	a = screah_num(k, arr, sz);
//	if (a == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是%d", a);
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

#include "Add.h"

int main()
{
	int a = 10;
	int b = 20;
	
	printf("sum=%d\n", Add(a, b));

	return 0;
}