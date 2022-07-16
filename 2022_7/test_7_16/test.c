#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	//float a;
//	//scanf("%f", &a);
//	//printf("%0.2f", a);
//	//printf("%d", (int)a);
//	
//	double a;
//	scanf("%lf", &a);
//	printf("%.2lf\n", a);
//	printf("%d\n", (int)a);
//
//	//打印浮点数时使用%.nf(单精度)或%.nlf(双精度)会直接四舍五入
//	//浮点数转整数需要四舍五入时，只需要在浮点数上加上0.5，然后将浮点数强制类型转换即可
//
//	return 0;
//}



////查找两个整数的较大值
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("max=%d\n", Max(a, b));
//	return 0;
//}



////#define MAX 10
//
//enum Sex
//{
//	Male,
//	Female,
//	Secret
//};
//
//int main()
//{
//	//1.字面值常量
//	//100
//	//3.14
//	//'a'
//	//"abc"
//	
//	//2.const修饰的常变量
//	//const int a = 10;
//	//a = 20;//err
//	//int arr[a] = 0;//err
//
//	//3.#define定义的标识符常量
//	//printf("%d", MAX);
//	//MAX = 200;//err
//
//	//4.枚举常量enum
//	//enum Sex s = Male;
//	//printf("%d\n", s);//0
//	
//
//	return 0;
//}


//int main()
//{
//	//'\'为转义字符
//	//printf("abcd\n");
//	printf("\130\n");
//	printf("\x30\n");
//	printf("%c\n", 65);
//
//	return 0;
//}

//三字母词

//int main()
//{
//	printf("(Are you ok\?\?)");
//	//??) --> ]
//	//??( --> [
//	return 0;
//}


int main()
{
	//数组的创建
	int arr[] = { 1,2,3,4,5,6 };
	//err
	//int n = 10;
	//int arr1[n] = { 0 };
	return 0;
}