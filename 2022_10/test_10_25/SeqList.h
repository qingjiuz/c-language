#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>


#define N 10

//静态储存的顺序表
//typedef int SLDataType;
//
//typedef struct SeqList
//{
//	SLDataType arr[N];
//	int sz;
//}SL;

//动态储存的顺序表
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* arr;
	int sz;//有效数据大小
	int capicity;//容量大小
}SL;

//初始化
void SLInit(SL* ps);

//尾插
void SLPushBack(SL* ps, SLDataType x);
