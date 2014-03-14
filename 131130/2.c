/*************************************************************************
    > File Name: 2.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年11月30日 星期六 18时59分35秒
 ************************************************************************/
#include<stdio.h>
int main()
{
      int a[4],flag;
      int n,i,j;
           while(~scanf("%d",&n)&&(n>=1&&n<=500))
                { 
                    while(n--)
                    { 
                        flag = 0;
                        scanf("%d.%d.%d.%d",&a[0],&a[1],&a[2],&a[3]);
                        for(i = 0;i < 4; i++)
                          if(a[i]<0||a[i]>255)
                            {
                                flag = 1;
                                break;
                            }
                        if(flag) 
                            printf("No!\n");
                        else
                            printf("Yes!\n");
                    }
                }
                    return 0;
}
