#include"SList.h"

 SListNode* BuySListNode(SLTDateType x)
{
	SListNode* ptr = (SListNode*)malloc(sizeof(SListNode));
	if (ptr == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	ptr->data = x;
	ptr->next = NULL;
	return ptr;
}

 //创建单链表
SListNode* CreateSList(int n)
{
	SListNode* phead = NULL, * ptail = NULL;
	for (int i = 0; i < n; i++)
	{
		//scanf();
		SListNode* newnode = BuySListNode(i);
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

//尾插
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	if (*pplist == NULL)
	{
		*pplist = newnode;
		return;
	}
	//找尾
	SListNode* ptail = *pplist;
	while (ptail->next)
	{
		ptail = ptail->next;
	}
	ptail->next = newnode;
}

//尾删
void SListPopBack(SListNode** pplist)
{
	assert(*pplist);
	if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		//找尾

		//error
		//while (ptail->next)
		//{
		//	ptail = ptail->next;
		//}
		//free(ptail->next);
		//ptail->next = NULL;

		//1. 
		//SListNode* ptail = *pplist, *prev = NULL;
		//while (ptail->next)
		//{
		//	prev = ptail;
		//	ptail = ptail->next;
		//}
		//free(ptail);
		//prev->next = NULL;

		//2. 
		SListNode* ptail = *pplist;
		while (ptail->next->next)
		{
			ptail = ptail->next;
		}
		free(ptail->next);
		ptail->next = NULL;
	}
}

//头插
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}

//头删
void SListPopFront(SListNode** pplist)
{
	assert(*pplist);
	SListNode* ptail = *pplist;
	*pplist = ptail->next;
	free(ptail);
}

//查找
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	SListNode* ptail = plist;
	while (ptail)
	{
		if (ptail->data == x)
		{
			return ptail;
		}
		else
		{
			ptail = ptail->next;
		}
	}
	return ptail;
}

// 单链表在pos位置之后插入x
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);
	SListNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

// 单链表删除pos位置之后的值
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	
	if (pos->next == NULL)
	{
		return;
	}

	SListNode* ptail = pos->next->next;
	free(pos->next);
	pos->next = ptail;

	//SListNode* nextNode = pos->next;
	//pos->next = nextNode->next;
	//free(nextNode);
}

// 单链表的销毁
void SListDestroy(SListNode** plist)
{
	assert(*plist);
	//while (*plist)
	//{
	//	SListPopFront(plist);
	//}
	//*plist = NULL;

	SListNode* cur = *plist;
	while (cur)
	{
		SListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*plist = NULL;
} 