#include "SeqList.h"

void SLInit(SL* pc)
{
	pc->arr = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}

void SLDestroy(SL* ps)
{
	if (ps->arr)
	{
		free(ps->arr);
		ps->arr = NULL;
		ps->capacity = 0;
		ps->sz = 0;
	}
}


void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	//À©ÈÝ
	if (ps->sz == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		
		ps->arr = tmp;
		ps->capacity = newCapacity;
	}
	ps->arr[ps->sz] = x;
	ps->sz++;
}

void SLPrint(SL* ps)
{
	for (int i = 0; i < ps->sz - 1; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}

void SLPopBack(SL* ps)
{
	assert(ps->sz);
	ps->sz--;
}