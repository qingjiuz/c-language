#include "SeqList.h"

void SLInit(SL* pc)
{
	pc->arr = NULL;
	pc->capicity = 0;
	pc->sz = 0;
}

void SLPushBack(SL* ps, SLDataType x)
{
	//À©ÈÝ
	if (ps->sz == ps->capicity)
	{
		int newCapicity = ps->capicity == 0 ? 4 : ps->capicity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapicity * sizeof(SLDataType));
		if (tmp = NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		
		ps->arr = tmp;
		ps->capicity = newCapicity;
	}

	ps->arr[ps->sz] = x;
	ps->sz++;
}

