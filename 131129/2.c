/*************************************************************************
    > File Name: 2.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年11月29日 星期五 15时45分26秒
 ************************************************************************/
#include<stdio.h>
int main()
{
    int a[101],b[101];
    int i,j,n,min,temp;
    while(scanf("%d",&n) != EOF)
    {
        for(i = 1; i <= n; i++)
        {
            scanf("%d",&j);
            scanf("%d",&a[j]);
        }
        for(i = 1; i <= n; i++)
        {
            temp = a[1];min = 1;
            for(j = 1; j <= n; j++)
            {
                if(a[j] <= temp)
                {
                    temp = a[j];
                    min = j;
                }
            }
            printf("%d %d\n",min,a[min]);
            a[min] = 1000;
        }
    }
}
