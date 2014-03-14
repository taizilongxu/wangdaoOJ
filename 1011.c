/*************************************************************************
    > File Name: 1011.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月07日 星期六 11时09分39秒
 ************************************************************************/
#include<stdio.h>
int main()
{
    int i,j,k,n,a[10000];
    while(scanf("%d",&n) != EOF && n != 0)
    {
        for(i = 0; i < n; i++)
            scanf("%d",&a[i]);
        int max = a[0],temp = 0;
        int start = 0,end = 0;
        int max1;
        for(i = 0; i < n; i++)
        {
            temp += a[i];
            if(temp > max)
            {
                max = temp;end = i;
            }
            else if(temp < 0)
            {
                temp = 0;
            }
        }
        max1 = max;
        for(i = end; i >= 0; i--)
        {
            max1 -= a[i];
            if(max1 == 0) break;
        }
        if(end == 0) printf("%d %d %d\n",0,a[0],a[n - 1]);
        else printf("%d %d %d\n",max,a[i],a[end]);
    }
}
