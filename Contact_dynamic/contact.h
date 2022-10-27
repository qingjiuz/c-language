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


//��ʾһ���˵���Ϣ���������Ա����䡢�绰��סַ
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
	//struct PeoInfo data[MAX];//��̬
	struct PeoInfo* data;//��̬
	int sz;
	int Capacity;//����
	//ͨ��sz������Ϣ��ŵ�data��������
};

//��ʼ��ͨ��¼
void InitContact(struct Contact* pc);

//����һ���˵���Ϣ
void AddContact(struct Contact* pc);

//��ʾͨѶ¼
void ShowContact(const struct Contact* pc);

//����ͨѶ¼��ĳһ���˵���Ϣ
void SearchContact(const struct Contact* pc);

//ɾ��ͨѶ¼��ĳһ���˵���Ϣ
void DeleteContact(struct Contact* pc);

//�޸�ͨѶ¼��ĳһ���˵���Ϣ
void ModifyContact(struct Contact* pc);

//���������ϵ��
void RemoveContant(struct Contact* pc);

//����ͨѶ¼
void SortContact(struct Contact* pc);

//�����ڴ�
void DestroyContact(struct Contact* pc);
