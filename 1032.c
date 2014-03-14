/*************************************************************************
    > File Name: 1032.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月08日 星期日 19时34分50秒
 ************************************************************************/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,j,k;
    while(scanf("%s",a) != EOF && strcmp("E",a) != 0)
    {
        int b[26] ={0};
        for(i = 0; i < strlen(a); i ++)
        {
            b[a[i] - 'A']++;
        }
        int flag = 1;
        while(flag)
        {
            flag = 0;
            for(i = 25; i >= 0; i--)
            {
                if(b[i] != 0) 
                {
                    printf("%c",i + 'A');
                    flag = 1;
                    b[i]--;
                }
            }
        }
        printf("\n");
    }
}
