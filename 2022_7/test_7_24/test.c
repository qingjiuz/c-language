#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, , i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



int main()
{
	int arr[] = { 1,2,3,4,10,16,7,8,10,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int max = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max=%d",max);
	
	return 0;
}