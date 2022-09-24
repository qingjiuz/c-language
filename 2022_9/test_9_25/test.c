#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<string.h>


//模拟实现strlen
//size_t my_strlen(const char * str)
//{
//	assert(str);
//	const char* rat = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - rat;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%zd\n", my_strlen(arr));
//	return 0;
//}

//模拟实现strcpy
//char* my_strcpy(char * dest, const char * sour)
//{
//	assert(dest && sour);
//	char* ret = dest;
//	while (*dest++ = *sour++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "********";
//	char arr2[] = "abcdef";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	
//	return 0;
//}


//模拟实现strcmp
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	//char arr1[] = "abcdef";
//	//char arr2[] = "abp";
//
//	//char arr1[] = "abc";
//	//char arr2[] = "abc";
//
//	char arr1[] = "abc";
//	char arr2[] = "abcdef";
//
//
//	printf("%d\n", my_strcmp(arr1, arr2));
//
//	return 0;
//}
//


//模拟实现strcat
//char * my_strcat(char* dest, const char* sour)
//{
//	assert(dest && sour);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *sour++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world!";
//
//	printf("%s\n", my_strcat(arr1, arr2));
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "h";
//
//	char* p = strstr(arr1, arr2);
//	if (p != NULL)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("null\n");
//	}
//
//	return 0;
//}
