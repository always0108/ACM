/*************************************************************************
	> File Name: C.c
	> Author: 
	> Mail: 
	> Created Time: 2017年07月17日 星期一 11时19分55秒
 ************************************************************************/

#include<stdio.h>
int main(void)
{
    long long  a,b;
    scanf("%lld%lld",&a,&b);
    while(1)
    {
        if(a==0&&b==0)
            break;
        printf("%lld\n",a+b);
        scanf("%lld%lld",&a,&b);
    }
    return 0;
}

