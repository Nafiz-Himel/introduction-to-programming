#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for ( int i=1; i<=n; i++ )
    {
        int c = 64+i;
        for( int j=1; j<=i; j++)
        {
            char ch = c;
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}