#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//��������
//struct S
//{
//	int a;
//	char b;
//	int arr[];//��������
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
//	//ʹ��
//	s->a = 10;
//	s->b = 'a';
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", (s->arr[i] = i));
//	}
//
//
//	//�ͷ�
//	free(s);
//	s = NULL;
//
//	return 0;
//}

//��һ��д��
//struct S
//{
//	int a;
//	char b;
//	int* arr;//ָ��
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
//	//ʹ��
//	//...
//
//	//�ͷ�
//	free(ps->arr);//����arr�ڴ�֮ǰ�Ѿ���Ϊ�ṹ�忪�����ڴ棬��˲������ͷ�ps
//	ps->arr = NULL;
//	free(ps);//���ͷ�
//	ps = NULL;
//
//	return 0;
//}


//BC116 С���ָ�����
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


//BC39 ����ǰ����
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
//    //����
//    qsort(ss, a, sizeof(int), cmp_num);
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", ss[i]);
//    }
//
//    return 0;
//}


//BC67 ��б����ͼ��
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

//BC60 ���ո�ֱ��������ͼ��
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