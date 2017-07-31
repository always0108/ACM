/*************************************************************************
	> File Name: B.c
	> Author: limeng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年07月20日 星期四 08时31分51秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,n,len,j,k,t;
    char s1[1005],s2[100];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        fgets(s1,1005,stdin);
        if(s1[strlen(s1)-1]='\n')
            s1[strlen(s1)-1]='\0';
        len=strlen(s1);
        for(i=0,j=0,t=0;i<len;i++)
        {
            if(s1[i]!=' ')
                s2[j++]=s1[i]; 
            else
            {
                if(t>0) printf(" "); 
                for(k=j-1;k>=0;k--)
                    printf("%c",s2[k]); 
                j=0;
                t++;
            }
            if(i==len-1) 
            {
                printf(" ");
                for(k=j-1;k>=0;k--)
                    printf("%c",s2[k]);
            }
        }
        printf("\n");
    }
    return 0;
}
