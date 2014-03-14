/*************************************************************************
    > File Name: 1029.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月08日 星期日 18时38分38秒
 ************************************************************************/
#include<stdio.h>
#include<string.h>
struct dic
{
    char a[200];
    char b[1000];
};
int main()
{
    int i,j,k,q;
    char c[200],ch;
    struct dic dict[100000];
    i = 0;
    while(scanf("%s",c) != EOF)
    {
        if(strcmp(c,"@END@") == 0) break;
        strcpy(dict[i].a,c);
        j = 0;
        while((ch = getchar()) != '\n')
        {
            dict[i].b[j++] = ch;
        }
        i++;
    }
    printf("11111111111\n");
    int n;
    scanf("%d",&n);
    printf("222222222222\n");
    for(k = 0; k < n; k++)
    {
        j = 0;
        while((ch = getchar()) != '\n')
        {
            c[j++] = ch;
        }
        if(c[0] == '[')
        {
            for(q = 0; q < i; q ++)
            {
                if(strcmp(c,dict[q].a) == 0)
                {
                    printf("%s\n",dict[q].b);
                    break;
                }
            }
            if(q == i) printf("What?\n");
        }
        else
        {
            for(q = 0; q < i; q++)
            {
                if(strcmp(c,dict[q].b) == 0)
                {
                    printf("%s",dict[q].a);
                    break;
                }
            }
            if(q == i) printf("What?\n");
        }
    }
}
