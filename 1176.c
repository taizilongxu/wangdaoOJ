/*************************************************************************
    > File Name: 1176.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月03日 星期二 09时36分32秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i,j,k;
    int n,sum,d,a[1001];
    while(scanf("%d",&n) != EOF)
    {
        sum = 1;
        for(i = 0; i <= 1000; i++)
        {
            a[i] = -1;
        }
        for(i = 1; i <= n; i++)
            scanf("%d",&a[i]);
        scanf("%d",&d);
        for(i = 1; i < d; i++)
            sum *= 2;
        if(sum >  n) printf("EMPTY");
        else
        {
        for(i = 0; i < sum; i++)
        {
            if(a[sum + i] == -1) break;
            else printf("%d",a[sum + i]);
            if(i < sum - 1 && a[sum + i + 1] != -1) printf(" ");
        }
        }
        printf("\n");
    }
}
