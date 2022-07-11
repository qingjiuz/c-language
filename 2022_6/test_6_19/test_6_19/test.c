#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	int i;
//	int count = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	double a = 0;//处理相加之和
//	int c = 0;
//	double b = 0;//处理相减之差
//	int d = 0;
//	double sum = 0;
//
//	for (c = 1, d = 2; c <= 99 && d<=100; c+= 2, d+=2)
//	{
//		a = a + (1.0 / c);
//		b = b + (1.0 / d);
//	}
//	sum = a - b;
//	printf("a = %fl\n", a);
//	printf("b = %fl\n", b);
//	printf("sum = %lf", sum);
//	return 0;
//}

//int main()
//{
//	int i;
//	double sum = 0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("sum = %fl", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i;
//
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[0] < arr[i])
//		{
//			arr[0] = arr[i];
//		}
//	}
//	printf("max = %d", arr[0]);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			sum = a * b;
//			printf("%d * %d = %-2d ", a, b, sum);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int k = 5;

	while (left <= right)
	{
		int mid = (right + left) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
			printf("数字是%d", arr[mid]);
			break;
		}
	}

if (left > right)
{
	printf("找不到");
}
	return 0;
}