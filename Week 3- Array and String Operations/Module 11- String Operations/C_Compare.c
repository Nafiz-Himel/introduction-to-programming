#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s",&a,&b);
    
    int val = strcmp(a,b);
    if(val<0)
    {
        printf("%s", a);
    }
    else if(val>0)
    {
        printf("%s", b);
    }
    else
    {
        printf("%s", a);
    }
    return 0;
}

// #include<stdbool.h>
// int i=0;
//     while(true)
//     {
//         if( a[i] == '\0' && b[i] == '\0')
//         {
//             printf("%s", a);
//             break;
//         }
//         else if ( a[i] == '\0')
//         {
//             printf("%s", a);
//             break;
//         }
//         else if( b[i] == '\0')
//         {
//             printf("%s", b);
//             break;
//         }
//         else if( a[i] == b[i])
//         {
//             i++;
//         }
//         else if( a[i]<b[i] )
//         {
//             printf("%s", a);
//             break;
//         }
//         else if( a[i]>b[i])
//         {
//             printf("%s", b);
//             break;
//         }
//     }