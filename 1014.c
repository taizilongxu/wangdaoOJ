/*************************************************************************
    > File Name: 1014.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月07日 星期六 23时11分36秒
 ************************************************************************/
#include<string.h>
#include<stdio.h>
struct lnode
{
    char key[30];
    int succ;
    int su[20];
    int score;
};
int main()
{
    int n,m,g;
    int i,j,k,a[i];
    while(scanf("%d",&n) != EOF && n != 0)
    {
        scanf("%d %d",&m,&g);
        struct lnode stu[1000],temp;
        for(i = 0; i < m; i++)
            scanf("%d",&a[i]);
        k = 0;
        for(i = 0; i < n; i++)
        {
            int sum = 0;
            scanf("%s %d",stu[i].key,&stu[i].succ);
            for(j = 0; j < stu[i].succ; j++)
            { 
                scanf("%d",&stu[i].su[j]);
                sum += a[stu[i].su[j] - 1];
            }
            stu[i].score = sum;
            if(stu[i].score > g) k++;
        }
        for(i = 0; i < k; i++)
            for(j = n - 1; j > i; j--)
            {
                if(stu[j].score > stu[j - 1].score || stu[j].score == stu[j - 1].score && strcmp(stu[j].key,stu[j - 1].key) < 0)
                {
                    temp = stu[j];stu[j] = stu[j - 1];stu[j - 1] = temp;
                }
            }
        i = 0;
        printf("%d\n",k);
        while(stu[i].score >= g)
        {
            printf("%s %d\n",stu[i].key,stu[i].score);
            i++;
        }
    }
}
