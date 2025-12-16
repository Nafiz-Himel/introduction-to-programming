#include<stdio.h>
int main()
{
    char a;
    char z='z';
    scanf("%c", &a);
    if(a==z)
    {
        printf("a");
    }
    else
    {
        a++;
        printf("%c", a);
    }
    return 0;
}