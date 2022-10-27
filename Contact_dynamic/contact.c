#include "contact.h"

//��ʼ��ͨѶ¼
void InitContact(struct Contact* pc)
{
	assert(pc);
	//��̬
	//pc->sz = 0;
	//memset(pc->data, 0, 100 * sizeof(struct PeoInfo));

	//��̬
	int* ptr = (int*)calloc(DEFAULT_SZ, sizeof(struct PeoInfo));
	if (ptr == NULL)
	{
		perror("InitContact()");
		return;
	}
	pc->data = ptr;
	pc->Capacity = DEFAULT_SZ;
	pc->sz = 0;
}

//�������
const int check_capacity(struct Contact* pc)
{
	if (pc->Capacity == pc->sz)
	{
		int NewCapacity = INC_SZ + pc->Capacity;
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->data, NewCapacity * sizeof(struct PeoInfo));
		if (ptr == NULL)
		{
			perror("AddContact()");
			return -1;
		}

		pc->data = ptr;
		pc->Capacity = NewCapacity;
		//printf("���ݳɹ�\n");
		return 1;
	}
	else
	{
		return 1;
	}
}

//����һ���˵���Ϣ
void AddContact(struct Contact* pc)
{
	assert(pc);
	//��̬�汾
	//if (MAX == pc->sz)
	//{
	//	printf("ͨѶ¼�������޷������Ϣ\n");
	//	return;
	//}

	if (check_capacity(pc) == 1)
	{
		printf("����������:");
		scanf("%s", pc->data[pc->sz].name);
		printf("�������Ա�:");
		scanf("%s", pc->data[pc->sz].sex);
		printf("����������:");
		scanf("%d", &pc->data[pc->sz].age);//������Ϊ��Ԫ�ص�ַ����˷�������Ҫ���ϡ�&������
		printf("������绰:");
		scanf("%s", pc->data[pc->sz].tele);
		printf("�������ַ:");
		scanf("%s", pc->data[pc->sz].addr);

		pc->sz++;
		printf("�ɹ������ϵ��\n");
	}
	else
	{
		return;
	}
}

//��ʾͨѶ¼
void ShowContact(const struct Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-20s\t%-5s\t%-2s\t%-12s\t%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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

//����ͨѶ¼���Ƿ���ڴ���
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

//����ͨѶ¼��ĳ���˵���Ϣ
void SearchContact(const struct Contact* pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("������Ҫ���ҵ��˵�����:>");
	scanf("%s", &name);
	int ret = FindNamePeo(pc, name);
	if (-1 == ret)
	{
		printf("�Ҳ���������Ϣ\n");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-2s\t%-12s\t%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%-20s\t%-5s\t%-2d\t%-12s\t%-30s\n",
				pc->data[ret].name,
				pc->data[ret].sex,
				pc->data[ret].age,
				pc->data[ret].tele,
				pc->data[ret].addr);
	}
}

//ɾ��ͨѶ¼��ĳһ���˵���Ϣ
void DeleteContact(struct Contact* pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("������Ҫɾ�����˵�����:>");
	scanf("%s", &name);
	int ret = FindNamePeo(pc, name);
	if (-1 == ret)
	{
		printf("�Ҳ���������Ϣ\n");
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
		printf("�ɹ�ɾ����Ϣ\n");
	}

}

//�޸�ͨѶ¼��ĳһ���˵���Ϣ
void ModifyContact(struct Contact* pc)
{
	assert(pc);
	char name[MAX_NAME];
	printf("������Ҫ�޸���Ϣ���˵�����:>");
	scanf("%s", &name);
	int ret = FindNamePeo(pc, name);
	if (-1 == ret)
	{
		printf("�Ҳ���������Ϣ\n");
		return;
	}
	else
	{
		printf("����������:");
		scanf("%s", pc->data[ret].name);
		printf("�������Ա�:");
		scanf("%s", pc->data[ret].sex);
		printf("����������:");
		scanf("%d", &pc->data[ret].age);
		printf("������绰:");
		scanf("%s", pc->data[ret].tele);
		printf("�������ַ:");
		scanf("%s", pc->data[ret].addr);
	}
	printf("�ɹ��޸���Ϣ\n");
}

//���������ϵ��
void RemoveContant(struct Contact* pc)
{
	assert(pc);
	InitContact(pc);
	printf("�ɹ����������ϵ��\n");
}

//������������
int CmpByAge(const void* e1, const void* e2)
{
	return ((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age;
}

//������������
int CmpByName(const void* e1, const void* e2)
{
	return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
}

//����ͨѶ¼��������
void SortContact(struct Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->sz, sizeof(struct PeoInfo), CmpByName);
}

//�����ڴ�
void DestroyContact(struct Contact* pc)
{
	assert(pc);
	free(pc->data);
	pc->data = NULL;
	pc->Capacity = 0;
	pc->sz = 0;
}