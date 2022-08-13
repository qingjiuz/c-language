#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//  int a[5] = {5, 4, 3, 2, 1};
//  int *ptr = (int *)(&a + 1);
//  printf( "%d,%d", *(a + 1), *(ptr - 1));
//  return 0;
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = &arr;
//	printf("%p\n", p);	 //0x000068
//	printf("%p\n", p+1); //0x00006C
//
//	p = (int*)(&arr + 1);
//	printf("%p\n", p);	 //0x00007C
//	printf("%p\n", p-1); //0x000078
//
//	return 0;
//}


//int cmp_num(const void* ap, const void* bp)
//{
//	return (*(int*)ap - *(int*)bp);
//}
//
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(int), cmp_num);
//	print(arr, sz);
//}
//
//typedef struct Stu {
//	char name[10];
//	int age;
//}S;
//
//int cmp_Stu_name(const void* ap, const void* bp)
//{
//	return strcmp(((S*)ap)->name, ((S*)bp)->name);
//}
//
//int cmp_Stu_age(const void* ap, const void* bp)
//{
//	return (((S*)ap)->age - ((S*)bp)->age);
//}
//
//void test2()
//{
//	S s[3] = { {"zhangsan", 20}, {"lisi", 50},{"wangwu", 30} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_Stu_name);
//	qsort(s, sz, sizeof(s[0]), cmp_Stu_age);
//}
//
//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* ap, const void* bp))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//void test3()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_num);
//	print(arr, sz);
//}
//
//void test4()
//{
//	S s1[3] = { {"zhangsan", 20}, {"lisi", 50},{"wangwu", 30} };
//	int sz = sizeof(s1) / sizeof(s1[0]);
//	//bubble_sort(s1, sz, sizeof(s1[0]), cmp_Stu_age);
//	bubble_sort(s1, sz, sizeof(s1[0]), cmp_Stu_name);
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//
//	return 0;
//}



int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}


void menu()
{
	printf("***************************\n");
	printf("***** 1.add    2. sub  ****\n");
	printf("***** 3.mul    4. div  ****\n");
	printf("***** 0.exit           ****\n");
	printf("***************************\n");
}

void cla(int (*p)(int, int))
{
	int x = 0;
	int y = 0;
	int sum = 0;
	printf("请输入两个数字:>");
	scanf("%d %d", &x, &y);
	printf("%d\n", p(x, y));
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);		
		switch (input)
		{
		case 1:
			cla(Add);
			break;
		case 2:	
			cla(Sub);
			break;
		case 3:
			cla(Mul);
			break;
		case 4:
			cla(Div);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}
