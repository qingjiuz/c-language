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
//	printf("% d % d", a + b, c);//a+b������������
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


//Aѡ��˵��B�ڶ����ҵ�����3
//Bѡ��˵���ҵڶ���E���ģ�1
//Cѡ��˵���ҵ�һ��D�ڶ���5
//Dѡ��˵��C����ҵ�����2
//Eѡ��˵���ҵ��ģ�A��һ��4
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



//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���

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




////�������
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
//	//ÿ��ǰ�󶼸�ֵ1
//	for (i = 0; i < n; i++)
//	{ 
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//	}
//
//	//�м�����ֵ
//	for (i = 2; i < n; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//
//	//��ӡ
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
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}