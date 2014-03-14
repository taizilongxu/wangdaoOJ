/*************************************************************************
    > File Name: 1174.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月02日 星期一 21时19分24秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i,j,k,temp,min;
    int n,m,a[1000];
    while(scanf("%d",&n) != EOF)
    {
        for(i = 0; i< n; i++)
            scanf("%d",&a[i]);
        scanf("%d",&m);
        for(i = 0; i < m; i++)
        {
            min = a[0];
            for(j = 0; j < n; j++)
            {
                if(a[j] < min)
                {
                    min = a[j];
                }
            }
            for(j = 0; j < n; j++)
            {
                if(a[j] == min) a[j] = 100000;
            }
        }
        printf("%d\n",min);
    }
}
