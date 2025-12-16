#include <stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("Cox jabo\n");
        if(tk>=10000)
        {
            printf("Saint Martin jabo\n");
        }
        else
        {
            printf("Fire asbo\n");
        }
    }
    else
    {
        printf("Kuthau jabo na,\nkaron, ajk amar mon krp.");
    }
    return 0;
}