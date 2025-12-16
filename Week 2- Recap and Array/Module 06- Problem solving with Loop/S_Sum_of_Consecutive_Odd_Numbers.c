#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n*2];
    for( int i=1;i<=n*2;i++)
    {
        int sum = 0;
        scanf("%d", &a[i]);
        for(int i=a[0]; i<=a[1];i++)
        {
            if(i%2==1)
            {
                sum = sum + i;
            }
        }
        printf("%d", sum);
    }
    return 0;
}