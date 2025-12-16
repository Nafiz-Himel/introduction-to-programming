#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int num = 100000+5;
    int pos = 1;
    for (int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        if(a[i]<num)
        {
            num = a[i];
            pos = i+1;
        }
    }

    printf("%d %d",num,pos);
    return 0;
}