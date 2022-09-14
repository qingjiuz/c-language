#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////BC51 三角形判断
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        int sum = a + b + c;
//        if (sum - a > a && sum - b > b && sum - c > c)
//        {
//            if (a == b && a == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || a == c || b == c)
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//}



////BC40 竞选社长
//int main()
//{
//    int a = 0;
//    int b = 0;
//    char ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch == 'A')
//            a++;
//        else if (ch == 'B')
//            b++;
//    }
//    if (a > b)
//    {
//        printf("A\n");
//    }
//    else if (b > a)
//    {
//        printf("B\n");
//    }
//    else
//    {
//        printf("E\n");
//    }
//    return 0;
//}


int main()
{
    int num = 0;
    int max = 0;
    int min = 100;
    int sum = 0;
    float avg = 0l;
    int i = 0;

  
    
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &num);
		if (num > max)
		{
			max = num;
		}
		if (num < min)
		{
			min = num;
		}
		sum += num;
	}
	printf("%.2f\n", (sum - min - max) / 5.0);

  
    return 0;
}