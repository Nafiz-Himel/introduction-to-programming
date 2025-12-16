#include<stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    int a[m];
    for ( int i =0; i<m ; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for ( int i=0; i<m; i++)
    {
        if( i%2 == 0 )
        sum = sum+i;
    }
    printf("%d\n", sum);
    return 0;
}