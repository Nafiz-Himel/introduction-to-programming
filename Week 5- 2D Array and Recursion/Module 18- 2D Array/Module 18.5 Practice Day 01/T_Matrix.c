#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int pd = 0;
    int sd = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                pd = pd + a[i][j];
            }

            if (i + j == n - 1)
            {
                sd = sd + a[i][j];
            }
        }
    }

    printf("%d", abs(pd - sd));
    return 0;
}