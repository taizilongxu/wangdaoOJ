/*************************************************************************
    > File Name: 1097.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月08日 星期日 19时56分45秒
 ************************************************************************/
#include<stdio.h>
int main()
{
    int t;
    while(scanf("%d",&t) != EOF)
    {
        int l1,l2;
        scanf("%d %d",&l1,&l2);
        int i,j,k;
        int ad[100000],bd[100000];
        for(i = 0; i < l1; i++)
            scanf("%d",&ad[i]);
        for(i = 0; i < l2; i++)
            scanf("%d",&bd[i]);
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        int cd[200000];
        int flag = 0;
        for(i = a; i <= b; i++,flag++)
            cd[flag] = ad[i - 1];
        for(i = c; i <= d; i++,flag++)
            cd[flag] = bd[i - 1];
//        for(i = 0; i < flag; i++)
  //          printf("%d\n",cd[i]);
        printf("%d\n",cd[(flag - 1) / 2]);
     }
    return 0;
}
