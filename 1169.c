/*************************************************************************
    > File Name: 1169.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月03日 星期二 10时34分24秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,j,i,k;
    while(scanf("%d",&n) != EOF)
    {
        k = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d",&j);
            if(j % 2  == 0) k++;
        }
        if(k > n - k) printf("NO\n");
        else printf("YES\n");
    }
}
