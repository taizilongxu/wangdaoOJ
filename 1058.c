/*************************************************************************
    > File Name: 1058.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月07日 星期六 08时27分29秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char a[4];
    int i;
    while(scanf("%s",a) != EOF)
    {
        for(i = 3; i >= 0; i--)
            printf("%c",a[i]);
        printf("\n");
    }
}
