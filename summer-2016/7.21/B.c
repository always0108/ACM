/*************************************************************************
	> File Name: B.c
	> Author: limeng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年07月21日 星期五 08时15分13秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(void)
{
    int n,i,l;
    int flag;
    char str[10001];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        flag=1;
        fgets(str,10001,stdin);
        str[strlen(str)-1]='\0';
        l=strlen(str);
        for(i=0;i<l/2;i++)
        {
            if(str[i]!=str[l-1-i])
            {
                flag=0;
                break;
            }
        }
        if(flag)
            printf("yes\n");
        else
            printf("no\n");
    }


    return 0;
}



