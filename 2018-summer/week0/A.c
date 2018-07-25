/*************************************************************************
	> File Name: A.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
    > Created Time: 2018年07月05日 星期四 22时30分05秒
 ************************************************************************/

//Calculate a + b, a and b is integer
#include<stdio.h>

int main(void)
{
    long long  a,b;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        printf("%lld\n",a+b);
    }
    return 0;
}
