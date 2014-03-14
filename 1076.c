/*************************************************************************
    > File Name: 1076.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月06日 星期五 19时55分59秒
 ************************************************************************/
#include<stdio.h>
int main()
{
    printf("lllllllllllllllll\n");
    int n,b[1001][3001] = {0},num;
    int i,j,k,q,s,m = 1;
    int a[3001] = {0};
    a[0] = 1;
    printf("init\n");
    for(num = 1; num <= 1000; num++)
    {
        printf("0000000000\n");
            for(j = 0;j < m; j++)
            {
                a[j] = a[j] * num;
            }
            printf("1111111111\n");
            for(j = 0;j < m; j++)
            {
                k = a[j] / 10;
                s = j ;
                while(k)
                {
                    s++;
                    a[s] += k % 10;
                    k = k / 10;
                }
                a[j] = a[j] % 10;
            }
            printf("222222222222222222\n");
            for(j = 3000; j >=0; j--)
            {
                if(a[j] != 0) break;
            }
            m = j++;
        for(q = 0;q < m; q++)
            b[num][q] = a[q]; 
        printf("%d\n",num);
    }
    while(scanf("%d",&n) != EOF)
    {
        for(i = 3000; i >= 0; i--)
        {
            if(b[n][i] != 0) break;
        }
        for(j = i;j >= 0; j--)
            printf("%d",b[n][j]);
        printf("\n");
    }
    return 0;
}
