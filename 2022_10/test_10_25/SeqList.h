#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


#define N 10

//��̬�����˳���
//typedef int SLDataType;
//
//typedef struct SeqList
//{
//	SLDataType arr[N];
//	int sz;
//}SL;

//��̬�����˳���
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* arr;
	int sz;//��Ч���ݴ�С
	int capicity;//������С
}SL;

//��ʼ��
void SLInit(SL* ps);

//β��
void SLPushBack(SL* ps, SLDataType x);
