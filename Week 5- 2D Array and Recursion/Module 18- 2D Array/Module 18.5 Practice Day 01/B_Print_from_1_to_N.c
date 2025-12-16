#include <stdio.h>
void print(int i, int n)
{
    if (i == n + 1)
    {
        return;
    }
    printf("%d\n", i);
    i++;
    print(i, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    print(i, n);
    return 0;
}