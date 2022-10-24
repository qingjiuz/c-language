#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////BC118-小乐乐与序列
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

////BC60 带空格直角三角形图案
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
	char name[20];//书名
	char writer[10];//作者
	int price;//价格
	char book_num[10];//书号
}b1;//这里为创建一个全局的结构体变量

//匿名结构体类型
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

//学生
struct Stu
{
	char name[20];//姓名
	int age;//年龄
	char tele[12];//电话
};

//学号
struct Note
{
	char num[8];
	struct Stu s1;//嵌套
};

int main()
{
	struct Stu S1 = { "xiaoming", 18, "123456" };//初始化

	struct Note x = { "20221024", {"xiaohong", 20, "456789"} };//初始化

	return 0;
}