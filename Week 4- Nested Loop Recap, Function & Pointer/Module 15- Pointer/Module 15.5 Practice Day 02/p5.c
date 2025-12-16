#include<stdio.h>

void swap_it(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;

}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    swap_it(&n, &m);

    printf("%d %d", n, m);
    return 0;
}