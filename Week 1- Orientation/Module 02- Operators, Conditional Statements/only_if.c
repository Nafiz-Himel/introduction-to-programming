#include <stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=2000)
    {
        printf("Cox jabo,\n");
    }
    if(tk>=6000)
    {
        printf("Saint Martin jabo,\n");
    }
    if(tk>=8000)
    {
        printf("Sain Martin 2 din nthakbo.\n");
    }
    else
    {
        printf("Kuthau jabo na,\nMon krp kore bose thkabo.\n");
    }
    return 0;
}