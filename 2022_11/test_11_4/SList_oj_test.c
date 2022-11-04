#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int SLTDateType;
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next;
}SListNode; 


SListNode* BuySListNode(SLTDateType x)
{
	SListNode* ptr = (SListNode*)malloc(sizeof(SListNode));
	if (ptr == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	ptr->data = x;
	ptr->next = NULL;
	return ptr;
}

//创建单链表
SListNode* CreateSList(int* arr, int sz)
{
	SListNode* phead = NULL, * ptail = NULL;
	for (int i = 0; i < sz; i++)
	{
		//scanf();
		SListNode* newnode = BuySListNode(arr[i]);
		if (phead == NULL)
		{
			phead = ptail = newnode;
		}
		else
		{
			ptail->next = newnode;
			ptail = newnode;
		}
	}
	return phead;
}

//打印
void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}




int main()
{
	int arr[] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	SListNode* plist = CreateSList(arr, sz);

	//SListPrint(plist);
	int val = 0;
	SListNode* ptr = NULL;//要测试的函数
	SListPrint(ptr);

	return 0;
}