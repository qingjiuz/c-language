#define _CRT_SECURE_NO_WARNINGS 1

static int g_val = 2022;

//
//ȫ�ֱ����Ǿ����ⲿ��������
//static����ȫ�ֱ�����ʱ��
//���ȫ�ֱ������ⲿ�������Ծͱ�����ڲ���������
//���ȫ�ֱ���ֻ�����Լ����ڵ�.c�ļ��п���������Դ�ļ���������
//

static int Add(int x, int y)
{
	return x + y;
}

//���������Ǿ����ⲿ��������
//���static���κ������������ⲿ�������Ծͱ��
//���ڲ���������
//�������ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����
//Դ�ļ�����ʹ�øú���
//
