#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////BC38 变种水仙花
//int main()
//{
//    int i = 0;
//    for (i = 10000; i < 100000; i++)
//    {
//        int sum = 0;
//        int j = 0;
//        for (j = 10; j < 100000; j *= 10)
//        {
//            sum += ((i / j) * (i % j));
//        }
//        if (i == sum)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}



////调整数组使奇数全部都位于偶数前面。
//void sort(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz;
//	int tmp = 0;
//	while (left <= right)
//	{
//		if (arr[right] % 2 == 0)
//		{
//			right--;
//			continue;
//		}
//		if (arr[left] % 2 != 0)
//		{
//			left++;
//			continue;
//		}
//		else
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 9,3,6,8,0,1,6,2,7,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int i = 0;
//	sort(arr, sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



////模拟实现库函数strcpy
//#include<assert.h>
//char* my_strcpy(char* des, const char* sou)
//{
//	assert(des);//断言
//	assert(sou);
//	char* ret = des;
//	while (*des++ = *sou++);
//	return des;
//}
//
//
//int main()
//{
//	char arr1[20] = "##############";
//	char arr2[20] = "hello world!";
//	printf("%s\n", arr1);
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}


//#include<assert.h>
////模拟实现库函数strlen
//int my_strlen(const char* arr)
//{
//	assert(arr != NULL);
//	int count = 0;
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



////BC96-有序序列判断
//int main()
//{
//    int  n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int i = 0;
//    int flag1 = 1;
//    int flag2 = 1;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] > arr[i + 1])
//        {
//            flag1 = 0;
//        }
//        if (arr[i] < arr[i + 1])
//        {
//            flag2 = 0;
//        }
//    }
//
//    if (flag1 == 1 || flag2 == 1)
//    {
//        printf("sorted\n");
//    }
//    else {
//        printf("unsorted\n");
//    }
//
//    return 0;
//}




////BC95-最高分和最低分之差
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int i = 0;
//    int max = 0;
//    int min = 10000;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (min > arr[i])
//        {
//            min = arr[i];
//        }
//        if (max < arr[i])
//        {
//            max = arr[i];
//        }
//    }
//    printf("%d\n", max - min);
//    return 0;
//}