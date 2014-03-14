/*************************************************************************
    > File Name: 1041.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月08日 星期日 14时18分48秒
 ************************************************************************/
#include<stdio.h>
int main()
{
    int n,i,j,k,b[100000];
    while(scanf("%d",&n) != EOF)
    {
        int a[100000] ={0};
        for(i = 0; i < n; i++)
        {
            scanf("%d",&k);
            a[k + 10000]++;
        }
        j = 0;
        for(i = 0; i < 100000; i++)
        {
            if(a[i] != 0)
            {
                b[j++] = i;
            }
        }
        for(i = 0; i < j; i++)
        {
            printf("%d",b[i] - 10000);
            if(i < j - 1) printf(" ");
        }
        printf("\n");
    }
}
