/*************************************************************************
    > File Name: 1.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年11月14日 星期四 12时17分39秒
 ************************************************************************/
#include<string.h>
#include<stdio.h>
int main()
{
    int a[1000];
    char b[1000][11],c[1000];
    int N,temp;
    int i,j;
    while(scanf("%d",&N) != EOF)
    {
        for(i = 0; i < N; i++)
        {
            scanf("%d %s",&a[i],b[i]);
        }
        for(i = 1; i < N; i++)
        {
            for(j = N-1; j >= i; j--)
            {
                if(a[j] > a[j-1])
                {
                    temp = a[j];a[j] = a[j-1];a[j-1] = temp;
                    strcpy(c,b[j]);strcpy(b[j],b[j-1]);strcpy(b[j-1],c);
                }
            }
        }    
        for(i = 0; i < N; i++)
        {
            printf("%s\n",b[i]);
        }
  }
}    
