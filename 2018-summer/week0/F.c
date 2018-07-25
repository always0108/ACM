/*************************************************************************
	> File Name: F.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月05日 星期四 22时52分34秒
 ************************************************************************/

#include<stdio.h>

int main(void)
{
    long long  a,sum;
    int n;
    while(scanf("%d",&n)!=EOF)
    {
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

