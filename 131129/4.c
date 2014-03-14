/*************************************************************************
    > File Name: 4.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年11月29日 星期五 20时53分03秒
 ************************************************************************/
#include<string.h>
#include<stdio.h>
int main()
{
    int i,j,l;
    char a[1010];
    while(scanf("%s",a) != EOF)
    {
        l = strlen(a);
        i = 0;
        while(i <= l / 2)
        {
            if(a[i] != a[l-1-i]) break;
            else
                i++;
        }
        if(i > l / 2) printf("YES!\n");
        else printf("NO!\n");
    }
    return 0;
}
