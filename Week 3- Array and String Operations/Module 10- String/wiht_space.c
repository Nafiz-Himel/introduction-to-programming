#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    fgets(s,12,stdin); //gets(s);
    printf("%s", s);
    return 0;
}