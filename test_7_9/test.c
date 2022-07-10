#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//struct Stu
//{
//	int id;
//	char name[10];
//	short age;
//	char sex[5];
//};

typedef struct Stu
{
	int id;
	char name[10];
	short age;
	char sex[5];
}Stu;

int main()
{
	struct Stu s1 = { 20220709,"Tony",20,"Male" };
	Stu s2;
	return 0;
}