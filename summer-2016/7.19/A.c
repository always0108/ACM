/*************************************************************************
	> File Name: A.c
	> Author: limeng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年07月19日 星期三 08时04分22秒
 ************************************************************************/
 
#include<stdio.h>
int main(void)
{
	int n,i;
	int a,b,c,d;
	while(scanf("%d",&n))
	{
		if(n==0)
		    break;
		if(n<=4)
		    printf("%d\n",n);
		else
		{
			n=n-4;
			a=b=c=d=1;
			for(i=0;i<n;i++)
			{
				d=d+c; //4岁=4岁+3岁
				c=b;   //3岁=2岁
				b=a;   //2岁=1岁
				a=d;   //1岁=4岁
			}
			printf("%d\n",a+b+c+d);
		}
	}
	return 0;
 }
