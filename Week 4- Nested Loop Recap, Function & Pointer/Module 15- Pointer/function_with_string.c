#include<stdio.h>


void fun(char s[])
{
    printf("%s\n", s);
    printf("%d\n", strlen(s));
}

int main()
{
    char s[10];
    scanf("%s", s); //char array
    fun(s);
    return 0;
}
