#include <stdio.h>
long long int rec(int a[], int n, int i, long long int sum)
{
    if (i == n)
    {
        return sum;
    }
    sum += a[i];
    rec(a, n, i + 1, sum);
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

    long long int ans = rec(a, n, 0, 0);
    printf("%lld", ans);
    return 0;
}