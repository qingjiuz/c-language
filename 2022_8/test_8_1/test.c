#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;//1010
//	int i = 0;
//	int tmp = 0;
//	for (i = 32; i > 0; i -= 2)
//	{
//		tmp = (a >> i);
//		printf("%d ", (tmp & 1));
//	}
//	printf("\n");
//	for (i = 31; i > 0; i -= 2)
//	{
//		tmp = (a >> i);
//		printf("%d ", (tmp & 1));
//	}
//	return 0;
//}



////BC117-小乐乐走台阶
//int test(int n)
//{
//    if (n > 1)
//    {
//        return test(n - 1) + test(n - 2);
//    }
//    return 1;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int sum = test(n);
//    printf("%d\n", sum);
//    return 0;
//}


////BC115-小乐乐与欧几里得（最大公约数）
//int main()
//{
//    long long a = 0;
//    long long b = 0;
//    scanf("%d %d", &a, &b);
//    long long x = a * b;
//    long long tmp = 0;
//    int i = 0;
//    long long l = 0;
//    long long m = 0;
//    //辗转相除法
//    while (b != 0)
//    {
//        tmp = a % b;
//        a = b;
//        b = tmp;
//    }
//    l = a;
//    m = x / l;
//    printf("%lld", l + m);
//    return 0;
//}



////BC98-序列中删除指定数字
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int i = 0;
//    int d = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //delete
//    scanf("%d", &d);
//    for (i = 0; i < n; i++)
//    {
//        int tmp = 0;
//        int j = 0;
//        while (arr[i] == d)
//        {
//
//            for (j = i; j < n; j++)
//                arr[j] = arr[j + 1];
//            n -= 1;
//            i -= 1;
//        }
//    }
//    for (i = 0; i < n; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}



////BC111-小乐乐与进制转换
//void six(int  n)
//{
//    if (n > 0)
//    {
//        six(n / 6);
//        printf("%d", n % 6);
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    six(n);
//    return 0;
//}



////BC106-上三角矩阵判定
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n][n];
//    int i = 0;
//    int j = 0;
//    int flag = 1;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    for (i = 1; i < n; i++)
//    {
//        for (j = 0; j < i; j++)
//        {
//            if (arr[i][j] != 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//    }
//
//    if (1 == flag)
//    {
//        printf("YES\n");
//    }
//    else if (0 == flag)
//    {
//        printf("NO\n");
//    }
//    return 0;
//}



//打印整数二进制的奇数位和偶数位
int main()
{
	int a = 10;//1010
	int i = 0;
	int tmp = 0;
	for (i = 32; i > 0; i -= 2)
	{
		tmp = (a >> i);
		printf("%d ", (tmp & 1));
	}
	printf("\n");
	for (i = 31; i > 0; i -= 2)
	{
		tmp = (a >> i);
		printf("%d ", (tmp & 1));
	}
	return 0;
}