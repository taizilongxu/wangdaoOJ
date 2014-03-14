/*************************************************************************
    > File Name: 1.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年11月30日 星期六 08时17分43秒
 ************************************************************************/
#include<string.h>
#include<stdio.h>
int main()
{
    int i,j,n,temp;
    int a[110][2];
    char b[1011];
    while(scanf("%d",&n) != EOF)
    {
        for(i = 0; i < n; i++)
        {
            scanf("%s",b);
            a[i][0] = strlen(b);
            a[i][1] = b[0] - '0';
        }
        for(i = 0; i < n; i++)
            for(j = n - 1; j > i; j--)
            {
                if(a[j][0] < a[j - 1][0] && (a[j][0] = a[j - 1][0] || a[j][1] < a[j - 1][1]))
                {
                    temp = a[j][0];a[j][0] = a[j - 1][0];a[j - 1][0] = temp;
                    temp = a[j][1];a[j][1] = a[j - 1][1];a[j - 1][1] = temp;
                }
            }
        for(i = 0; i < n; i++)
        {
            for(j = 0; j <a[i][0]; j++)
            {
                printf("%d",a[i][1]);
            }
            printf("\n");
        }
    }
    return 0;
}
