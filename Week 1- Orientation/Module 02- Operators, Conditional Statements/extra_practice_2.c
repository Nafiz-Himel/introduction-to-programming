// Take a number from user and check if its a positive or negative number
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a>=0)
    {
        if(a==0)
        {
            printf("Neutral");
        }
        else
        {
            printf("Positive");
        }
    }
    else
    {
        printf("Negative");
    }
    return 0;
}