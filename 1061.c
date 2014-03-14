/*************************************************************************
    > File Name: 1061.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月07日 星期六 08时31分31秒
 ************************************************************************/
#include<string.h>
#include<stdio.h>
struct student
{
    char name[20];
    int age;
    int score;
};

int main()
{
    int i,j,n;
    struct student stu[1000],temp;
    while(scanf("%d",&n) != EOF)
    {
        for(i = 0; i < n; i++)
            scanf("%s %d %d",stu[i].name,&stu[i].age,&stu[i].score);
        for(i = 0; i < n; i++)
            for(j = n - 1; j > i; j--)
            {
                if(stu[j].score < stu[j - 1].score || (stu[j].score == stu[j - 1].score && strcmp(stu[j].name,stu[j - 1].name) < 0) || (stu[j].score == stu[j - 1].score && strcmp(stu[j].name,stu[j - 1].name) == 0 && stu[j].age < stu[j - 1].age))
                {
                    temp = stu[j]; stu[j] = stu[j - 1]; stu[j - 1] = temp;
                }
            }
        for(i = 0; i < n; i++)
        {
            printf("%s %d %d\n",stu[i].name,stu[i].age,stu[i].score);
        }
    }
    return 0;
}
