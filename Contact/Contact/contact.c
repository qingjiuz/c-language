#include "contact.h"

//初始化通讯录
void InitContact(struct Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, 100 * sizeof(struct PeoInfo));
}

//增加一个人的信息
void AddContact(struct Contact* pc)
{
	assert(pc);
	if (MAX == pc->sz)
	{
		printf("通讯录已满，无法添加信息\n");
		return;
	}

	printf("请输入姓名:");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别:");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入年龄:");
	scanf("%d", &pc->data[pc->sz].age);//数组名为首元素地址，因此非数组需要加上‘&‘符号
	printf("请输入电话:");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("成功添加联系人\n");
}

//显示通讯录
void ShowContact(const struct Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-2s\t%-12s\t%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5s\t%-2d\t%-12s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

//查找通讯录中是否存在此人
static int FindNamePeo(const struct Contact* pc, char* name)
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
			return i;
	}
	return -1;
}

//查找通讯录中某个人的信息
void SearchContact(const struct Contact* pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("请输入要查找的人的姓名:>");
	scanf("%s", &name);
	int ret = FindNamePeo(pc, name);
	if (-1 == ret)
	{
		printf("找不到此人信息\n");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-2s\t%-12s\t%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
		printf("%-20s\t%-5s\t%-2d\t%-12s\t%-30s\n",
				pc->data[ret].name,
				pc->data[ret].sex,
				pc->data[ret].age,
				pc->data[ret].tele,
				pc->data[ret].addr);
	}
}

//删除通讯录中某一个人的信息
void DeleteContact(struct Contact* pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("请输入要删除的人的姓名:>");
	scanf("%s", &name);
	int ret = FindNamePeo(pc, name);
	if (-1 == ret)
	{
		printf("找不到此人信息\n");
		return;
	}
	else
	{
		int i = 0;
		for (i = 0; i < pc->sz; i++)
		{
			pc->data[ret + i] = pc->data[ret + i + 1];
		}
		pc->sz--;
		printf("成功删除信息\n");
	}
}

//修改通讯录中某一个人的信息
void ModifyContact(struct Contact* pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("请输入要修改信息的人的姓名:>");
	scanf("%s", &name);
	int ret = FindNamePeo(pc, name);
	if (-1 == ret)
	{
		printf("找不到此人信息\n");
		return;
	}
	else
	{
		printf("请输入姓名:");
		scanf("%s", pc->data[ret].name);
		printf("请输入性别:");
		scanf("%s", pc->data[ret].sex);
		printf("请输入年龄:");
		scanf("%d", &pc->data[ret].age);
		printf("请输入电话:");
		scanf("%s", pc->data[ret].tele);
		printf("请输入地址:");
		scanf("%s", pc->data[ret].addr);
	}
	printf("成功修改信息\n");
}

//清空所有联系人
void RemoveContant(struct Contact* pc)
{
	assert(pc);
	InitContact(pc);
	printf("成功清除所有联系人\n");
}

//以年龄作排序
int CmpByAge(const void* e1, const void* e2)
{
	return ((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age;
}

//以姓名作排序
int CmpByName(const void* e1, const void* e2)
{
	return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
}

//排序通讯录（姓名）
void SortContact(struct Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpByName);
}

