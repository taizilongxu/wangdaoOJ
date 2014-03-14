/*************************************************************************
    > File Name: 2.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年11月18日 星期一 09时10分24秒
 ************************************************************************/
#include<stdio.h>
#include<string.h>
int main()
{
    struct data
    {
      char num[100];     
      char name[10];
      char sex[10];
      int age;
    }student[1001];  
    int N,M;
    int i,j,flag;
    char n[100];
    while( scanf("%d",&N) != EOF)
    {
    for(i = 0; i < N; i++)
    {
        scanf("%s%s%s%d",student[i].num,student[i].name,student[i].sex,&student[i].age);
    }
    scanf("%d",&M);
    for(i = 0; i < M; i++)
    {
        scanf("%s",n);
        flag = 0;
        for(j = 0; j < N; j++)
        {
            if(strcmp(n, student[j].num) == 0)
            {
                flag = 1;
                printf("%s %s %s %d\n",student[j].num,student[j].name,student[j].sex,student[j].age);
                break;
            }
        }
        if(flag == 0) printf("No Answer!\n");
    }
    }
}
