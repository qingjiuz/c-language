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
	assert(arr1 != NULL);//����
	assert(arr2 != NULL);//����
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
//	//const���α�����ʹ����ת��Ϊ�����������ܱ��޸ģ������ϻ��Ǳ���
//	const int num = 10;
//	//num = 20;
//
//
//	const int * p = &num;
//	//const����ָ��ʱ��const����*���������*p����ʾָ������ݣ�����ͨ��ָ���޸�
//	//		��Ϊconstû������ָ������������ָ�����������Ա��޸�
//	//*p = 20;
//	int n = 100;
//	p = &n;
//
//
//	//int* const p = &num;
//	////��const��*�ұ�ʱ�����ε���ָ�����p����ʾָ��������ܱ��ı�
//	////			����ָ��ָ������ݿ�������
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