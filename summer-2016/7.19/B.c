/*************************************************************************
	> File Name: B.c
	> Author: limeng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年07月19日 星期三 08时26分22秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

long long lcm(long long a,long long b);
long long nlcm(long long num[],long long n);

int main(void)
{
    long long n;
    while(scanf("%lld",&n)!=EOF)
    {
        long long i,num[10001],result;
        for(i=0;i<n;i++)
            scanf("%lld",&num[i]);
        result=nlcm(num,n);
        printf("%lld\n",result);
    }
    return 0;
}

long long lcm(long long a,long long b)
{
    long long t,c,m;
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    m=a*b;
    while(b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    return m/a;
}

long long nlcm(long long num[],long long n)
{
   long long i;
   for(i=1;i<n;i++)
    {
       num[i] = lcm(num[i-1],num[i]);
    }
    return num[n-1];
}
