#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

//int main()
//{
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	reverse(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//void init(int arr[], int sz, char a)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*arr++ = a - '0';
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//init(arr, sz, '0');
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}



//void Swap(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr1[5] = { 2,5,6,7,9 };
//	int arr2[5] = { 6,9,7,1,3 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Swap(arr1, arr2, sz);
//	print(arr1, sz);
//	print(arr2, sz);
//	return 0;
//}

//int count_num(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		int n = (a >> i) & 1;
//		if (n == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int count_num2(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}

//int count_bit_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//
//int get_diff_bit(int a, int b)
//{
//	int count = 0;
//	int tmp = a ^ b;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int count = 0;
//	int na = 0;
//	scanf("%d%d", &a, &b);
//	//for (i = 0; i < 32; i++)
//	//{
//	//	int n1 = (a >> i) & 1;
//	//	int n2 = (b >> i) & 1;
//	//	if (n1 != n2)
//	//	{
//	//		count++;
//	//	}
//	//}
//	count = get_diff_bit(a, b);
//	printf("%d\n", count);
//
//	//b = count_bit_one(a);
//	//printf("%d\n", b);
//	return 0;
//}

//void print(int n)
//{
//	int odd = 0;
//	int even = 0;
//	int i = 0;
//	//奇数
//	for (i = 30; i >= 0; i -= 2)
//	{
//		odd = (n >> i) & 1;
//		printf("%d", odd);
//	}
//	printf("\n");
//	//偶数
//	for (i = 31; i >= 0; i -= 2)
//	{
//		even = (n >> i) & 1;
//		printf("%d", even);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 15;
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	//a-->1010
//	//b-->1111
//	a = a ^ b;//a-->0101
//	b = a ^ b;//b-->1010
//	a = a ^ b;//a-->1111
//	printf("%d %d\n", a, b);
//	return 0;
//}

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

#include<stdlib.h>
#include<math.h>

//void prime_num()
//{
//	int i = 0;
//	for (i = 101; i < 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}	
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//}
//
//int main()
//{
//	prime_num();
//	return 0;
//}

void leap_year(int year)
{
	if (((year % 4) == 0 && (year % 100) != 0) || (year % 400) == 0)
	{
		printf("%d是闰年\n", year);
	}
	else
	{
		printf("%d不是闰年\n", year);
	}
}

int main()
{
	int year = 0;
	scanf("%d", &year);
	leap_year(year);
	return 0;
}