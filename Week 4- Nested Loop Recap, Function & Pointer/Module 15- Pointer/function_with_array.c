#include<stdio.h>


void fun(int a[], int n) //int* p
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]); //p[i]
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    fun(a,n);
    return 0;
}



// void fun(int a[])
// {
//     a[1] = 100;

//     printf("Fun function: %p\n", a);
// }
// int main()
// {
//     int a[5] = {10,20,30,40,50};
//     fun(a);

//     printf("Main function: %p\n", a);


//     for(int i=0; i<5; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }