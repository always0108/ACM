/*************************************************************************
	> File Name: A.c
	> Author:limeng 
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年07月25日 星期二 09时08分24秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

long long gcd(long long m,long long n)
{
    return n==0?m:gcd(n,m%n);
}

int main(void)
{
    long long a,b,c;
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%lld%lld",&a,&b);
        for(c=b+1;;c++)
        {
            if(gcd(a,c)==b)
            {
                printf("%lld\n",c);
                break;
            }
        }
    }
    return 0;
}


