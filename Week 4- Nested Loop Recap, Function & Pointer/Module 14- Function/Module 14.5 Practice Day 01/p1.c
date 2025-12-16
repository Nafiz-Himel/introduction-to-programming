#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int skip = n-1;
    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=skip; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
        skip--;
    }
    return 0;
}