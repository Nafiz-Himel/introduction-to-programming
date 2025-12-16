// Take a number from user and check if its a even number or odd number
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}