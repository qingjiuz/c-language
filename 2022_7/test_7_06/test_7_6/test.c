#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char b = 0;
//	char* pb = &b;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pb);
//	printf("%p\n", pb + 1);
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int* pa = &a;
//	//*pa = 5;
//	//printf("%d\n", *pa);
//	//printf("%d\n", a);
//	//printf("%p\n", pa);
//
//	int a = 0x11223344;
//	char* pa = &a;
//	int* pb = &a;
//	*pa = 0;//char只能访问1个字节
//	*pb = 0;//int能访问4个字节
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char ch[] = "hello";
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[5];
//	int* arrp;
//	for (arrp = &arr[5]; arrp > arr[0];)
//	{
//		*arrp-- = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//		//printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int* pa = &a;
//	//int** ppa = &pa;//ppa为二级指针
//	//**ppa = 20;
//	//printf("%d\n", **ppa);
//	//printf("%d\n", *pa);
//	//printf("%d\n", a);
//
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };//指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//
//	return 0;
//}

//void Bubble_sort(int arr[10], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (j = 0; j < sz - 1; j++)
//	{
//		int flag = 1;
//		int tmp = 0;
//		for (i = 0; i < sz - 1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//				flag = 0;
//			}
//			if (flag == 1)
//			{
//				break;
//			}
//		}
//		
//	}
//}
//
//int main()
//{
//	int arr[10] = { 10,7,6,8,2,5,4,3,9,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	Bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	
//	return 0;
//}


