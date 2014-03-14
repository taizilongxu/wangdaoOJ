/*************************************************************************
    > File Name: 1163.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月03日 星期二 23时20分28秒
 ************************************************************************/
#include<math.h>
#include<stdio.h>
int main()
{
    int i,j,k;
    int n;
    while(scanf("%d",&n) != EOF)
    {
        int a[1000] = {0};
        k = 0;
        for(i = 2; i < n; i++)
        {
            if(i % 10 != 1) continue; 
            for(j = 2; j <= sqrt(i); j++)
            {
                if(i % j == 0 ) break;
            }
            if(j > sqrt(i)) a[k++] = i;
        }
        if(k == 0) printf("-1\n");
        else
        {
        for(i = 0; i < k; i++)
        {
            printf("%d",a[i]);
            if(i < k - 1) printf(" ");
        }
        printf("\n");
        }
    }
}
