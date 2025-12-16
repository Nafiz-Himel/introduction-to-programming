#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        char s[100001];
        scanf("%s", s);

        int len = strlen(s);

        int count_a = 0;
        int count_A = 0;
        int count_digit = 0;

        int i=0, j=0;
        while(i<len)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                count_a++;
            }
            else if(s[i]>='A' && s[i]<='Z')
            {
                count_A++;
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                count_digit++;
            }
            i++;
        }
        printf("%d %d %d\n", count_A, count_a, count_digit);
    }

    return 0;
}
