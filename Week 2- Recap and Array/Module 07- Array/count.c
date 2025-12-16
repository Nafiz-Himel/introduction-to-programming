#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for ( int i= 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int total =0;
    for ( int j=0; j<n; j++ )
    {
        if(a[j]%2 != 0)
        {
            total++;
        }
    }
    printf("%d", total);
    return 0;
}