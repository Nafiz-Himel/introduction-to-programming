#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int num = 1;
    int skip = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= skip; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= num; j++)
        {
            printf("*");
        }
        printf("\n");
        num += 2;
        skip--;
    }
    return 0;
}