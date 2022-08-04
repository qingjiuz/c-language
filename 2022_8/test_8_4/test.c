#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


////BC54-获得月份天数
//int main()
//{
//    int y = 0;
//    int m = 0;
//    while (scanf("%d %d", &y, &m) != EOF)
//    {
//        switch (m)
//        {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            printf("31\n");
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            printf("30\n");
//            break;
//        case 2:
//            if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//            {
//                printf("29\n");
//            }
//            else
//            {
//                printf("28\n");
//            }
//            break;
//        }
//    }
//    return 0;
//}



////BC47-判断是不是字母
//int main()
//{
//    char arr = 0;
//    while (scanf("%c", &arr) != EOF)
//    {
//        getchar();
//        if ((arr >= 65 && arr <= 90) || (arr >= 97 && arr <= 122))
//        {
//            printf("%c is an alphabet.\n", arr);
//        }
//        else {
//            printf("%c is not an alphabet.\n", arr);
//        }
//    }
//    return 0;
//}﻿


////BC48-字母大小写转换
//int main()
//{
//    char arr = 0;
//    while (scanf("%c", &arr) != EOF)
//    {
//        getchar();
//        if (arr >= 65 && arr <= 90)
//        {
//            printf("%c\n", arr + 32);
//        }
//        else if (arr >= 97 && arr <= 122)
//        {
//            printf("%c\n", arr - 32);
//        }
//    }
//    return 0;
//}



////BC37-网购
//int main()
//{
//    double val = 0;
//    int y = 0;
//    int d = 0;
//    int coupon = 0;
//    scanf("%lf %d %d %d", &val, &y, &d, &coupon);
//    if ((y == 11 && d == 11) || (y == 12 && d == 12))
//    {
//        if (y == 11)
//        {
//            val *= 0.7;
//        }
//        else
//        {
//            val *= 0.8;
//        }
//        if (coupon == 1)
//        {
//            val -= 50;
//        }
//        if (val < 0)
//        {
//            val = 0;
//        }
//    }
//    printf("%.2lf\n", val);
//    return 0;
//}




////使用指针打印数组内容
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}



////字符串逆序
//#include<string.h>
//void reverse(char* arr, size_t sz)
//{
//	int left = 0;
//	size_t right = sz - 1;
//	while (left <= right)
//	{
//		char tmp = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	char arr[] = "abcdefg";
//	size_t sz = strlen(arr);
//	reverse(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}



////打印菱形
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 7; i++)
//	{
//		for (j = 0; j < 7 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 6; i > 0; i--)
//	{
//		for (j = 0; j < 7 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i * 2 - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int power(int n, int k)
//{
//	if (k > 0)
//	{
//		return power(n, k - 1) * n;
//	}
//	return 1;
//}
//
//int num(int n)
//{
//	while (n)
//	{
//		return num(n / 10) + 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = i;
//		int sum = 0;
//		int tmp = n;
//		int k = num(n);//n位数
//		while (n)
//		{
//			int ret = n % 10;
//			sum += power(ret, k);
//			n /= 10;
//		}
//		if (sum == tmp)
//		{
//			printf("%d\n", sum);
//		}
//
//	}
//	return 0;
//}



////Sn=a+aa+aaa+aaaa+aaaaa的前5项之和
//int get_num(int a, int k)
//{
//	if (k > 0)
//	{
//		return a + get_num(a * 10, k - 1);
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		ret = get_num(a, i);
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", (*p).a);
//	//printf("%d\n", *p.a);//error
//	return 0;
//}



//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
int main()
{
	int n = 0;
	scanf("%d", &n);
	int count = n / 1;
	while (n)
	{
		count += n / 2;
		n /= 2;
	}
	printf("%d\n", count);
	return 0;
}