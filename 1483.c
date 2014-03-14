/*************************************************************************
    > File Name: 1483.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月07日 星期六 10时56分54秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i,max,min,k,n;
    while(scanf("%d",&n) != EOF)
    {
        scanf("%d",&k);
        min = max = k;
        for(i = 1; i < n; i++)
        {
            scanf("%d",&k);
            if(k > max) max = k;
            if(k < min) min = k;
        }
        printf("%d %d\n",max,min);
    }
}
