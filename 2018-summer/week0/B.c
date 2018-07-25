/*************************************************************************
	> File Name: B.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月05日 星期四 22时34分06秒
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

