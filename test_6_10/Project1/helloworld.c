#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;

}



int main()
{
	//дһ���������������Ľϴ�ֵ
	int num1 = 0;
	int num2 = 0;
	int max = 0;
	scanf("%d%d", &num1, &num2);
	max = Max(num1, num2);
	printf("���ֵΪ��%d\n", max);





	/*if (num1 > num2)
		printf("�ϴ�ֵΪ%d\n", num1);
	else
		printf("�ϴ�ֵΪ%d\n", num2);*/





	return 0;
}

//int main()
//{
//	printf("%c\n", '\77');
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("��������1:");
//	scanf("%d", &a);
//	printf("��������2:");
//	scanf("%d", &b);
//	//printf("����������1��",scanf("%d", &a));
//	//printf("����������2��", scanf("%d", &b));
//	//scanf("%d%d", &a , &b);
//	c = a + b;
//	printf("�����%d\n" , c);
//	return 0;
//} 