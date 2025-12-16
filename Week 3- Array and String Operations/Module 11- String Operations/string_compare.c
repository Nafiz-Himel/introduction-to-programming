#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a,&b);

    int i=0;
    while(true)
    {
        if( a[i] == '\0' && b[i] == '\0')
        {
            printf("Equal");
            break;
        }
        else if( a[i] == '\0' )
        {
            printf("A is smaller");
            break;
        }
        else if( a[i]==b[i])
        {
            i++;
        }
        else if( b[i] == '\0' )
        {
            printf("B is smaller");
            break;
        }
        else if( a[i]<b[i])
        {
            printf("A is smaller");
            break;
        }

        // int val = strcmp(a,b);
        // if( val<0)
        // {
        //     printf("A is smaller")
        // }
        // else if( val>0)
        // {
        //     printf("B is smaller")
        // }
        // else if( val == 0)
        // {
        //     printf("Equal");
        // }

        
    }
    return 0;
}