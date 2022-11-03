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

 //����������
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

//��ӡ
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

//β��
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	if (*pplist == NULL)
	{
		*pplist = newnode;
		return;
	}
	//��β
	SListNode* ptail = *pplist;
	while (ptail->next)
	{
		ptail = ptail->next;
	}
	ptail->next = newnode;
}

//βɾ
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
		//��β

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

//ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	newnode->next = *pplist;
	*pplist = newnode;
}

//ͷɾ
void SListPopFront(SListNode** pplist)
{
	assert(*pplist);
	SListNode* ptail = *pplist;
	*pplist = ptail->next;
	free(ptail);
}

//����
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

// ��������posλ��֮�����x
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);
	SListNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

// ������ɾ��posλ��֮���ֵ
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

// �����������
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