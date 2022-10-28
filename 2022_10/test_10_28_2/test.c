#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fputc('a' + i, pf);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件
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
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件（一行）
//	fputs("Hello World\n", pf);
//	fputs("It is test\n", pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件（一行）
//	char arr[20] = {0};
//	fgets(arr, 20, pf);
//	printf("%s\n", arr);
//
//	fgets(arr, 20, pf);
//	printf("%s\n", arr);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}


////写一个结构体数据到文件里
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件（格式化）
//	struct S s = { "xiaoming", 18, 3.14 };
//	fprintf(pf, "%s %d %.2f", s.name, s.age, s.score);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//在文件里读一个结构体数据
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件（格式化）
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
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	//释放内存
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


//stdin  --标准输入流 --键盘
//stdout --标准输出流 --屏幕
//stderr --标准错误流 --屏幕

//以下两对函数为等价关系
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
//	//打开文件
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	
//	//写文件（二进制）
//	struct S s = { "xiaoming", 15, 3.14 };
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//
//	//关闭文件
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
	//打开文件
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	//读文件（二进制）
	struct S s;
	fread(&s, sizeof(struct S), 1, pf);

	printf("%s %d %.2f", s.name, s.age, s.score);

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}