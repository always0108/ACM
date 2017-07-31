/*************************************************************************
	> File Name: C.c
	> Author: limeng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年07月19日 星期三 08时16分37秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    int i,j;
    char a[100001];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(a);
		for(i=0,j=0;i<strlen(a);i++)
        if(a[i]<0)
			    j++;
		printf("%d\n",j/2);   
    }
    return 0;
}
