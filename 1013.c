/*************************************************************************
    > File Name: 1013.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月08日 星期日 08时54分22秒
 ************************************************************************/
#include<string.h>
#include<stdio.h>
struct student
{
    char card[20];
    char it[12];
    char ot[12];
};
int main()
{
    int n,m;
    int i,j;
    while(scanf("%d",&n) != EOF)
    {
        struct student stu[1000],max,min;
        for(j = 0; j < n; j++)
        {
            scanf("%d",&m);
            scanf("%s %s %s",stu[i].card,stu[i].it,stu[i].ot);
            max = stu[i];min = stu[i];
            for(i = 1; i < m; i++)
            {
                scanf("%s %s %s",stu[i].card,stu[i].it,stu[i].ot);
                if(strcmp(stu[i].ot,max.ot) > 0) max = stu[i];
                if(strcmp(stu[i].it,min.it) < 0) min = stu[i];
            }
            printf("%s %s\n",min.card,max.card);
        }
    }
}
