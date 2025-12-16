#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;

    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int r = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }

    int mid = (n / 2); //ind 1 ; n+1/2
    printf("%d", abs(r - mid) + abs(c - mid));
    return 0;
}