#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int skip = n - 1;
    int num1 = 1;
    int num2 = 3;

    if (n % 2 != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= skip; j++)
            {
                printf(" ");
            }
            skip--;

            if (i % 2 != 0)
            {
                for (int j = 1; j <= num1; j++)
                {
                    printf("#");
                }
                num1 += 4;
            }

            if (i % 2 == 0)
            {
                for (int k = 1; k <= num2; k++)
                {
                    printf("-");
                }
                num2 += 4;
            }

            printf("\n");
        }

        num1 -= 6;
        num2 -= 6;

        for (int i = 1; i <= n - 1; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf(" ");
            }

            if (i % 2 != 0)
            {

                for (int j = 1; j <= num1; j++)
                {
                    printf("-");
                }
                num1 -= 4;
            }

            if (i % 2 == 0)
            {
                for (int k = 1; k <= num2; k++)
                {
                    printf("#");
                }
                num2 -= 4;
            }

            printf("\n");
        }
    }

    if (n % 2 == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= skip; j++)
            {
                printf(" ");
            }
            skip--;

            if (i % 2 != 0)
            {
                for (int j = 1; j <= num1; j++)
                {
                    printf("#");
                }
                num1 += 4;
            }

            if (i % 2 == 0)
            {
                for (int k = 1; k <= num2; k++)
                {
                    printf("-");
                }
                num2 += 4;
            }

            printf("\n");
        }

        num1 -= 4;
        num2 -= 8;

        for (int i = 1; i <= n - 1; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf(" ");
            }

            if (i % 2 != 0)
            {

                for (int j = 1; j <= num1; j++)
                {
                    printf("#");
                }
                num1 -= 4;
            }

            if (i % 2 == 0)
            {
                for (int k = 1; k <= num2; k++)
                {
                    printf("-");
                }
                num2 -= 4;
            }

            printf("\n");
        }
    }
    return 0;
}