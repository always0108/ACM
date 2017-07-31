/*************************************************************************
	> File Name: A.c
	> Author: limeng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年07月20日 星期四 08时05分38秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int sxh(int n);

int main(void)
{
    int m,n,i;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        int icount=0;
        for(i=m;i<=n;i++)
        {
            if(sxh(i)==1){
                if(icount)
                    printf(" ");  //空格处理不要用\b
            printf("%d",i);
            icount++;
            }
        }
        if(icount==0){
            printf("no\n");
        }
        else{
            printf("\n");
        }
    }
    return 0;
}

int sxh(int n)
{
    if(n<100||n>999)
        return 0;
    int a,b,c;
    c=n%10;
    b=(n/10)%10;
    a=n/100;
    if(n==a*a*a+b*b*b+c*c*c)
    {
        return 1;
    }
    return 0;
}
