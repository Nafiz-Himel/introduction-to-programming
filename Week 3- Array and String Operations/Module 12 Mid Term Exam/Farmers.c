#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    int i =0;
    while(t--)
    {
        int m_1,m_2,d_1;
        scanf("%d %d %d", &m_1,&m_2,&d_1);

        int one_man =d_1*m_1;
        int total_men = m_1+m_2;
        int d_2 = one_man / total_men;
        
        int fewer = d_1 - d_2;

        printf("%d\n", fewer);
        i++;
    }
    return 0;
}