/*************************************************************************
    > File Name: 1027.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月12日 星期四 18时26分36秒
 ************************************************************************/
#include<stdio.h>
int main()
{
    int m,n;
    while(scanf("%d",&n) != EOF)
    {
        if(n == 0) break;
        scanf("%d",&m);
        int a[1001] = {0},b,c,i;
        for(i = 1; i <= m; i++)
        {
            scanf("%d %d",&b,&c);
            a[b]++;a[c]++;
        }
        for(i = 1; i <= n; i++)
        {
            if(a[i] % 2 != 0) break;
        }
        if(i > n) printf("1\n");
        else printf("0\n");
    }
}
