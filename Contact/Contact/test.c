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
		case 1://add
			AddContact(&con);
			break;
		case 2://delete
			DeleteContact(&con);
			break;
		case 3://search
			SearchContact(&con);
			break;
		case 4://modify
			ModifyContact(&con);
			break;
		case 5://show
			ShowContact(&con);
			break;
		case 6://remove
			RemoveContant(&con);
			break;
		case 7://sort
			SortContact(&con);
			break;
		case 0:
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