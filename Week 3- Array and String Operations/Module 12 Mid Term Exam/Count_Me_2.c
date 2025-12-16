#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s", s);

    int len = strlen(s);
    int count =0;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='a')
        {
            count++;
        }
        if(s[i]=='i')
        {
            count++;
        }
        if(s[i]=='o')
        {
            count++;
        }
        if(s[i]=='u')
        {
            count++;
        }
        if(s[i]=='e')
        {
            count++;
        }
    }
    printf("%d", len-count);
    return 0;
}