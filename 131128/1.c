/*************************************************************************
    > File Name: 1.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年11月28日 星期四 14时50分47秒
 ************************************************************************/
#include<string.h>
#include<stdio.h>
int main()
{
    char a[100],b;
    int i,j,c[8];
    int l,n;
    while(scanf("%s",a) != EOF)
    {
        l = strlen(a);
        for(i = 0; i < l; i++)
        {
            b = a[i];
            n = 0;
            for(j = 0; j < 8; j++)
            {
                c[j] = b % 2;
                b = b / 2;
                if(c[j] == 1) n++;
            }
             if (n / 2 == 1) printf("0"); 
             else printf("1");
         for(j = 0; j < 7; j++)
        {
            printf("%d",c[6 - j]);
        }
         printf("\n");
        }
    }
}
