#include "SeqList.h"



//void test()
//{
//	SL s;
//	SLInit(&s);
//
//	SLPushBack(&s, 1);
//	SLPushBack(&s, 2);
//	SLPushBack(&s, 3);
//	SLPushBack(&s, 4);
//	SLPrint(&s);
//	SLPopBack(&s);
//	SLPopBack(&s);
//	SLPrint(&s);
//
//	SLDestroy(&s);
//}
//
//int main()
//{
//	test();
//	return 0;
//}


////ö��
//enum Color
//{
//	Red = 5,
//	Green = 7,
//	Blue = 2
//};
//
//int main()
//{
//	//enum Color cl = Blue;
//	//int num = Red;
//	//int sum = Blue + Red;
//	//printf("%d\n", sum);
//
//	//printf("%d\n", sizeof(enum Color));
//
//	return 0;
//}

////������
//union Un
//{
//	int a;
//	char b[10];
//	double c;
//};
//
//int checl_sys()
//{
//	union cs
//	{
//		int a;
//		char b;
//	}u;
//	u.a = 1;
//	return u.b;
//}
//
//int main()
//{
//	//union Un un;
//	//printf("%d\n", sizeof(union Un));
//
//	int ret = checl_sys();
//	if (ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	return 0;
//}


//��̬�ڴ�
//int main()
//{
//	//�����ڴ�
//	int* tmp = (int*)malloc(40);
//	if (tmp == NULL)
//	{
//		//perror("malloc");
//		printf("%s\n", strerror(errno));
//		return -1;
//	}
//	int* p = tmp;
//
//	//ʹ��
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*tmp = i;
//		tmp++;
//	}
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}

int main()
{
	//����ռ�
	int* tmp = (int*)calloc(10, sizeof(int));//Ĭ�ϳ�ʼ��
	if (tmp == NULL)
	{
		perror("calloc");
		return -1;
	}
	int* p = tmp;

	//ʹ��
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i) = i);
	}
	printf("\n");

	//���ӿռ�
	tmp = (int*)realloc(p, 20 * sizeof(int));//���յ��ڴ��С
	if (tmp == NULL)
	{
		perror("calloc");
		return -1;
	}
	p = tmp;
	tmp = NULL;

	//ʹ��
	for (int i = 10; i < 20; i++)
	{
		printf("%d ", *(p + i) = i);
	}

	//�ͷ�
	free(p);
	p = NULL;

	return 0;
}

//calloc = malloc + memset


