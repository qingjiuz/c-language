#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define MAX 100

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30


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
	struct PeoInfo data[100];
	int sz;
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
