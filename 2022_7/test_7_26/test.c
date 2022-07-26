#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void MulTab(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	MulTab(n);
//	return 0;
//}


//void swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}


//int is_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("%d年是闰年\n", year);
//	}
//	else
//	{
//		printf("%d年不是闰年\n", year);
//	}
//}
//
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	is_leap_year(y);
//	return 0;
//}


#include<math.h>
//int prime_num(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		if (prime_num(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char ch1[] = "hello world!";
//	char ch2[] = "############";
//	int i = 0;
//	int sz = strlen(ch1);
//	for (i = 0; i < sz; i++)
//	{
//		ch2[i] = ch1[i];
//	}
//	printf("%s\n", ch2);
//	return 0;
//}


//void init(int* arr, int sz, int n)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = n;
//	}
//}
//
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1 };
//	int arr1[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	init(arr, sz, 0);
//	print(arr, sz);
//	printf("\n");
//	reverse(arr1, sz1);
//	print(arr1, sz1);
//	return 0;
//}


//void bobble_sort(int* arr, int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int tmp = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,3,4,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bobble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//    int col = 0;
//    int row = 0;
//    scanf("%d %d", &col, &row);
//    int arr[col][row];//vs2022无法使用
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < col; i++)
//    {
//        for (j = 0; j < row; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < row; i++)
//    {
//        for (j = 0; j < col; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//int main()
//{
//    int col = 0;
//    int row = 0;
//    scanf("%d %d", &col, &row);
//    int arr[col][row];//vs2022用不了，不支持C99变长数组
//    int i = 0;
//    int j = 0;
//    int sum = 0;
//    for (i = 0; i < col; i++)
//    {
//        for (j = 0; j < row; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > 0)
//            {
//                sum += arr[i][j];
//            }
//        }
//    }
//    printf("%d", sum);
//}