/*************************************************************************
	> File Name: A.c
	> Author:limeng 
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年08月03日 星期四 08时05分12秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    char a[100001];
    char b[100001];
    char c[100001];
    char d[100001];
    int i,l,j,flag;
    while(scanf("%s %s",a,b)!=EOF)
    {
        i=0;
        flag=0;
        l=strlen(a)-1;
        for(j=0;j<l;j++)
        {
            if(a[i]=='.')
            {
                flag=1;
                break;
            }
        }
        while(a[i]=='0')
            i++;
        if(flag){
            while(a[l]=='0')
                l--;
        }
        for(j=0;i<=l;j++,i++)
            c[j]=a[i];
        c[j]='\0';
        if(c[j-1]=='.')
            c[j-1]='\0';
        
        i=0;
        flag=0;
        l=strlen(b)-1;
        for(j=0;j<l;j++)
        {
            if(b[j]=='.')
            {
                flag=1;
                break;
            }
        }
        while(b[i]=='0')
            i++;
        if(flag){
        while(b[l]=='0')
            l--;
        }
        for(j=0;i<=l;j++,i++)
            d[j]=b[i];
        d[j]='\0';
        if(d[j-1]=='.') 
            d[j-1]='\0';
        
        if(strlen(c)==0&&strlen(d)==0)
        {   puts("YES");
            continue ;
        }
        if(strcmp(c,d)==0)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
