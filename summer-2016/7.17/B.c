/*************************************************************************
	> File Name: B.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月17日 星期一 11时15分53秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    long long  a,b;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld%lld",&a,&b);
        printf("%lld\n",a+b);
    }
    return 0;
}

