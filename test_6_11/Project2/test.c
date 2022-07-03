#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


#define MAX(x , y) (x>y?x:y);
extern int Sum(int, int);
int main()
{
	extern int gob;
	static int a = 60;
	int b = 40;
	int sum = gob + Sum(a, b);
	int max = MAX(a, gob);
	printf("sum=%d\n", sum);
	printf("max= %d\n", max);

	return 0;
}