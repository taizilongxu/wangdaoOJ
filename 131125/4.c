/*************************************************************************
    > File Name: 4.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年11月25日 星期一 11时26分56秒
 ************************************************************************/

#include<stdio.h>
#include<malloc.h>
struct link
{
    int data;
    struct link *next;
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
        }
        else
        {
            q = (struct link *)malloc(sizeof(struct link));
            q->next = NULL;
            scanf("%d",&q->data);
            p->next = q;
            p = q;
        }
    }
    return head;
}
int main()
{
    int i,n,m;
    struct link *p,*q,*head;
    while(scanf("%d %d",&n,&m) != EOF)
    {
        head = creat(n);
        p = head->next;
        for(i = 0; i < n - m; i++)
        {
            p = p->next;
        }
        if(p == NULL || n < m) printf("NULL\n");
        else printf("%d\n",p->data);
    }
}
