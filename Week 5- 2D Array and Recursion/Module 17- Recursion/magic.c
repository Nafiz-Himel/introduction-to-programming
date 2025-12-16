#include<stdio.h>

void hello(int i,int n)
{ 
    if(i == n) //base case
    {
        return;
    }
    // i++;
    hello(i+1, n);
    printf("%d\n", i);
}

int main()
{
    int i = 1;
    int n;
    scanf("%d", &n);
    hello(i,n);
    return 0;
}