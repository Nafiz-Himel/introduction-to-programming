#include <stdio.h>
void print(int i, int n)
{
    if (i == n + 1)
    {
        return;
    }
    printf("I love Recursion\n");
    print(i + 1, n);
}

int main()
{
    int i = 1;
    int n;
    scanf("%d", &n);
    print(i, n);
    return 0;
}