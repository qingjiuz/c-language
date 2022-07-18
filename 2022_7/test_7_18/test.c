#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////BC114
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", (4 * (n / 12) + 2));
//    return 0;
//}


//BC9
//int main()
//{
//    int n = printf("Hello world!");
//    printf("\n%d\n", n);
//    return 0;
//}


//BC35
int main()
{
    char a = 0;
    scanf("%c", &a);
    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}