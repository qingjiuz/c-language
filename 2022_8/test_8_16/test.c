#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	double a = 0;
//	if (a == 0.0)
//	{
//		printf("haha\n");
//	}
//	else if (a == 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("hihi\n");
//	}
//	return 0;
//}




//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int cubic = m * m * m;
//	int a = 0;
//	int sum = 0;
//
//	while (sum != cubic)
//	{
//		int i = 0;
//		int tmp = 1;
//		sum = 0;
//		
//		for (i = 0; i < a; i++)
//		{
//			tmp += 2;
//		}
//		
//		for (i = 0; i < m; i++)
//		{
//			sum += tmp;
//			tmp += 2;
//		}
//		a++;
//	}
//	printf("%d\n", sum);
//	printf("%d\n", cubic);
//
//	return 0;
//}

//int fun(int sta, int m, int cubic)
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		sum += sta;
//		sta += 2;
//	}
//
//	if (cubic == sum)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int cubic = m * m * m;
//	int start = 1;
//	int i = 0;
//	while (1)
//	{
//		if (fun(start, m, cubic))
//			break;
//		else
//			start += 2;
//	}
//	for (i = 0; i < m; i++)
//	{
//		if (i == m - 1)
//			printf("%d", start);
//		else
//			printf("%d+", start);
//		start += 2;
//	}
//	return 0;
//}





//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int t1 = 2;
//    int tn = t1 + ((n - 1) * 3);
//    printf("%d\n", (n * (t1 + tn)) / 2);
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    double avg = 0;
//    int count = 0;
//    int count_neg = 0;
//    int tmp = 0;
//    int sum = 0;
//
//    while (scanf("%d", &tmp) != EOF)
//    {
//        if (tmp > 0)
//        {
//            sum += tmp;
//            count++;
//        }
//        else if (tmp < 0)
//        {
//            count_neg++;
//        }
//    }
//    if (sum > 0)
//    {
//        avg = sum * 1.0 / count;
//    }
//    printf("%d %.1f", count_neg, avg);
//
//    return 0;
//}