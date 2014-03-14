/*************************************************************************
    > File Name: 1371.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月07日 星期六 13时57分36秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i,j,k,n,temp,a[2000000];
    while(scanf("%d %d",&n,&k) != EOF)
    {
        for(i = 0; i < n; i++)
            scanf("%d",&a[i]);
        for(i = 0; i < k; i++)
            for(j = n - 1; j >= 0; j--)
            {
                if(a[j] < a[j - 1])
                {
                    temp = a[j];a[j] = a[j - 1];a[j - 1] =temp;
                }
            }
        for(i = 0; i < k; i++)
        {
            printf("%d",a[i]);
            if(i < k - 1) printf(" ");
        }
        printf("\n");
    }
}
