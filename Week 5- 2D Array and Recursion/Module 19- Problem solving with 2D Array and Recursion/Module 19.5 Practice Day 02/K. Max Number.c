#include <stdio.h>
#include <limits.h>
int rec(int a[], int n, int i, int num)
{
    if (i == n)
    {
        return num;
    }
    if (a[i] > num)
    {
        num = a[i];
    }
    int ans = rec(a, n, i + 1, num);
    return ans;
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
    int num = INT_MIN;
    int ans = rec(a, n, 0, num);
    printf("%d", ans);
    return 0;
}