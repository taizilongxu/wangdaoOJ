/*************************************************************************
    > File Name: 3.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年11月29日 星期五 20时33分27秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,m,sum,max,i,j,temp;
    int a[100][100];
    while(scanf("%d %d",&n,&m) != EOF)
    {
        for(i = 0; i < n; i++)
            for(j = 0;j < m; j++)
                scanf("%d",&a[i][j]);
        for(i = 0; i < n; i++)
        {
            sum = 0; max = 0;temp = a[i][max];
            for(j = 0; j < m; j++)
            {
                sum += a[i][j];
                if(a[i][j] > temp)
                {
                    temp = a[i][j];
                    max = j;
                }
            }
            a[i][max] = sum;
        }
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                printf("%d",a[i][j]);
                if(j < m - 1) printf(" ");
            
            }
            printf("\n");
        }
    }
}
