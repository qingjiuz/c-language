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
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		mune();
		printf("请输入:> ");
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
			printf("退出通讯录\n");
			break;
		default:
			printf("请重新输入正确的数字\n");
			break;
		}

	} while (input);

}

int main()
{
	test();
	return 0;
}