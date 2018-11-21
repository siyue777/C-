//两个浮点数之间的误差不超过1e-8
#include<stdio.h>
int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    if((a - b) <= 1e - 8 && (a - b) >= -1e - 8) //一开始只写了（a-b）<=1e-8,这种在a大于b的情况下成立还有a<b的情况，问题考虑得太简单
        printf("yes\n");
    else
        printf("no\n");
    
    return 0;
}
