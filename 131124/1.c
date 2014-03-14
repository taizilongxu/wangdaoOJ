/*************************************************************************
    > File Name: 1.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年11月24日 星期日 16时03分14秒
 ************************************************************************/
#include<malloc.h>
#include<stdio.h>
struct Lnode
{
    int data;
    struct Lnode * next;
};
int main()
{
    int i,j,k;
    int n;
    struct Lnode *q,*p,*head;
    while(scanf("%d",&n) != EOF)
    {
        head = (struct Lnode * )malloc(sizeof(struct Lnode ));
        head->next = NULL;
        p = (struct Lnode * )malloc(sizeof(struct Lnode ));
        p->next = NULL;
        scanf("%d",&p->data);
        head->next = p;
        for(i = 1; i < n; i++)
        {
            q = head;
            p = (struct Lnode *) malloc(sizeof(struct Lnode));
            p->next = NULL;
            scanf("%d",&p->data);
            while(q->next != NULL && p->data > q->next->data)
                q = q->next;
            //插入
            p->next = q->next;
            q->next = p;
        }
        p = head->next ;
        while(p)
        {
            printf("%d", p->data);
            p = p->next;
            if(p != NULL) printf(" ");
        }
        printf("\n");
    }
}
