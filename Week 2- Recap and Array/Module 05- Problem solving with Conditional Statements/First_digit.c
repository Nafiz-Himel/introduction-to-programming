#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int d=x/1000;
    if(d%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}