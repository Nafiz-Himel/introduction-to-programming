#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int skip = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= skip; j++)
        {
            printf(" ");
        }
        skip--;

        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}