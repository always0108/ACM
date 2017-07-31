/*************************************************************************
	> File Name: C.c
	> Author: limeng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年07月21日 星期五 08时10分16秒
 ************************************************************************/

#include<stdio.h>

int main(void)
{
    int a[101],i;
    a[0]=3;
    for(i=1;i<=50;i++)
    {
        a[i]=2*a[i-1]-2;
    }
    int N,num;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d",&num);
        printf("%d\n",a[num]);
    }
    return 0;
}
