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



 //typedef struct ListNode {
 //    int data;
 //    struct ListNode *next;
 //}SListNode;
 


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


//struct ListNode* removeElements(SListNode* phead, int val)
//{
//	struct ListNode* ptail = NULL, * cur = phead, * newhead = NULL;
//
//	if (phead == NULL)
//	{
//		return phead;
//	}
//
//	while (cur)
//	{
//		if (cur->data != val)
//		{
//			if (newhead == NULL)
//			{
//				ptail = newhead = cur;
//			}
//			else
//			{
//				ptail->next = cur;
//				ptail = ptail->next;
//			}
//			cur = cur->next;
//		}
//		else
//		{
//			struct ListNode* ptr = cur->next;
//			free(cur);
//			cur = ptr;
//		}
//	}
//
//	if (newhead == NULL)
//	{
//		return NULL;
//	}
//
//	ptail->next = NULL;
//	return newhead;
//	
//}


int main()
{
	int arr[] = { 7, 7, 7, 7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	SListNode* plist = CreateSList(arr, sz);

	//SListPrint(plist);
	int val = 7;
	SListNode* ptr = removeElements(plist, val);
	SListPrint(ptr);

	return 0;
}