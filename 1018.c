/*************************************************************************
    > File Name: 1018.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月07日 星期六 14时13分10秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,a[1000];
    int i,j,k,test;
    while(scanf("%d",&n) != EOF && n != 0)
    {
        for(i = 0; i < n; i++)
            scanf("%d",&a[i]);
        k = 0;
        scanf("%d",&test);
        for(i = 0; i < n; i++)
        {
            if(test == a[i]) k++;
        }
        printf("%d\n",k);
    }
}
