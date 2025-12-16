#include <stdio.h>

// char capital_to_small(char a)
// {
//     char ans;
//     if (a >= 'A' && a <= 'Z')
//     {
//         ans = a + 32;
//     }
//     return ans;
// }

// int main()
// {
//     char a;
//     scanf("%c", &a);
//     char val = capital_to_small(a);
//     printf("%c", val);
//     return 0;
// }

// return+ no parameters
// char capital_to_small()
// {
//     char a;
//     scanf("%c", &a);
//     char ans;
//     if (a >= 'A' && a <= 'Z')
//     {
//         ans = a + 32;
//     }
//     return ans;
// }

// int main()
// {
//     char val = capital_to_small();
//     printf("%c", val);
//     return 0;
// }

// no return+parameters
// void capital_to_small(char a)
// {
//     char ans;
//     if (a >= 'A' && a <= 'Z')
//     {
//         ans = a + 32;
//     }
//     printf("%c", ans);
// }

// int main()
// {
//     char a;
//     scanf("%c", &a);
//     capital_to_small(a);
//     return 0;
// }

// no return+ no parameters
void capital_to_small()
{
    char a;
    scanf("%c", &a);
    char ans;
    if (a >= 'A' && a <= 'Z')
    {
        ans = a + 32;
    }
    printf("%c", ans);
}

int main()
{
    capital_to_small();
    return 0;
}