#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i;
	int j;
	int count = 0;

	for (i = 101; i <= 200; i+=2)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d\n", i);
			count++;
		}

	}
	printf("%d", count);
	return 0;
}

//int main()   //err
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		if ((i % 2 != 0) && (i % 3 != 0) && (i % 5 != 0))
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i;
//	int count = 0;
//
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4) == 0 && (i%100) != 0 || (i%400) == 0)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int tmp = 0;
//	int i;
//
//	scanf("%d%d", &num1, &num2);
//	
//	while (tmp = num1 % num2)
//	{
//		//tmp = num1 % num2;
//		num1 = num2;
//		num2 = tmp;
//	}
//
//	//for (i = 1; i < num1 || i < num2; i++)
//	//{
//	//	if ((num1 % i == 0) && (num2 % i == 0))
//	//	{
//	//		tmp = i;
//	//		
//	//	}
//	//}
//	printf("最大公因数是：%d",num2);
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 3;
//	int c = 2;
//	int num = 0;
//
//	while (a < b || b < c || a < c)
//	{
//		if (a < b)
//		{
//			num = b;
//			b = a;
//			a = num;
//		}
//
//		if (b < c)
//		{
//			num = c;
//			c = b;
//			b = num;
//		}
//	}
//
//	//if (a < b)
//	//{
//	//	num = b;
//	//	b = a;
//	//	a = num;
//	//}
//
//	//if (a < c)
//	//{
//	//	num = c;
//	//	c = a;
//	//	a = num;
//	//}
//
//	//if (b < c)
//	//{
//	//	num = c;
//	//	c = b;
//	//	b = num;
//	//}
//
//
//	printf("%d%d%d", a, b, c);
//	return 0;
//}

//int main()    //error
//{
//	int arr[] = {3,6,4};
//	int num = 0;
//	if (arr[0] < arr[1])
//	{
//		num = arr[0];
//		arr[0] = arr[1];
//		arr[1] = num;
//	}
//	else if (arr[1] < arr[2])
//	{
//		num = arr[1];
//		arr[1] = arr[2];
//		arr[2] = num;
//	}
//
//	if (arr[1] < arr[2])
//	{
//		num = arr[1];
//		arr[1] = arr[2];
//		arr[2] = num;
//	}
//	printf("%d", arr);
//	return 0;
//}    


//int main()
//{
//	int i = 0;
//	char password_user[20] = {0};
//	for (i = 1; i <= 3; i++)
//	{
//
//		printf("请输入密码：");
//		scanf("%s", password_user);
//		if (strcmp(password_user, "123456") == 0)
//		{
//			printf("登陆成功！！！\n");
//			break;
//		}
//		else if(i < 3)
//		{
//			printf("已错误输入密码%d次，请重新输入正确的密码\n", i);
//		}
//		else if(i == 3)
//		{
//			printf("已错误输入三次密码，请等待24小时后再试！！！");
//		}
//	}
//	//if (i == 3)
//	//{
//	//	printf("已错误输入三次密码，请等待24小时后再试！！！");
//	//}
//		return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to China!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		if (left >= right)
//		{
//			break;
//		}
//
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	
//	while (right>=left)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//		
//	}
//	if (left > right)
//	{
//		printf("找不到数据");
//	}
//	return 0;
//}