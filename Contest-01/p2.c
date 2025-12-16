#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int b[n];
    for (int i = n - 1; i >= 0; i--)
    {
        scanf("%d", &b[i]);
    }

    long long int val = 0;
    for (int i = 0; i < n; i++)
    {
        val = a[i] + b[i];
        printf("%lld ", val);
    }

    return 0;
}