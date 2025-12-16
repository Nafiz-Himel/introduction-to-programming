#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int len = strlen(s);
    int count = 1;
    int i = 0;
    int j = len - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            count = 0;
            break;
        }
        i++;
        j--;
    }
    return count;
}

int main()
{
    char s[1001];
    scanf("%s", s);

    int ans = is_palindrome(s);

    if (ans == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}