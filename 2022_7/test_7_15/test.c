#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////main�����ǳ���������
////�����Ͽ��Է����κεط������ǲ���û��main����
//int main()
//{
//	printf("hello world!");
//	return 0;
//}

//int main()
//{
//	
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}


////�����������ĺ�
//int main()
//{
//	//��������һ��Ҫ����ǰ��
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}


////ȫ�ֱ���
//int a = 20;
//int main()
//{
//	//�ֲ�����
//	int a = 10;
//	printf("%d\n", a);//10
//}


int a = 10;
void test()
{
	int a = 20;
	printf("%d\n", a);//20
}

int main()
{
	printf("%d\n", a);//10
	test();
	return 0;
}

//�������ʹ�þֲ���������û�оֲ������Ż�ʹ��ȫ�ֱ���
//ȫ�ֱ����;ֲ������ı�����������ͬ
//extern�����������ⲿ���ŵ�

