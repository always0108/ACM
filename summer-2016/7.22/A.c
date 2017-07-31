/*************************************************************************
	> File Name: A.c
	> Author: limeng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年07月22日 星期六 08时04分39秒
 ************************************************************************/
//手机短号
#include<stdio.h>
#include<string.h> 

int main(void)
{
	int n;
	scanf("%d",&n);
        getchar();
	while(n--)
	{
	    char a[20];
		fgets(a,20,stdin);
		printf("6");
		for(int i=6;i<=11;i++)
		    printf("%c",a[i]);
	}
	return 0;
}
