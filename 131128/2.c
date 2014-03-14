/*************************************************************************
    > File Name: 2.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年11月28日 星期四 21时06分44秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a[1000],b[1000];
    int i,j,k;
    int n,m,temp;
    while(scanf("%d %d",&n,&m) != EOF)
    {
        for(i = 0; i < 1000; i++)
            a[i] = b[i] = 0;
        j = 0;
        while(n)
        {
            a[j++] = n % 10;
            n = n / 10;
        }
        k = 0;
        printf("%d\n",j)
        while(m)
        {
            b[k++] = m % 10;
            m = m / 10;
        }
        printf("%d\n",k)
        if(j > k) n = j;
        else n = k;
        printf("%d\n",n);
        for(i = 0; i < n; i++)
        {
           temp = a[i] + b[i];
           if(temp > 9)
           {
               a[i + 1]++;
               a[i] = temp - 10;
           }
           else
               a[i] = temp;
        }
        for(i = 0; i < n; i++)
        {
            printf("%d",a[n - 1 - i]);
        }
        printf("\n");
    }
}
