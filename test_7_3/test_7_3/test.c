#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	short b = 0;
//	printf("%d\n", sizeof(b = a + 5));//2   sizeof()--sizeof函数括号内部不进行运算
//	printf("%d\n", b); //0
//
//	//int a = 0;
//	//char b = 'b';
//	//int arr[10] = { 0 };
//
//	//printf("%d\n", sizeof(a));// 4
//	//printf("%d\n", sizeof(int));
//
//	//printf("%d\n", sizeof(b));// 1
//	//printf("%d\n", sizeof(char));
//
//	//printf("%d\n", sizeof(arr));//4*10
//	//printf("%d\n", sizeof(int [10]));
//
//	//int  a = 3;
//	//int* b = &a;//取地址操作符
//	//*b = 5;//解引用操作符
//	//printf("%d\n", a);
//	//printf("%p\n", &b);
//
//	return 0;
//}

//int main()
//{
//	int a = 11;//00000000000000000000000000001011
//	a = a | (1 << 2);//00000000000000000000000000001111
//	printf("%d\n", a);
//	
//	a = a & ~(1 << 2);
//	printf("%d\n", a);
//
//	//int a = 0;
//	////00000000000000000000000000000000
//	////11111111111111111111111111111111 补码
//	////11111111111111111111111111111110 反码
//	////10000000000000000000000000000001 源码 -1
//	//printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);//10
//	printf("%d\n", ++a);//11
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);// 4/8
//	test2(ch);// 4/8
//
//	return 0;
//}

int main()
{
	int a = 11;//1011
	int b = 6;//0110
	int c = 0;
	c = a & b;//0010  --> 2
	printf("%d\n", c);

	c = a | b;//1111  -->15
	printf("%d\n", c);
	return 0;
}