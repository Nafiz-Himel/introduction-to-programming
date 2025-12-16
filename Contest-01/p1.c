#include <stdio.h>
#include <string.h>
int main()
{
    char s_1[1001], s_2[1001];
    scanf("%s %s", s_1, s_2);

    int len_1 = strlen(s_1);
    int len_2 = strlen(s_2);

    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        s_1[len_1] = s_2[i];
        len_1++;
    }

    s_1[len_1]='\0';
    printf("%s", s_1);
    return 0;
}