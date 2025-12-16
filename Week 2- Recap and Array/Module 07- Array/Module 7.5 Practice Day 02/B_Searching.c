#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for ( int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int b;
    scanf("%d",&b);
    int num = -1;
    for ( int i=0;i<n;i++)
    {
        if ( a[i] == b)
        {
            num = i;
            break;
        }
    }
    printf("%d", num);
    return 0;
}