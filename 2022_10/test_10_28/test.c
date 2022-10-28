#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//柔性数组
//struct S
//{
//	int a;
//	char b;
//	int arr[];//柔性数组
//};

//int main()
//{
//	struct S* s;
//
//	struct S* ptr = (struct S*)malloc(sizeof(struct S) + sizeof(int) * 4);
//	if (ptr == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	s = ptr;
//
//	//使用
//	s->a = 10;
//	s->b = 'a';
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", (s->arr[i] = i));
//	}
//
//
//	//释放
//	free(s);
//	s = NULL;
//
//	return 0;
//}

//另一种写法
//struct S
//{
//	int a;
//	char b;
//	int* arr;//指针
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//		return 1;
//
//	ps->a = 10;
//	ps->b = 'a';
//
//	int* ptr = (int*)malloc(sizeof(int) * 4);
//	if (ptr == NULL)
//		return 1;
//	ps->arr = ptr;
//
//	//使用
//	//...
//
//	//释放
//	free(ps->arr);//开辟arr内存之前已经先为结构体开辟了内存，因此不能先释放ps
//	ps->arr = NULL;
//	free(ps);//后释放
//	ps = NULL;
//
//	return 0;
//}


//BC116 小乐乐改数字
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int sum = 0;
//    while (n)
//    {
//        int bit = n % 10;
//        sum += (bit % 2) * pow(10, i);
//        i++;
//        n /= 10;
//    }
//    printf("%d", sum);
//    return 0;
//}


//BC39 争夺前五名
//int cmp_num(const void* e1, const void* e2)
//{
//    return (*((int*)e2) - *((int*)e1));
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//    int ss[50];
//    int i = 0;
//    while (scanf("%d ", &b) != EOF)
//    {
//        ss[i] = b;
//        i++;
//    }
//
//    //排序
//    qsort(ss, a, sizeof(int), cmp_num);
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", ss[i]);
//    }
//
//    return 0;
//}


//BC67 正斜线形图案
//int main() 
//{
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < a; i++)
//        {
//            int j = 0;
//            for (j = 0; j < a - i; j++)
//            {
//                if ((a - 1) == (i + j))
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}

//BC60 带空格直角三角形图案
int main() 
{
    int a = 0;
    while (scanf("%d", &a) != EOF) 
    {
        int i = 0;
        for (i = 0; i < a; i++)
        {
            int j = 0;
            for (j = 0; j < a; j++)
            {
                if (i + j >= a - 1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }

    }
    return 0;
}