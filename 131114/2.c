/*************************************************************************
    > File Name: 2.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年11月14日 星期四 15时44分18秒
 ************************************************************************/
#include<stdio.h>
float fun(float n)
{
    if(n >= 90) return 4;
    if(n >= 85) return 3.7;
    if(n >= 82) return 3.3;
    if(n >= 78) return 3;
    if(n >= 75) return 2.7;
    if(n >= 72) return 2.3;
    if(n >= 68) return 2.0;
    if(n >= 64) return 1.5;
    if(n >= 60) return 1.0;
    else return 0;
}
int main()
{
    int n,i,sum1,a[100];
    float sum2,b[100];

    while(scanf("%d",&n) != EOF)
    {
        sum1 = 0;
        sum2 = 0;

        for(i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            sum1 = sum1 + a[i];
        }
        for(i = 0; i < n; i++)
        {
            scanf("%f",&b[i]);
            b[i] = fun(b[i]);
            sum2 = sum2 + b[i]*a[i];
        }
        printf("%.2f\n",sum2/sum1);

    }
}
