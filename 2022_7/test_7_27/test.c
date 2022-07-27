#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//double power(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if(k > 0)
//	{
//		return n * power(n, k - 1);
//	}
//	else
//	{
//		return (1.0 / n) * power(n, k + 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = power(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}


//int DigitSum(int n)
//{
//	if (n > 0)
//	{
//		return (n % 10) + DigitSum(n / 10);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}


//void reverse_string(char* string)
//{
//	char ch = *string;//第一个元素
//	char* p = string;//第一个元素的地址
//	if (*(string + 1) != '\0')
//	{
//		//找到'\0'前一位,并将它的值存起来，最后附上'\0'
//		while (*(string + 1) != '\0')
//		{
//			string++;
//		}
//		*p = *string;
//		*string = '\0';
//		reverse_string(p + 1);
//		//找到最后一组字符串后，将'\0'更改
//		*string = ch;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//int my_strlen1(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen1(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int my_strlen2(char* arr)
//{
//	int count = 0;
//	while (*arr++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen1(arr);
//	printf("%d\n", ret);
//	ret = my_strlen2(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//    int n = 0;
//    long sum = 0;
//    scanf("%d", &n);
//    while (n > 0)
//    {
//        sum += n--;
//    }
//    printf("%ld\n", sum);//打印long的整形字符
//    return 0;
//}


//int Fib1(int n)
//{
//	if (n > 2)
//	{
//		return Fib1(n - 1) + Fib1(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n-- > 2)
//	{
//		c = a + b;
//		b = a;
//		a = c;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib1(n);
//	printf("%d\n", ret);
//	ret = Fib2(n);
//	printf("%d\n", ret);
//	return 0;
//}


//辗转相除法 求两个数的公约数
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int r = 0;
//	scanf("%d %d", &n, &m);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

