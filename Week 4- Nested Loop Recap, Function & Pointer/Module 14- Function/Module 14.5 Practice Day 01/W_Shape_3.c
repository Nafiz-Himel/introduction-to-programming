#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int num1 = 1;
    int num2 = n * 2 - 1;

    int skip = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= skip; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= num1; j++)
        {
            printf("*");
        }
        printf("\n");
        num1 += 2;
        skip--;
    }

    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k < i; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= num2; j++)
        {
            printf("*");
        }
        printf("\n");
        num2 -= 2;
    }

    return 0;
}