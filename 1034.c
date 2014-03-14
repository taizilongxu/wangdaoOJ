/*************************************************************************
    > File Name: 1034.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月03日 星期二 19时39分36秒
 ************************************************************************/

#include<stdio.h>
void insert(int *a,int n,int m)
{
    int i,j;
    for(i = m - 1; i >= 0; i--)
    {
        if(a[i] > n) break;
    }
        for(j = m - 1; j > i; j--)
        {
            a[j] = a[j - 1];
        }
        a[i + 1] = n;

}
int main()
{
    int m,n,i,j,temp,l;
    int a[100000];
    while(scanf("%d %d",&n,&m) != EOF && (m != 0 || n != 0))
    {
        int b[10] = {-10000};
        for(i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i = 0; i < n; i++)
        {
            insert(b,a[i],m);    
        }
        if(m > n) l = n;
        else l = m;
        for(i = 0; i < l; i++)
        {
            printf("%d",b[i]);
            if(i < l - 1) printf(" ");
        }
        printf("\n");
    }
}
