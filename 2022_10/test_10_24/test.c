#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////BC118-С����������
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100000] = { 0 };
//    int max = 0;
//    int i = 0;
//    for (i = 0; i < n; i++) {
//        int tmp = 0;
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i])
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//
//
//    return 0;
//}

////BC60 ���ո�ֱ��������ͼ��
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF) {
//        int i = 0;
//        for (i = 0; i < a; i++)
//        {
//            int j = 0;
//            for (j = 0; j < a - i - 1; j++)
//            {
//                printf("  ");
//            }
//            for (j = 0; j < i + 1; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#pragma pack(1)

struct S 
{
	char a;
	char b;
	int c;
	struct S* s;
};

struct BOOK
{
	char name[20];//����
	char writer[10];//����
	int price;//�۸�
	char book_num[10];//���
}b1;//����Ϊ����һ��ȫ�ֵĽṹ�����

//�����ṹ������
struct
{
	char a;
	char b;
	int c;
}x, y;


struct S1
{
	char a;
	char b;
	int c;
	struct S1* s1;
};

//ѧ��
struct Stu
{
	char name[20];//����
	int age;//����
	char tele[12];//�绰
};

//ѧ��
struct Note
{
	char num[8];
	struct Stu s1;//Ƕ��
};

int main()
{
	struct Stu S1 = { "xiaoming", 18, "123456" };//��ʼ��

	struct Note x = { "20221024", {"xiaohong", 20, "456789"} };//��ʼ��

	return 0;
}