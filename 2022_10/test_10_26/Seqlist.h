#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

//��̬�����˳���
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* arr;
	int sz;//��Ч���ݴ�С
	int capacity;//������С
}SL;

//��ʼ��
void SLInit(SL* ps);

//����
void SLDestroy(SL* ps);

//β��
void SLPushBack(SL* ps, SLDataType x);

//���
void SLPrint(SL* ps);

//βɾ
void SLPopBack(SL* ps);