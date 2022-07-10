#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//typedef struct S1
//{
//	int a;
//	char* b;
//	double c;
//}S1;
//
//
//typedef struct Stu 
//{
//	int id;
//	char name[10];
//	char sex[5];
//	S1 s;
//}Stu;
//
//int main()
//{
//	char arr[10] = "hello";
//	Stu s1 = { 20220710,"Tony","Male",{12,arr,3.14} };
//	printf("%d\n", s1.id);//20220710
//	printf("%s\n", s1.name);//Tony
//	printf("%d\n", s1.s.a);//12
//	printf("%lf\n", s1.s.c);//3.14
//	printf("%s\n", s1.s.b);//hello
//	return 0;
//}


//typedef struct Stu
//{
//	int id;
//	char name[20];
//	short age;
//	char sex[5];
//}Stu;
//
//void print1(Stu s)
//{
//	printf("id:   %d\n", s.id);
//	printf("name: %s\n", s.name);
//	printf("age:  %d\n", s.age);
//	printf("sex:  %s\n", s.sex);
//}
//
//void print2(Stu* s)
//{
//	printf("id:   %d\n", s->id);
//	printf("name: %s\n", s->name);
//	printf("age:  %d\n", s->age);
//	printf("sex:  %s\n", s->sex);
//}
//
//int main()
//{
//	stu s1 = { 20220710,"tony",20,"male" };
//	print1(s1);//传结构体
//	print2(&s1);//传地址（较省资源）
//	return 0;
//}


//以下为调试代码的test

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	int sum = 0;
	int j = 0;
	for (j = 1; j <= n; j++)
	{
		for (i = 1, ret = 1; i <= j; i++)//ret每次经过这个for循环都应该初始化为1
		{
			ret *= i;
		}
		sum += ret;
	}
	
	//for (i = 1; i <= n; i++)
	//{
	//	ret = ret * i;
	//	sum = sum + ret;
	//}


	printf("%d\n", sum);

	return 0;
}