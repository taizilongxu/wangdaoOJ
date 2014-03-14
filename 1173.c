/*************************************************************************
    > File Name: 1173.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月02日 星期一 21时01分36秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,m,a[1000],b[1000];
    int i,j,k;
    while(scanf("%d",&n) != EOF)
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&m);
        for(i = 0; i < m; i++)
            scanf("%d",&b[i]);
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(b[i] == a[j]) 
                {
                    printf("YES\n");
                    break;
                }
            }
            if(j == n) printf("NO\n");
        }
    }
}
