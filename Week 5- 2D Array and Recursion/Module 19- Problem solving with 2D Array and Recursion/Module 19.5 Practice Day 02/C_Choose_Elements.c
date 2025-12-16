#include <stdio.h>
#include <limits.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int ar[k];
    long long int max = INT_MAX;
    for(int i=0; i<k; i++)
    {
        if( max>a[i])
        {
            max = a[i];
        }
        ar[i] = max;
    }

    for(int i=0; i<k; i++)

    {
        printf("%d ", ar[i]);
    }

    // int flag = 1;
    // long long int sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] < 0)
    //     {
    //         flag = 0;
    //     }
    // }

    // if (flag == 0)
    // {
    //     printf("0");
    // }
    // else
    // {
    //     for (int i = 1; i <= k; i++)
    //     {
    //         sum += a[n - i];
    //     }
    //     printf("%d", sum);
    //     break;
    // }

    return 0;
}