#include "SeqList.h"

//void testLS1()
//{
//	SL s;
//	SLInit(&s);
//
//	SLPushBack(&s, 1);
//	SLPushBack(&s, 2);
//	SLPushBack(&s, 3);
//	SLPushBack(&s, 4);
//	SLPushBack(&s, 5);
//
//	SLPrint(&s);
//
//	SLPopBack(&s);
//	SLPopBack(&s);
//	SLPopBack(&s);
//	
//	SLPrint(&s);
//
//
//	SLDestroy(&s);
//}

void testSL1()
{
	SL s;
	SLInit(&s);

	//SLPushFront(&s, 1);
	//SLPushFront(&s, 2);
	//SLPushFront(&s, 3);
	//SLPushFront(&s, 4);
	//SLPushFront(&s, 5);

	//SLPrint(&s);

	//SLPopFront(&s);
	//SLPopFront(&s);
	//SLPopFront(&s);
	//SLPopFront(&s);
	//SLPopFront(&s);

	//SLPrint(&s);

	//SLInsert(&s, 2, 10);

	//SLPushBack(&s, 1);
	//SLPushBack(&s, 2);
	//SLPushBack(&s, 3);
	//SLPushBack(&s, 4);
	//SLPushBack(&s, 5);

	SLInsert(&s, 0, 1);
	SLInsert(&s, 0, 3);
	SLInsert(&s, 0, 3);
	SLInsert(&s, 0, 4);
	SLInsert(&s, 0, 5);
	SLInsert(&s, 0, 3);
	SLInsert(&s, 0, 7);

	SLPrint(&s);

	//int pos = SLFind(&s, 3);
	//if (pos != -1)
	//{
	//	SLErase(&s, pos);
	//}

	int pos = SLFind2(&s, 3, 0);
	while (pos != -1)
	{
		SLErase(&s, pos);

		pos = SLFind2(&s, 3, pos);
	}

	//SLErase(&s, 0);
	//SLErase(&s, 0);
	//SLErase(&s, 0);
	//SLErase(&s, 0);
	//SLErase(&s, 0);

	SLPrint(&s);

	SLDestroy(&s);

}

int main()
{
	testSL1();

	return 0;
}