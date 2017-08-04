/*************************************************************************
	> File Name: B.c
	> Author:limeng 
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年08月04日 星期五 08时16分13秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(void)
{
    int i,j,l;
    double temp,sum;
    int num;
    char str[100];
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        scanf("%s",str);
        sum = 0;
        num = 0;
        char a[4];
        l=strlen(str);
        j=l-1;
        i=l-1;
        while(i>=0&&j>=0){
            while(str[i]<='9'&&str[i]>='0')
                i--;
            if(i==j)
                num=1;
            else
            {
                strncpy(a,str+i+1,j-i);
                a[j-i]='\0';
                num=atoi(a);
            }
                switch(str[i])
                {
                    case 'C':
                        temp=12.01;
                        break;
                    case 'H':
                        temp=1.008;
                        break;
                    case 'O':
                        temp=16;
                        break;
                    case 'N':
                        temp=14.01;
                        break;
                }
                sum=sum+temp*num;            
                j=i-1;
                i=i-1;
        }
        printf("%0.3lf\n",sum);
    }
}

