/*************************************************************************
    > File Name: 1107.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月04日 星期三 11时22分40秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i,j,k,temp,n,a[10000];
    while(scanf("%d",&n) != EOF && n != 0)
    {
        for(i = 0; i < n; i++)
            scanf("%d",&a[i]);
        for(i = 0; i < n - 1; i++)
        {
            for(j = i;j < i + 2; j++)
                for(k = n - 1; k > j; k--)
                {
                    if(a[k] > a[k - 1])
                    {
                        temp = a[k]; a[k] = a[k - 1]; a[k - 1] = temp;
                    }
                }
            a[i + 1] += a[i];
        }
        printf("%d\n",a[i]);
    }
}
