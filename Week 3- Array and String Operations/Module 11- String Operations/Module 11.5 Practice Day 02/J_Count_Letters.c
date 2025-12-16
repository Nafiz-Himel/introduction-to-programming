#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000001];
    scanf("%s", a);
    int len = strlen(a);

    int cnt[26] = {0};
    for(int i =0; i<len; i++)
    {
        char val = a[i];
        if (val >= 'a' && val <= 'z') 
        {
            cnt[val - 'a']++;
        }

    }

    for(int i=0; i<26; i++)
    {
        if(cnt[i]>0)
        {
            printf("%c : %d\n", i+'a', cnt[i]);
        }
    }
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char s[10000001];
//     scanf("%s",s);

//     int fre[26] = {0};
//     for(int i=0;s[i]!='\0';i++)
//     {
//         int value = s[i];
//         fre[value-'a']++;
//     }
//     for(int i=0;i<26;i++)
//     {
//         if (fre[i] > 0) 
//         {
//             printf("%c : %d\n", i + 'a', fre[i]);
//         }
//     }
//     return 0;
// }