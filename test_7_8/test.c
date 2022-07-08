#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//void mul_table(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	mul_table(a);
//	return 0;
//}

//void print(int a)
//{
//	if (a > 0)
//	{
//		int n = a % 10;
//		print(a / 10);
//		printf("%d ", n);
//	}
//}
//
//int main()
//{
//	int a = 1234;
//	print(a);
//	return 0;
//}

//int farl(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	return n * farl(n - 1);
//}
//
//int farl2(int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d", &a);
//	n = farl2(a);
//	printf("%d\n", n);
//	return 0;
//}

//int my_strlen(char ch[])
//{
//	if (strcmp(ch, "\0") != 0)
//	{
//		return my_strlen(ch + 1) + 1;
//	}
//	return 0;
//}
//
//int my_strlen2(char ch[])
//{
//	int count = 0;
//	while (strcmp(ch, "\0") != 0)
//	{
//		count++;
//		ch++;
//	}
//	return count;
//}
//
//int main()
//{
//	char ch[] = "1234";
//	int a = 0;
//	//a = strlen(ch);
//	a = my_strlen2(ch);
//
//	printf("%d\n", a);
//	return 0;
//}


//int my_strlen(char* ch)
//{
//	int count = 0;
//	while (*ch != '\0')
//	{
//		count++;
//		ch++;
//	}
//	return count;
//}

//void reverse_string(char ch[])
//{
//	int left = 0;
//	int right = my_strlen(ch) - 1;
//	while (left < right)
//	{
//		int tmp = ch[left];
//		ch[left] = ch[right];
//		ch[right] = tmp;
//		left++;
//		right--;
//	}
//}

//void reverse_string(char ch[])
//{
//	int tmp = *ch;
//	int right = 0;
//	int count = 0;
//	for (; *ch != '\0'; ch++)
//	{
//		count++;
//	}
//	ch--;//回到'\0'前一位
//	right = *ch;//right赋值'\0'前一位
//	*ch = '\0';//'\0'前一位赋值'\0'
//	ch = ch - count + 1;//回到第一位元素
//	*ch = right;//第一位元素赋值最后一位
//	ch++;
//	if (*ch != '\0')
//	{
//		reverse_string(ch);
//		for (count = 0; *ch != '\0'; ch++)
//		{
//			count++;
//		}
//		*ch = tmp;//最后一位赋值第一位的元素
//	}
//	else if (*ch == '\0')
//	{
//		*ch = tmp;
//	}
//}


//int my_strlen(char* ch)
//{
//	int count = 0;
//	while (*ch != '\0')
//	{
//		count++;
//		ch++;
//	}
//	return count;
//}
//
//
//void reverse_string(char ch[])
//{
//	char tmp = ch[0];
//	int len = my_strlen(ch);
//	ch[0] = ch[len - 1];
//	ch[len - 1] = '\0';
//	if (my_strlen(ch + 1) >= 2)
//	{
//		reverse_string(ch + 1);
//	}
//	ch[len - 1] = tmp;
//}
//
//int main()
//{
//	char ch[] = "abcdef";
//	//int sz = strlen(ch) - 1;
//	//int sz = sizeof(ch) / sizeof(ch[0]);
//	reverse_string(ch);
//	printf("%s\n", ch);
//	return 0;
//}

//int Digitsum(int n)
//{
//	if (n / 10 != 0)
//	{
//		return Digitsum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	unsigned int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	sum = Digitsum(n);
//	printf("%d\n", sum);
//	return 0;
//}


//double power(int n, int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / (power(n, -k)));
//	}
//	else if (k > 0)
//	{
//		return n * power(n, k - 1);
//	}
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double sum = 0;
//	scanf("%d%d", &n, &k);
//	sum = power(n, k);
//	printf("%lf\n", sum);
//	return 0;
//}


//int Fib(int n)
//{
//	if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	else if(n <= 2)
//	{
//		return 1;
//	}
//}

int Fib(int n)
{
	int num1 = 1;
	int num2 = 1;
	int tmp = 0;
	int i = 0;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		for (i = 2; i < n; i++)
		{
			tmp = num1;
			num1 = num1 + num2;
			num2 = tmp;
		}
	}
	return num1;
}

int main()
{
	unsigned int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d", ret);
	return 0;
}