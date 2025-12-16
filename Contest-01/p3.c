#include <stdio.h>
int main()
{
    int n;
    ;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int cnt_even = 0, cnt_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cnt_even++;
        }
        else
        {
            cnt_odd++;
        }
    }

    int pair = cnt_even * cnt_odd;
    printf("%d", pair);
    return 0;
}