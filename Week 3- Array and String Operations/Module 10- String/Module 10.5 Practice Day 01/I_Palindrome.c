#include<stdio.h>
#include<string.h>
int main()
{
    int n = 1001;
    char s[n];

    scanf("%s", &s);

    int length = strlen(s);

    int flag = 1;
    int left = 0, right = length-1;

    while(left<right)
    {
        if ( s[left] != s[right])
        {
            flag = 0;
            break;
        }
        left++;
        right--;
    }

    if( flag == 1) //flag
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}