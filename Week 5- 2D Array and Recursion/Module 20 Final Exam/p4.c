#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int line = n / 2 + 6;

    int star = 1;
    int skip = line - 1;

    for (int i = 0; i < line; i++)
    {
        for (int k = 0; k < skip; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        printf("\n");
        skip--;
        star += 2;
    }

    line = 5;
    star = n;
    skip = 5;

    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < skip; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < star; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
