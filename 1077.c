/*************************************************************************
    > File Name: 1077.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月07日 星期六 09时34分34秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    long int i,j,k,n,a[1000000];
    while(scanf("%ld",&n) != EOF)
    {
        for(i = 0; i < n; i++)
            scanf("%ld",&a[i]);
        long int i;
        long int max,temp_sum;
        temp_sum = 0;
        max = a[0];
        for(i = 0; i < n; i++)
        {
            temp_sum += a[i];
            if(temp_sum  > max)
                max = temp_sum;
            else if(temp_sum < 0)
                temp_sum = 0;
        }
        printf("%ld\n",max);
    }
}
