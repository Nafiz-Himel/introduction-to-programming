#include <stdio.h>
#include <math.h>
int main()
{
    int ans = ceil(4.5);
    int ans1 = floor(4.5);
    int ans2 = round(4.5);
    int ans3 = round(4.4);
    double ans4 = sqrt(4.4);
    int ans5 = sqrt(25);
    int ans6 = pow(2, 5);
    int ans7 = abs(-25);
    printf("%d %d %d %d %lf %d %d %d",
           ans, ans1, ans2, ans3, ans4, ans5, ans6, ans7);
    return 0;
}