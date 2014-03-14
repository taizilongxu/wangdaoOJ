/*************************************************************************
    > File Name: 1168.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月08日 星期日 18时10分18秒
 ************************************************************************/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char a[100],b[100];
    scanf("%s",a);
    while(scanf("%s",b) != EOF)
    {
        for(i = 0; i < strlen(b); i++)
        {
            for(j = 0; j < strlen(a); j++)
            {
                if(a[j] != b[j + i]) break;
            }
            if(b[i] != ' ' && j == strlen(a))
            {
                i = i + j - 1;
                continue;
            }
            printf("%c",b[i]);
        }
        printf("\n");
    }
}
