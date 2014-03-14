/*************************************************************************
    > File Name: 1026.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月08日 星期日 14时38分55秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int m;
    unsigned int a,b;
    int i,j,k;
    unsigned int re[1000];
    while(scanf("%d",&m) != EOF)
    {
        if(m == 0) break;
        scanf("%u %u",&a,&b);
        a = a + b;
        i = 0;
        if(a == 0)
        {
            printf("0\n");
            continue;
        }
        while(a)
        {
            re[i++] = a % m;
            a = a / m;
        }
        for(j = i - 1; j >= 0; j--)
            printf("%u",re[j]);
        printf("\n");
    }
}
