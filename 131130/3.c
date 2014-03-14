/*************************************************************************
    > File Name: 3.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年11月30日 星期六 20时21分07秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int t,i,j,a[1000];
    unsigned n;
    while(scanf("%d",&t) != EOF)
    {
        while(t--)
        {
            i = 0;
            scanf("%d",&n);
            if(n == 0) printf("0");
            else
            {
            while(n)
            {
                a[i++] = n % 2;
                n = n / 2;
            }
            for(j = i - 1; j >= 0; j--)
                printf("%d",a[j]);
            }
            printf("\n");
            
        }
    }
        return 0;
}
