#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int * p = NULL;
//	int arr[10] = { 0 };
//
//	//int(*p)[10] = &arr;//err
//	//p = &arr;
//	return 0;
//	
//}


////有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//int find(int arr[3][3], int x, int y, int n)
//{
//	int a = 0;
//	int b = y-1;
//	while ((a <= x-1) && (b >= 0))
//	{
//		if (arr[a][b] == n)
//		{
//			return 1;
//		}
//		else if (arr[a][b] < n)
//		{
//			a += 1;
//		}
//		else
//		{
//			b -= 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int n = 0;
//	scanf("%d", &n);
//	int ret = find(arr, 3, 3, n);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}



////实现一个函数，可以左旋字符串中的k个字符。
//#include<string.h>
//void left_hand(char* arr, int n)
//{
//	int right = strlen(arr) - 1;
//	int left = 0;
//	while (n)
//	{
//		int i = 0;
//		char tmp = *arr;
//		for (i = 0; i < right; i++)
//		{
//			*(arr + i) = *(arr + 1 + i);
//		}
//		*(arr + right) = tmp;
//		n--;
//	}
//}
//
//void right_hand(char* arr, int n)
//{
//	int right = strlen(arr) - 1;
//	int left = 0;
//	while (n)
//	{
//		int i = 0;
//		char tmp = *(arr + right);
//		for (i = 0; i < right; i++)
//		{
//			*(arr + right - i) = *(arr + right - i - 1);
//		}
//		*arr = tmp;
//		n--;
//	}
//}
//
//int chack(char* arr1, char* arr2)
//{
//	int right = strlen(arr2) - 1;
//	int left = 0;
//	int n = right;
//	while (n)
//	{
//		int i = 0;
//		char tmp = *arr2;
//		for (i = 0; i < right; i++)
//		{
//			*(arr2 + i) = *(arr2 + 1 + i);
//		}
//		*(arr2 + right) = tmp;
//		if (strcmp(arr1, arr2) == 0)
//		{
//			return 1;
//		}
//		n--;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	char arr[] = "AABCD";
//	char arr1[] = "DAABC";
//	//int n = 0;
//	//scanf("%d", &n);
//	//left_hand(arr, n);
//	//right_hand(arr, n);
//	//printf("%s\n", arr);
//
//	int ret = chack(arr, arr1);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}



//void print(int n)
//{
//    int ret = n;
//    int i = 0;
//    while (n)
//    {
//        if ((n == 1) || (n == ret))
//        {
//            for (i = 1; i <= ret; i++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        else
//        {
//            printf("* ");
//            for (i = 1; i <= ret - 2; i++)
//            {
//                printf("  ");
//            }
//            printf("* \n");
//        }
//        n--;
//    }
//}
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        print(n);
//    }
//
//    return 0;
//}



//int main()
//{
//    int n = 5;
//    //scanf("%d", &n);
//    int arr[6];
//    int i = 0;
//    int add = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &add);
//    arr[n] = add;
//
//    for (i = 0; i < n + 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//
//    for (i = 0; i <= n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


void print1(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}


//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//print1(arr, sz);
//	//print1(&arr, sz);
//
//	return 0;
//}

//void print2(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print3(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	
//	//print2(arr, 3, 5);
//	print3(arr, 3, 5);
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int sum = Add(3, 5);
//	printf("%d\n", sum);
//
//	int (*pa)(int x, int y) = &Add;
//	//int (*pa)(int, int) = &Add;
//	sum = pa(4, 6);
//	printf("%d\n", sum);
//
//	sum = (*pa)(1, 3);
//	printf("%d\n", sum);
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int (*pta[2])(int, int) = { Add,Sub };
//	
//	int sum = (*pta[0])(3, 5);
//	//pta[0](3, 5) == (*pta[0])(3, 5)
//	printf("%d\n", sum);
//
//	sum = pta[1](5, 3);
//	printf("%d\n", sum);
//	
//	return 0;
//}


//简易计算器
void menu()
{
	printf("************************\n");
	printf("**** 1. Add  2. Sub ****\n");
	printf("**** 3. Mul  4. Dvi ****\n");
	printf("**** 0. exit        ****\n");
	printf("************************\n");
}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Dvi(int x, int y)
{
	return x / y;
}


//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入:>");
//		scanf("%d", &input);
//		int x = 0;
//		int y = 0;
//		int sum = 0;
//		scanf("%d %d", &x, &y);
//
//		switch (input)
//		{
//		case 1:
//			sum = Add(x, y);
//			printf("sum=%d\n", sum);
//			break;
//		case 2:
//			sum = Sub(x, y);
//			printf("sum=%d\n", sum);
//			break;
//		case 3:
//			Mul(x, y);
//			printf("sum=%d\n", sum);
//			break;
//		case 4:
//			Dvi(x, y);
//			printf("sum=%d\n", sum);
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//简化版
int main()
{
	int input = 0;
	int (*pa[5])(int, int) = { 0,Add,Sub,Mul,Dvi };//函数指针数组

	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		int x = 0;
		int y = 0;
		int sum = 0;

		if (input == 0)
		{
			printf("退出程序\n");
		}
		else if (input > 0 && input <= 4)
		{
			scanf("%d %d", &x, &y);
			sum = pa[input](x, y);
			printf("sum=%d\n", sum);
		}
		else
		{
			printf("输入错误\n");
		}

		

	} while (input);
	return 0;
}