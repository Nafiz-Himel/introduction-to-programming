#include <stdio.h>
void print(int n, int i)
{
    if (i == n)
    {
        return;
    }
    if (n > 1)
    {
        printf("%d ", n);
    }
    else
    {
        printf("%d", n);
    }

    print(n - 1, i);
}

int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;
    print(n, i);
    return 0;
}