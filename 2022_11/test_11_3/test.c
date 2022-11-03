#include"SList.h"

void test1()
{
	//创建单链表
	SListNode* plist = CreateSList(10);

	//打印
	SListPrint(plist);
}

void test2()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 10);
	SListPushBack(&plist, 20);
	SListPushBack(&plist, 30);

	SListPopBack(&plist);
	SListPrint(plist);

	SListPopBack(&plist);
	SListPrint(plist);

	SListPopBack(&plist);
	SListPrint(plist);


}

void test3()
{
	SListNode* plist = NULL;

	SListPushFront(&plist, 10);
	SListPushFront(&plist, 20);
	SListPushFront(&plist, 30);
	SListPushFront(&plist, 40);
	SListPrint(plist);

	SListPopFront(&plist);
	SListPrint(plist);

	SListPopFront(&plist);
	SListPrint(plist);

	SListPopFront(&plist);
	SListPrint(plist);

	SListPopFront(&plist);
	SListPrint(plist);

	//SListPopFront(&plist);
	//SListPrint(plist);


}

void test4()
{
	SListNode* plist = NULL;
	//SListNode* pplist = NULL;

	SListPushFront(&plist, 10);
	SListPushFront(&plist, 20);
	SListPushFront(&plist, 30);
	SListPushFront(&plist, 40);

	SListPrint(plist);

	//SListNode* ptr = SListFind(plist, 10);
	//if (ptr == NULL)
	//{
	//	printf("找不到\n");
	//}
	//else
	//{
	//	//printf("[%d|%p]\n", ptr->data, ptr->next);
	//	SListInsertAfter(ptr, 5);
	//}
	//SListPrint(plist);

	SListNode* ptr = SListFind(plist, 20);
	if (ptr == NULL)
	{
		printf("找不到\n");
	}
	else
	{
		//printf("[%d|%p]\n", ptr->data, ptr->next);
		SListEraseAfter(ptr);
	}
	SListPrint(plist);


}

void test5()
{
	SListNode* plist = NULL;

	SListPushFront(&plist, 10);
	SListPushFront(&plist, 20);
	SListPushFront(&plist, 30);
	SListPushFront(&plist, 40);

	SListPrint(plist);

	SListDestroy(&plist);

}

int main()
{
	//test1();

	//test2();

	//test3();

	//test4();

	test5();

	return 0;
}
