/*************************************************************************
    > File Name: 1476.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月10日 星期二 09时27分22秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,i,j,k;
    while(scanf("%d",&n) != EOF)
    {
        for(i = 2; i < n; i++)
        {
            if(i * i % n == 0) break;
        }
        if(i == n) printf("No\n");
        else printf("Yes\n");
    }
}
