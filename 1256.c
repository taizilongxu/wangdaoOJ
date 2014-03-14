/*************************************************************************
    > File Name: 1256.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月03日 星期二 22时59分13秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,b[10000];
    int i,j,k,num;
    while(scanf("%d",&n) != EOF)
    {
        int a[10000]={0};
        for(i = 0; i < n; i++)
        {
            scanf("%d",&num);
            a[num]++;
        }
        j = 0;
        for(i = 0; i < 10000; i++)
        {
            if(a[i] == 1) b[j++] = i;      
        }
        for(i = 0; i < j; i++)
        {
            printf("%d",b[i]);
            if(i < j - 1) printf(" ");
        }
        printf("\n");

    }
}
