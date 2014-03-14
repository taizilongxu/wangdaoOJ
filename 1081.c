/*************************************************************************
    > File Name: 1081.c
    > Author: limbo
    > Mail: 468137306@qq.com
    > Created Time: 2013年12月06日 星期五 15时04分53秒
 ************************************************************************/
#include<stdio.h>
int main()
{
    int a0,a1,p,q,k;
    int i,j,temp1,temp2,temp3,temp4;
    while(scanf("%d %d %d %d %d",&a0,&a1,&p,&q,&k) != EOF)
    {
        int a = a1 % 10000,b = a0 % 10000;
        int l = 1,m = 0;
        while(k > 0)
        {
            if(k % 2)
            {
                int temp = a;
                a = (p * a + q * b) % 10000;
                b = (l * temp + m * b) % 10000;
                --k;
            }
            else
            {
                k = k / 2;
                temp1 = p;temp2 = q;temp3 = l;temp4 = m;
                p=(temp1*temp1+temp2*temp3)%10000;
                q=(temp1*temp2+temp2*temp4)%10000;
                l=(temp1*temp3+temp3*temp4)%10000;
                m=(temp3*temp2+temp4*temp4)%10000;
            }
        }
        printf("%d\n",b);
    }
    return 0;
}
