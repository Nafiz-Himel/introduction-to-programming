#include<stdio.h>
int main()
{
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld", &a,&b,&c,&d);
    long long int l2 = a+b-c;
    long long int l3 = a-b+c;
    long long int l6 = a*b+c;
    long long int l7 = a*b-c;
    long long int l8 = a+b*c;
    long long int l9 = a-b*c;
    if( l2==d || l3==d || l6==d ||  l7==d ||  l8==d ||  l9==d )
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}