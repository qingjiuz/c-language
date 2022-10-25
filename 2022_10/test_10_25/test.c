#include "SeqList.h"

SL s;

void test()
{
	SLInit(&s);

	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPushBack(&s, 3);
	SLPushBack(&s, 4);

}

int main()
{
	test();
	return 0;
}