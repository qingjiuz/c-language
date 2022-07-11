#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//void my_strcpy(char* arr1, char* arr2)
//{
//	//for (; *arr2 != '\0';)
//	//{
//	//	*arr1 = *arr2;
//	//	arr1++;
//	//	arr2++;
//	//}
//	//*arr1 = *arr2;
//
//	//while (*arr2 != '\0')
//	//{
//	//	*arr1 = *arr2;
//	//	arr1++;
//	//	arr2++;
//	//}
//	//*arr1 = *arr2;
//
//	while (*arr2 != '\0')
//	{
//		*arr1++ = *arr2++;
//	}
//	*arr1 = *arr2;
//}

#include<assert.h>
char* my_strcpy(char* arr1, const char* arr2)
{
	assert(arr1 != NULL);//断言
	assert(arr2 != NULL);//断言
	char* ret = arr1;
	while (*arr1++ = *arr2++)
	{
		;
	}
	return ret;
}
//1. while()
//2. const
//3. void -> char*
//4. assert

int main()
{
	char arr1[20] = "xxxxxxxxxxxxxx";
	char arr2[] = "hello";
	
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}


//int main()
//{
//	//const修饰变量，使变量转变为常变量，不能被修改，本质上还是变量
//	const int num = 10;
//	//num = 20;
//
//
//	const int * p = &num;
//	//const修饰指针时，const放在*的左边修饰*p，表示指针的内容，不能通过指针修改
//	//		因为const没有修饰指针变量本身，因此指针变量本身可以被修改
//	//*p = 20;
//	int n = 100;
//	p = &n;
//
//
//	//int* const p = &num;
//	////当const在*右边时，修饰的是指针变量p，表示指针变量不能被改变
//	////			但是指针指向的内容可以随便改
//	//*p = 20;
//	//int n = 100;
//	////p = &n;
//
//
//	//int** pp = &p;
//	//**pp = 20;
//
//
//	printf("%d\n", num);
//	return 0;
//}