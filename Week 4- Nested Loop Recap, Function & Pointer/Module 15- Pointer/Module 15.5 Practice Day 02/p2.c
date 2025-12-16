#include <stdio.h>

int my_len(char a[])
{
    int count = 0;
    // int i = 0;
    // while(a[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }

    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char a[100];
    scanf("%s", a);
    int len = my_len(a);
    printf("%d", len);
    return 0;
}