/*************************************************************************
    > File Name: 1478.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月10日 星期二 10时28分24秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i,j,k;
    int a[3],temp;
    while(scanf("%d",&a[0]) != EOF && a[0] != 0)
    {
        scanf("%d %d",&a[1],&a[2]);
        for(i = 0; i < 3; i++)
            for(j = 2; j >= 0; j--)
            {
                if(a[j] > a[j - 1])
                {
                    temp = a[j]; a[j] = a[j - 1]; a[j - 1] =temp;
                }
            }
        printf("%d\n",a[1] + a[2] - a[0]);
        
    }
}
