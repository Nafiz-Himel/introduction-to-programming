#include<stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};
    printf("0 index address: %p\n", &a[0]);
    printf("1 index address: %p\n", &a[1]);
    printf("2 index address: %p\n", &a[2]);
    printf("3 index address: %p\n", &a[3]);
    printf("4 index address: %p\n", &a[4]);


    printf("array nam er: %p\n", &a);

    printf("0 index value: %d\n", *a);

    *a = 100;
    for(int i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    *a = 10;
    *(a+1) = 100;
    for(int i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}