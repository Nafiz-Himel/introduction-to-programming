#include <stdio.h>

// char small_to_capital(char a)
// {
//     char ans;
//     if (a >= 'a' && a <= 'z')
//     {
//         ans = a - 32;
//     }
//     return ans;
// }

// int main()
// {
//     char a;
//     scanf("%c", &a);
//     char val = small_to_capital(a);
//     printf("%c", val);
//     return 0;
// }

// return + no parameters

// char small_to_capital()
// {
//     char a;
//     scanf("%c", &a);
//     char ans;
//     if (a >= 'a' && a <= 'z')
//     {
//         ans = a - 32;
//     }
//     return ans;
// }

// int main()
// {

//     char val = small_to_capital();
//     printf("%c", val);
//     return 0;
// }


// no return+ parameters
// void small_to_capital(char a)
// {
//     char ans;
//     if (a >= 'a' && a <= 'z')
//     {
//         ans = a - 32;
//     }
//     printf("%c", ans);
// }

// int main()
// {
//     char a;
//     scanf("%c", &a);
//     small_to_capital(a);
//     return 0;
// }

// no return + no parameters

void small_to_capital()
{
    char a;
    scanf("%c", &a);
    char ans;
    if (a >= 'a' && a <= 'z')
    {
        ans = a - 32;
    }
    printf("%c", ans);
}

int main()
{
    small_to_capital();
    return 0;
}