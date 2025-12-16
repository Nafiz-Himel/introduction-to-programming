#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m;
    for ( int i=1; i<=n; i++)
    {
        scanf("%d", &m);
        long long int mul = 1;
        if ( m==0 )
        {
            mul = 1;
        }
        else for( int j=1; j<=m;j++)
        {
            mul = mul*j;
        }
        printf("%lld\n", mul);
    }
    
    return 0;
}