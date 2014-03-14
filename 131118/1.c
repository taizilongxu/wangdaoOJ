/*************************************************************************
    > File Name: 1.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年11月18日 星期一 08时45分29秒
 ************************************************************************/
#include<stdio.h>
int main()
{
    int a[11];
    int i,n,num,flag,max;
    while(1)
    {
        for(i = 1; i < 11; i++)
            a[i] = 0;
        if (scanf("%d",&n) == EOF) break;
        else a[n]++;
        for(i = 2; i < 21; i++)
        {
            scanf("%d",&n);
            a[n]++;
        }
        max=a[1];
        flag = 1;
        for(i = 2;i < 11; i++)
        {
            if(a[i] > max)
            {
               max = a[i];
               flag = i;
            }
        }
        printf("%d\n",flag);
    }
}
