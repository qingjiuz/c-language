#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	unsigned char a = 200;
//	//0000 0000 0000 0000 0000 0000 1100 1000  ---200
//	//1100 1000 ---a
//
//	unsigned char b = 100;
//	//0000 0000 0000 0000 0000 0000 0110 0100  ---100
//	//0110 0100 ---b
//
//	unsigned char c = 0;
//
//	c = a + b;
//	//  11001000
//	//  01100100
//	//1 00101100 ---44
//
//	printf("% d % d", a + b, c);//a+b进行整形提升
//	return 0;
//}


#include<string.h>
//int main()
//{
//    char a[1000] = { 0 };// -128~127
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;//-1 -2 -3 -4... -127 -128 127 ... 0
//    }
//    printf("%d", strlen(a));//255
//    return 0;
//}


//A选手说：B第二，我第三；3
//B选手说：我第二，E第四；1
//C选手说：我第一，D第二；5
//D选手说：C最后，我第三；2
//E选手说：我第四，A第一；4
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1 &&
//							(b == 2) + (e == 4) == 1 &&
//							(c == 1) + (d == 2) == 1 &&
//							(c == 5) + (d == 3) == 1 &&
//							(e == 4) + (a == 1) == 1 &&
//							(a * b * c * d * e == 120))
//							printf("%d %d %d %d %d \n", a, b, c, d, e);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	for (a = 0; a < 2; a++)
//	{
//		for (b = 0; b < 2; b++)
//		{
//			for (c = 0; c < 2; c++)
//			{
//				for (d = 0; d < 2; d++)
//				{
//					if ((a!=0) && (c==0) && !(d==0) && (a+b+c+d == 3))
//						printf("%d %d %d %d \n", a, b, c, d );
//				}
//			}
//		}
//	}
//	
//	int i = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		if ((i != 1) && (i == 3) && !(i == 4))
//			printf("%d\n", i);
//	}
//
//	return 0;
//}




////杨辉三角
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	int n = 0;
//	scanf("%d", &n);
//	
//	int arr[100][100];
//
//	//每行前后都赋值1
//	for (i = 0; i < n; i++)
//	{ 
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//
//	//中间数赋值
//	for (i = 2; i < n; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//
//	//打印
//	for (i = 0; i < n; i++)
//	{
//		for(j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0x11223344;
//
//	return 0;
//}


int check_sys()
{
	int i = 1;
	return (*(char*) & i);
}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}