#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////main函数是程序的主入口
////理论上可以放在任何地方，但是不能没有main函数
//int main()
//{
//	printf("hello world!");
//	return 0;
//}

//int main()
//{
//	
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}


////计算两个数的和
//int main()
//{
//	//声明变量一定要在最前面
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}


////全局变量
//int a = 20;
//int main()
//{
//	//局部变量
//	int a = 10;
//	printf("%d\n", a);//10
//}


int a = 10;
void test()
{
	int a = 20;
	printf("%d\n", a);//20
}

int main()
{
	printf("%d\n", a);//10
	test();
	return 0;
}

//程序会先使用局部变量，若没有局部变量才会使用全局变量
//全局变量和局部变量的变量名可以相同
//extern是用来声明外部符号的

