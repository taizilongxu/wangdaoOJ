/*************************************************************************
    > File Name: 1138.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月02日 星期一 16时50分39秒
 ************************************************************************/
#include<string.h>
#include<stdio.h>
int main()
{
    char a[30],c[30],b[1000];
    int n,i,j,l;
    while(scanf("%s",c) != EOF)
    {
        l = strlen(c) - 1;
        j = 0;
        for(i = 0; i <= l; i++)
        {
            c[i] = c[i] - '0';
        }
        for(i = 0; i <= l; i++)
        {
            a[l - i] = c[i];
        }
            
        while(l >= 0)
        {
            for(i = l; i > 0; i--)
            {
                if((a[i] % 2) == 1) a[i-1] += 10;
                a[i] /= 2;
            }
            if((a[0] % 2) == 0) b[j++] = 0;
            else b[j++] = 1;
            a[0] = a[0] / 2;
            if(a[l] == 0) l--;
        }
        for(i = j - 1; i >= 0; i--)
            printf("%d",b[i]);
        printf("\n");
    }
}
