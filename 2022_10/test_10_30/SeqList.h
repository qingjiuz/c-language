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
//βɾ
void SLPopBack(SL* ps);

//ͷ��
void SLPushFront(SL* ps, SLDataType x);
//ͷɾ
void SLPopFront(SL* ps);

//����
void SLCapacity(SL* ps);

//���
void SLPrint(SL* ps);

//�м����ɾ��
void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);

//����
int SLFind(SL* ps, SLDataType x);
//��չ
int SLFind2(SL* ps, SLDataType x, int begin);

