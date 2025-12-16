#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int num=0;
    for ( int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
            if(a[i]>0)
            {
                num = 1;
            }
            else if(a[i]<0)
            {
                num = 2;
            }
            else
            {
                num =0;
            }
            printf("%d ", num);
    }
    

    return 0;
}