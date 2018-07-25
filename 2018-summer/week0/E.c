/*************************************************************************
	> File Name: E.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月25日 星期四 09时48分46秒
 ************************************************************************/

#include<stdio.h>

int main(void)
{
    long long  a,sum;
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=0;
        while(n--)
        {
            scanf("%lld",&a);
            sum+=a;
        }
        printf("%lld\n",sum);
    }
    return 0;
}

