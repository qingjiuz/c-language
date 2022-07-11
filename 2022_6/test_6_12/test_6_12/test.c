#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int sum1 = 0;
	int sum = 1;
	int n = 0;
	int i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
		sum1 = sum1 + sum;
	}
	printf("%d", sum1);
	return 0;
}



//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (1 == (i % 2))
//			printf("%d\n", i);
//		i++;
//
//	}
//
//	return 0;
//}