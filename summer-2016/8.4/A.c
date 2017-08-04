/*************************************************************************
	> File Name: A.c
	> Author:limeng 
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年08月04日 星期五 09时02分58秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    int n,i,j,l,flag;
    scanf("%d",&n);
    getchar();
    char str[100];
    while(n--)
    {
        getchar();
        scanf("%s",str);
        l=strlen(str);
        for(i=1;i<=l/2;i++)
        {
            flag=0;
            for(j=0;j<l-i;j++)
            {
                if(str[j]!=str[j+i])
                {   flag=1; 
                    break;  
                }
            }
            if(!flag)
            {    
                printf("%d\n",i);
                if(n!=0)
                    printf("\n");
                break;
            }
        }
    }
    return 0;
}
