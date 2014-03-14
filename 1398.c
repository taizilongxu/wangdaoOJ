/*************************************************************************
    > File Name: 1398.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月08日 星期日 09时58分26秒
 ************************************************************************/
#include<stdio.h>
int main()
{
    int n,a[200];
    int i,k,temp;
    int min,max;
    while(scanf("%d",&n) != EOF)
    {
        for(i = 0; i < n; i++)
            scanf("%d",&a[i]);
        max = min = 0;
        for(i = 1; i < n; i++)
        {
            if(a[max] <= a[i])
            {
                max =  i;
            }
            if(a[min] > a[i]) 
            {
                min = i;
            }
        }
        k = min + n - max - 1;
        if(max < min) k = k - 1;
        printf("%d\n",k);
    }
    return 0;
}
