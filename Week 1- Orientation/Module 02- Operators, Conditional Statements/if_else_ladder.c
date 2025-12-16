#include <stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=100)
    {
        printf("Burger kahbo\n");
    }
    else if(tk>=50)
    {
        printf("Fuchka khabo\n");
    }
    else if(tk>=20)
    {
        printf("Jhalmuri khabo\n");
    }
    else
    {
        printf("Kichui khabo na\n");
    }
    return 0;
}