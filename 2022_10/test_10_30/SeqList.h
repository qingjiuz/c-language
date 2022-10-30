#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

//动态储存的顺序表
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* arr;
	int sz;//有效数据大小
	int capacity;//容量大小
}SL;

//初始化
void SLInit(SL* ps);

//销毁
void SLDestroy(SL* ps);

//尾插
void SLPushBack(SL* ps, SLDataType x);
//尾删
void SLPopBack(SL* ps);

//头插
void SLPushFront(SL* ps, SLDataType x);
//头删
void SLPopFront(SL* ps);

//扩容
void SLCapacity(SL* ps);

//输出
void SLPrint(SL* ps);

//中间插入删除
void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);

//查找
int SLFind(SL* ps, SLDataType x);
//拓展
int SLFind2(SL* ps, SLDataType x, int begin);

