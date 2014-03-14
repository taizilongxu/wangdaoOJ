/*************************************************************************
    > File Name: 1465.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月13日 星期五 20时47分32秒
 ************************************************************************/
#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        if(n == 0) break;
        int i,j,a[600],max = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i] > max) max = a[i];
        }
        int sum = 0;
        for(i = 3; i <= n; i++)
            sum = sum * i;
        for(i = 2; i < max; i++)
        {
            int k = 0;
            for(j = 0; j < n; j++)
            {
                if(a[j] % i == 0) k++;
            }
            if(k == 1) continue;
            int temp = 1;
            for(j = 3; j <= k; j++)
                temp = temp * j;
            sum = sum - temp;
        }
        printf("%d\n",sum);
    }
}
