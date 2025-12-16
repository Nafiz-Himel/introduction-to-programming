#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    char s[n + 1];
    scanf("%s", s);

    long long int total = 0;
    for (int i = 0; i < n; i++)
    {
        total = total + (s[i] - '0');
    }
    if (total % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

// int a[n];
// for (int i = 0; i < n; i++)

// {
//     a[i] = i+1;
// }

// long long int total = 0;
// for (int i = 0; i < n; i++)
// {
//     total = total + a[i];
// }