#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//BC116 小乐乐改数字
//int main() {
//    int a = 0;
//    int num[9] = { 0 };
//    scanf("%d", &a);
//    int i = 0;
//    while (a)
//    {
//        int tmp = a % 10;
//        if (tmp % 2 == 1)
//        {
//            num[i] = 1;
//        }
//        else
//        {
//            num[i] = 0;
//        }
//        a /= 10;
//        i++;
//
//    }
//    int j = 0;
//    int sum = 0;
//    for (j = i - 1; j >= 0; j--)
//    {
//        sum = sum * 10 + num[j];
//    }
//    printf("%d", sum);
//    return 0;
//}



//BC39-争夺前五名
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//    int ss[a];
//    int i = 0;
//    while (scanf("%d ", &b) != EOF)
//    {
//        ss[i] = b;
//        i++;
//    }
//
//    for (i = 0; i < a; i++)
//    {
//        int j = 0;
//        for (j = 0; j < a - i - 1; j++)
//        {
//            if (ss[j] < ss[j + 1])
//            {
//                int tmp = ss[j];
//                ss[j] = ss[j + 1];
//                ss[j + 1] = tmp;
//            }
//        }
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", ss[i]);
//    }
//
//    return 0;
//}
//



//BC75-数字三角形
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        int i = 0;
//        for (i = 1; i <= a; i++)
//        {
//            int j = 0;
//            for (j = 1; j < i + 1; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}
//


//BC67-正斜线形图案
int main() {
    int a = 0;
    while (scanf("%d", &a) != EOF)
    {
        int i = 0;
        for (i = a; i > 0; i--)
        {
            int j = 0;
            for (j = 0; j < i; j++)
            {
                if (j == i - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }


    return 0;
}

