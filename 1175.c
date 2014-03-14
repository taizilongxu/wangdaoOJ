/*************************************************************************
    > File Name: 1175.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月03日 星期二 08时47分33秒
 ************************************************************************/
#include<string.h>
#include<stdio.h>
int main()
{
    int i,j,k,l1,l2,q,flag;
    char a[100],b[100];
    while(scanf("%s",a) != EOF)
    {
        l1 = strlen(a);
        for(i = 0; i < l1; i++)
        {
            a[i] = a[i] - '0';
        }
        scanf("%s",b);
        l2 = strlen(b);
        if(l2 < 5 || l2 > 0)
        {
            flag = 0;
            while(i < l1)
            {
                i = 0;
                flag = 0;
                if(a[i] > b[i] - '0' && flag == 0)
                {
                    j = 1;
                    flag = 1;
                }
                if(a[i] == a[i + 1] && flag == 1)
                    j++;
                if(j == l2) 
                {
                    printf("YES\n");
                    break;
                }
                i++;
            }
            if(i == l1) printf("NO\n");
            
        }
        else
        {
            for(i = 0; i < l1; i++)
            {
                if(a[i] > b[i] - '0')
                {
                    j = 0;
                    for(k = 1; k < 5; k++)
                    {
                        for(q = i + 1; q < l1; q++)
                        {
                            if(a[q] == a[i] + k) 
                            {
                                j++;break;
                            }
                        }
                    }
                }
                if(j == 5)
                {
                    printf("YES\n");
                    break;
                }
            }
            if(i == l1) printf("NO\n");
        }
    }
}
