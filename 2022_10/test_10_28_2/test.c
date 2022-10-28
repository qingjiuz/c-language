#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//д�ļ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fputc('a' + i, pf);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//���ļ�
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	int ch = fgetc(pf);
//	//	printf("%c\n", ch);
//	//}
//
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c\n", ch);
//	}
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//д�ļ���һ�У�
//	fputs("Hello World\n", pf);
//	fputs("It is test\n", pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//���ļ���һ�У�
//	char arr[20] = {0};
//	fgets(arr, 20, pf);
//	printf("%s\n", arr);
//
//	fgets(arr, 20, pf);
//	printf("%s\n", arr);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}


////дһ���ṹ�����ݵ��ļ���
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//д�ļ�����ʽ����
//	struct S s = { "xiaoming", 18, 3.14 };
//	fprintf(pf, "%s %d %.2f", s.name, s.age, s.score);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//���ļ����һ���ṹ������
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//���ļ�����ʽ����
//	
//	//struct S s = {0};
//	//fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	//printf("%s %d %.2f", s.name, s.age, s.score);
//
//	struct S* ps;
//	struct S* ptr = (struct S*)malloc(sizeof(struct S));
//	if (ptr == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	ps = ptr;
//	fscanf(pf, "%s %d %f", ps->name, &(ps->age), &(ps->score));
//	printf("%s %d %.2f", ps->name, ps->age, ps->score);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	//�ͷ��ڴ�
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


//stdin  --��׼������ --����
//stdout --��׼����� --��Ļ
//stderr --��׼������ --��Ļ

//�������Ժ���Ϊ�ȼ۹�ϵ
//scanf(...)
//fscanf(stdin, ...)

//printf(...)
//fprintf(stdout, ...)

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//
//	return 0;
//}


//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	
//	//д�ļ��������ƣ�
//	struct S s = { "xiaoming", 15, 3.14 };
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



struct S
{
	char name[20];
	int age;
	float score;
};

int main()
{
	//���ļ�
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//���ļ��������ƣ�
	struct S s;
	fread(&s, sizeof(struct S), 1, pf);

	printf("%s %d %.2f", s.name, s.age, s.score);

	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}