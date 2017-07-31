/*************************************************************************
	> File Name: F.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月17日 星期一 11时33分52秒
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

