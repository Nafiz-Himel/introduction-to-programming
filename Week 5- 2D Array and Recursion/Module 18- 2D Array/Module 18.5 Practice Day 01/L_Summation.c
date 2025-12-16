#include <stdio.h>
void sum(int a[], int n, int i, long long int s)
{
    if (i == n)
    {
        printf("%lld", s);
        return;
    }
    s = s + a[i];

    sum(a, n, i + 1, s);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    sum(a, n, 0, 0);
    return 0;
}