#include <stdio.h>

// int char_to_ascii(char a)
// {
//     int ans = a;
//     return ans;
// }

// int main()
// {
//     char a;
//     scanf("%c", &a);
//     int val = char_to_ascii(a);
//     printf("%d", val);
//     return 0;
// }

// // return+no parameters

// int char_to_ascii()
// {
//     char a;
//     scanf("%c", &a);
//     int ans = a;
//     return ans;
// }

// int main()
// {
//     int val = char_to_ascii();
//     printf("%d", val);
//     return 0;
// }

// no return+ parameters

// void char_to_ascii(char a)
// {
//     int ans = a;
//     printf("%d", ans);
// }

// int main()
// {
//     char a;
//     scanf("%c", &a);
//     char_to_ascii(a);
//     return 0;
// }

// no return+ no parameters

void char_to_ascii()
{
    char a;
    scanf("%c", &a);
    int ans = a;
    printf("%d", ans);
}

int main()
{
    char_to_ascii();
    return 0;
}
