/*************************************************************************
    > File Name: 1510.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月03日 星期二 19时35分12秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char ch;
    int i;
    while((ch = getchar()) != EOF)
    {
        if(ch == ' ') printf("%%20");
        else putchar(ch);
    }
}
