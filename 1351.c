/*************************************************************************
    > File Name: 1351.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月05日 星期四 20时26分22秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i,j,k,n;
    while(scanf("%d",&n) != EOF)
    {
        int a[1000000],b[2];
        int s = 0;
        for(i =0; i < n; i++)
            scanf("%d",&a[i]);
        for(i = 0; i < n - 1; i++)
        {
            int flag = 0;
            for(j = i + 1; j < n; j++)
            {
                if(a[i] == a[j])
                {
                    for(k = j;k < n - 1; k++)
                        a[k] = a[k + 1];
                    n--;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                b[s++] = a[i];
        }
        if(b[0] > b[1])
        {
            k = b[0];b[0] = b[1];b[1] = k;
        }
        printf("%d %d",b[0],b[1]);
        printf("\n");
        for(i = 0; i < n; i++)
            printf("%d\n",a[i]);
    }
}
