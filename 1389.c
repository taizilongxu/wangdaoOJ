/*************************************************************************
    > File Name: 1389.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月09日 星期一 22时18分49秒
 ************************************************************************/

#include<stdio.h>
int fun(int n)
{
    if(n == 1) return 1;
    else if(n == 2) return 2;
    else return fun(n - 1) + fun (n - 2);
}
int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        printf("%d\n",fun(n));
    }
}
