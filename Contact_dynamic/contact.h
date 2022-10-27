#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#define DEFAULT_SZ 3
#define INC_SZ 2

enum Option
{
	Exit,
	Add,
	Delete,
	Search,
	Modify,
	Show,
	Remove,
	Sort
};


//表示一个人的信息：姓名、性别、年龄、电话、住址
struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

struct Contact
{
	//struct PeoInfo data[MAX];//静态
	struct PeoInfo* data;//动态
	int sz;
	int Capacity;//容量
	//通过sz来将信息存放到data数组里面
};

//初始化通信录
void InitContact(struct Contact* pc);

//增加一个人的信息
void AddContact(struct Contact* pc);

//显示通讯录
void ShowContact(const struct Contact* pc);

//查找通讯录中某一个人的信息
void SearchContact(const struct Contact* pc);

//删除通讯录中某一个人的信息
void DeleteContact(struct Contact* pc);

//修改通讯录中某一个人的信息
void ModifyContact(struct Contact* pc);

//清空所有联系人
void RemoveContant(struct Contact* pc);

//排序通讯录
void SortContact(struct Contact* pc);

//回收内存
void DestroyContact(struct Contact* pc);
