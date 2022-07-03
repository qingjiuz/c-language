#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//int a = 10;
	//short b = 0;
	//printf("%d\n", sizeof(b = a + 5));//2   sizeof()--sizeof函数括号内部不进行运算
	//printf("%d\n", b); //0

	//int a = 0;
	//char b = 'b';
	//int arr[10] = { 0 };

	//printf("%d\n", sizeof(a));// 4
	//printf("%d\n", sizeof(int));

	//printf("%d\n", sizeof(b));// 1
	//printf("%d\n", sizeof(char));

	//printf("%d\n", sizeof(arr));//4*10
	//printf("%d\n", sizeof(int [10]));

	int  a = 3;
	int* b = &a;
	*b = 5;
	printf("%d\n", a);
	printf("%p\n", &b);

	return 0;
}