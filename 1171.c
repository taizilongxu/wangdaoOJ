/*************************************************************************
    > File Name: 1171.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月03日 星期二 21时07分43秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int m[5][5],t[5][5];
    int i,j,k,a,b,n,x,y;
    while(~scanf("%d %d %d %d %d",&m[0][0],&m[0][1],&m[0][2],&m[0][3],&m[0][4]))
    {
        for(i = 1; i < 5; i++)
            for(j = 0; j < 5; j++)
                scanf("%d",&m[i][j]);
        scanf("%d %d %d %d",&a,&b,&x,&y);
        if(b == 2) n == 2;
        else n == 3;
        x--;y--;
        if(a == 1)
        {
            for(i = x; i < n + x; i++)
                for(j = y; j < n + y; j++)
                {
                    t[j][n - i - 1] = m[i][j];
                }
        }
        else
        {
            for(i = x; i < n + x; i++)
                for(j = y; j < n + y; j++)
                {
                    t[n - j - 1][i] = m[i][j];
                }
        }
        for(i = x; i < n + x; i++)
            for(j = y; j < n + y; j++)
            {
                m[i][j] = t[i][j];
            }
        for(i = 0; i < 5; i++)
        {
            for(j = 0; j < 5; j++)
            {
                printf("%d",m[i][j]);
            }
            printf("\n");
        }

    }
}
