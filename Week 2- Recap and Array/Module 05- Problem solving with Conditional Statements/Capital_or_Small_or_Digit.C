#include<stdio.h>
int main()
{
    int x;
    scanf("%c", &x);
    if(x>='a' && x<='z' || x>='A' && x<='Z')
    {
        printf("ALPHA\n");
        if(x>='a' && x<='z')
        {
            printf("IS SMALL");
        }
        else
        {
            printf("IS CAPITAL");
        }
    }
    else
    {
        printf("IS DIGIT");
    }
    return 0;
}