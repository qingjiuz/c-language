#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//int a = 3;//011
	//int b = 5;//101
	//printf("before a=%d b=%d\n", a, b);
	////a = a + b; //8 -> 1000
	////b = a - b; //3 -> 1000 - 0101
	////a = a - b; //5 -> 1000 - 0011
	//a = a ^ b; // 110
	////  110
	////  101
	////b=011
	//b = a ^ b;
	////  110
	////  011
	////a=101
	//a = a ^ b;
	//printf("after a=%d b=%d\n", a, b);

	//a = a >> 1;
	//printf("%d\n", a);
	int a = -1; // 1010
	int count = 0;
	int i = 0;
	//for (i = 0; i < 32; i++)
	//{
	//	if (a % 2 == 1)
	//	{
	//		count++;
	//	}
	//	a = a / 2;
	//}

	//for (i = 0; i < 32; i++)
	//{
	//	if (a & 1 == 1)
	//	{
	//		count++;
	//	}
	//	a = a >> 1;
	//}

	while (a)
	{
		count++;
		a = a & (a - 1);
	}
	printf("%d\n", count);
	return 0;
}