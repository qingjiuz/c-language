#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////BC100-有序序列合并
//void sort(int* arr, int n)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n - i - 1; j++)
//        {
//            int tmp = 0;
//            if (arr[j] > arr[j + 1])
//            {
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[n + m];
//    int i = 0;
//    for (i = 0; i < n + m; i++)
//    {
//        scanf("%d", (arr + i));
//    }
//
//    //排序
//    sort(arr, n + m);
//
//    for (i = 0; i < m + n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}




////BC68-X形图案
//int main()
//{
//int i = 0;
//int j = 0;
//int n = 0;
//
//while (scanf("%d", &n) != EOF)
//{
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (i == j)
//            {
//                printf("*");
//            }
//            else if (i == n - j - 1)
//            {
//                printf("*");
//            }
//            else {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//}
//
//return 0;
//}




//BC65-箭形图案
int main()
{
    int n = 0;
    int i = 0;
    int j = 0;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j < 2 * (n - i); j++)
            {
                printf(" ");
            }
            for (j = 0; j < i + 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (i = 1; i <= n; i++)
        {
            for (j = 0; j < 2 * i; j++)
            {
                printf(" ");
            }
            for (j = 0; j < n - i + 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}