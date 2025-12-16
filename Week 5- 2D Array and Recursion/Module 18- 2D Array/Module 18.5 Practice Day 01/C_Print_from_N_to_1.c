#include <stdio.h>
void print(int n, int i)
{
    if (n == i - 1)
    {
        return;
    }

    if (n == i)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d ", n);
    }

    n--;
    print(n, i);
}
int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    print(n, i);
    return 0;
}