#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        long long int m;
        scanf("%lld", &m);

        int a[3];
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &a[i]);
        }

        long long int mul = 1;
        for (int i = 0; i < 3; i++)
        {
            mul *= a[i];
        }

        long long int res = m % mul;
        if (m != 0)
        {
            if (res != 0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%lld\n", m / mul);
            }
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
