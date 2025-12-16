#include<stdio.h>
int main()
{
    char s[100001];
    scanf("%s", s);

    int fre[26];

    for(int i=0; s[i] != '\0'; i++) //i<len
    {
        int val = s[i];
        if( s[i]>= 'a' && s[i]<= 'z' )
        {
            fre[val -'a']++;
        }
    }

    for(int i=0; i<26; i++)
    {
        if(fre[i]>0)
        {
            printf("%c - %d\n", i+'a', fre[i]);
        }
    }

    return 0;
}