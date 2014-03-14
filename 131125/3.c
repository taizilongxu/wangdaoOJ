/*************************************************************************
    > File Name: 3.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年11月25日 星期一 10时34分16秒
 ************************************************************************/
#include<malloc.h>
#include<stdio.h>
struct link
{
    int data;
    struct link *next,*r;
};
struct link * creat(int n)//建立链表
{
    int i;
    struct link *p,*q,*head;
    for(i = 0; i < n; i++)
    {
        if(i == 0)
        {
            head = (struct link *)malloc(sizeof(struct link));
            p = (struct link *)malloc(sizeof(struct link));
            head->next = p;
            scanf("%d",&p->data);
            p->next = NULL;
            head->r = p->r = NULL;
        }
        else
        {
            q = (struct link *)malloc(sizeof(struct link));
            q->next = q->r = NULL;
            scanf("%d",&q->data);
            p->next = q;
            p = q;
        }
    }
    return head;
}
int main()
{
    int i,j,n,m;
    struct link *p,*q,*head;
    while(scanf("%d",&n) != EOF)
    {
        head = creat(n);
        q = head->next;
        for(i = 0; i < n; i++)
        {
            p = head;
            scanf("%d",&m);    
            for(j = 0; j < m; j++) p = p->next;
            q->r = p;
            q = q->next;
        }
        p = head->next;
        while(p)
        {
            printf("%d %d\n",p->data,p->r->data);
            p = p->next;
        }
    }
}


