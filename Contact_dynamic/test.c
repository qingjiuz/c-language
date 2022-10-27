#include "contact.h"


void mune()
{
	printf("************************************\n");
	printf("*****  1. Add       2. Delete  *****\n");
	printf("*****  3. Search    4. Modify  *****\n");
	printf("*****  5. Show      6. Remove  *****\n");
	printf("*****  7. Sort      0. Exit    *****\n");
	printf("************************************\n");
}

void test()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		mune();
		printf("������:> ");
		scanf("%d", &input);
		switch (input)
		{
		case Add://add
			AddContact(&con);
			break;
		case Delete://delete
			DeleteContact(&con);
			break;
		case Search://search
			SearchContact(&con);
			break;
		case Modify://modify
			ModifyContact(&con);
			break;
		case Show://show
			ShowContact(&con);
			break;
		case Remove://remove
			RemoveContant(&con);
			break;
		case Sort://sort
			SortContact(&con);
			break;
		case Exit:
			DestroyContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("������������ȷ������\n");
			break;
		}

	} while (input);

}

int main()
{
	test();
	return 0;
}