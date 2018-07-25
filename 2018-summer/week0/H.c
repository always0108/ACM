/*************************************************************************
	> File Name: H.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月05日 星期四 22时59分14秒
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
        if(t>0)
            printf("\n");
    }
    return 0;
}

