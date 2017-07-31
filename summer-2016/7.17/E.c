/*************************************************************************
	> File Name: E.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月17日 星期一 11时28分57秒
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

