#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for ( int i= 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int total =INT_MAX;
    for ( int j=0; j<n; j++ )
    {
        if( a[j]<total)
        {
            total = a[j];
        }
    }
    printf("%d", total);
    return 0;
}