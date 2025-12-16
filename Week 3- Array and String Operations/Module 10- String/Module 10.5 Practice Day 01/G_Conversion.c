#include<stdio.h>
#include<string.h>
int main()
{
    char a[100001];
    scanf("%s", a);
    int length = strlen(a);
    for( int i=0; i<length; i++)
    {
        if ( a[i] == ',')
        {
            a[i] = ' ';
        }
        else if ( a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;
        }
        else if ( a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + 32;
        }
    }

    printf("%s", a);
    return 0;
}