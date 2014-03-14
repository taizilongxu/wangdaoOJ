/*************************************************************************
    > File Name: 1012.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2014年01月25日 星期六 21时18分12秒
 ************************************************************************/
#include<stdio.h>
int main()
{
    int i,j,k,a[1001];
    int n,m,b,c;
    while(scanf("%d %d",&n,&m) != EOF)
    {
        for(i = 1; i < n; i++)
        {
            a[i] = 0;
        }
        for(i = 1 ; i <= m ; i++)
        {
            scanf("%d %d",&b,&c);
            if(a[b] == 0) a[b] = 1;
            if(a[c] == 0) a[c] = 1;
        }
        k = 0;
        for(i = 1; i <= n; i++)
        {
            if(a[i] != 1) k++;
        }
        if(k == n) printf("%d\n",k - 1);
        else printf("%d\n",k);
    }
}
