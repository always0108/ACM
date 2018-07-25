/*************************************************************************
	> File Name: C.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月05日 星期四 22时39分38秒
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


