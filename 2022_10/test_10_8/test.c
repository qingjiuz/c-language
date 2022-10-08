#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cde";
//	char * p = strstr(arr1, arr2);
//	if (p != NULL)
//		printf("找到了\n");
//	else
//		printf("找不到\n");
//	return 0;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//
//	if (s2 == NULL)
//		return str1;
//
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while ((*s1 != '\0') && (* s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cde";
//	char* p = my_strstr(arr1, arr2);
//	if (p != NULL)
//		printf("找到了\n");
//	else
//		printf("找不到\n");
//
//	return 0;
//}
//


////模拟实现memcpy
//#include<assert.h>
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	assert(dest || src);
//	void* ret = dest;
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int arr2[10] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr2, arr1, sizeof(arr1));
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//


//模拟实现memmove
#include<assert.h>
void* my_memmove(void* dest, void* src, size_t num)
{
	assert(dest || src);
	void* ret = dest;
	while (num--)
	{
		if (dest < src)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
		else
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };

	//memmove(arr + 2, arr, 20);
	my_memmove(arr + 2, arr, 20);

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}