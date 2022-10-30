#include "SeqList.h"

void SLInit(SL* ps)
{
	assert(ps);

	ps->arr = NULL;
	ps->capacity = 0;
	ps->sz = 0;
}

void SLDestroy(SL* ps)
{
	assert(ps);

	if (ps->arr)
	{
		free(ps->arr);
		ps->arr = NULL;
		ps->capacity = 0;
		ps->sz = 0;
	}
}

void SLCapacity(SL* ps)
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

}

void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);

	SLCapacity(ps);

	//ps->arr[ps->sz] = x;
	//ps->sz++;

	SLInsert(ps, ps->sz, x);

}

void SLPrint(SL* ps)
{
	assert(ps);

	for (int i = 0; i < ps->sz; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}

void SLPopBack(SL* ps)
{
	assert(ps->sz);
	//ps->sz--;

	SLErase(ps, ps->sz-1);

}

void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);

	//SLCapacity(ps);

	////ps->sz++;
	////int i = 0;
	////for (i = ps->sz - 1; i > 0; i--)
	////{
	////	ps->arr[i] = ps->arr[i - 1];
	////}
	////ps->arr[0] = x;
	//
	//int end = ps->sz - 1;
	//while (end >= 0)
	//{
	//	ps->arr[end + 1] = ps->arr[end];
	//	end--;
	//}
	//ps->arr[0] = x;
	//ps->sz++;

	SLInsert(ps, 0, x);
}

void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->sz);

	//int i = 0;
	//for (i = 0; i < ps->sz - 1; i++)
	//{
	//	ps->arr[i] = ps->arr[i + 1];
	//}
	//ps->sz--;

	//int begin = 1;
	//while (begin < ps->sz)
	//{
	//	ps->arr[begin - 1] = ps->arr[begin];
	//	begin++;
	//}
	//ps->sz--;

	SLErase(ps, 0);

}

void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0);
	assert(pos <= ps->sz);

	SLCapacity(ps);

	int end = ps->sz;
	while (end >= pos)
	{
		ps->arr[end + 1] = ps->arr[end];
		end--;
	}
	ps->arr[pos] = x;
	ps->sz++;
}

void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0);
	assert(pos < ps->sz);

	int begin = pos + 1;
	while (begin < ps->sz)
	{
		ps->arr[begin - 1] = ps->arr[begin];
		begin++;
	}
	ps->sz--;

}

int SLFind(SL* ps, SLDataType x)
{
	assert(ps);

	int i = 0;
	for (i = 0; i < ps->sz; i++)
	{
		if (ps->arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}


int SLFind2(SL* ps, SLDataType x, int begin)
{
	assert(ps);

	int i = 0;
	for (i = begin; i < ps->sz; i++)
	{
		if (ps->arr[i] == x)
		{
			return i;
		}
	}
	return -1;
}
