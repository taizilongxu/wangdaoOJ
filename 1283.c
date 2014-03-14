/*************************************************************************
    > File Name: 1283.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月03日 星期二 23时24分31秒
 ************************************************************************/
#include<string.h>
#include<stdio.h>
int main()
{
    char b[10000];
    int i,j,l;
    while(scanf("%s",b) != EOF)
    {
        int a[26] = {0};
        l = strlen(b);
        for(i = 0; i < l; i++)
            a[b[i] - 'A']++;
        for(i = 0; i < 26; i++)
        {
            if(a[i] == 1) 
            {
                printf("%d\n",i);
                break;
            }
        }
        if(i == 26) printf("-1\n");
    }
}
