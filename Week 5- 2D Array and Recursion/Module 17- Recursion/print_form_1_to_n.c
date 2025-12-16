#include<stdio.h>

void hello(int i,int n)
{
    if(i == n) //base case
    {
        return;
    }
    printf("%d\n", i);
    // i++;
    hello(i+1, n);
}

int main()
{
    int i = 1;
    int n;
    scanf("%d", &n);
    hello(i,n);
    return 0;
}