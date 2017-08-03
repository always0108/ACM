/*************************************************************************
	> File Name: B.c
	> Author:limeng 
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年08月03日 星期四 09时30分34秒
 ************************************************************************/

#include<stdio.h>
int main(void)  
{  
    int n, b[6]={100,50,10,5,2,1}, sum, i, j, x;  
    while(scanf("%d",&n)&&n)  
    {  
        sum=0;  
        for(i=0;i<n;i++)  
        {  
            scanf("%d",&x);  
            for(j=0;j<6;j++)  
            {  
                if(x>=b[j])  
                {  
                    sum+=1;  
                    x=x-b[j];  
                    if(x==0)  
                        break;  
                    j=-1;  
                }  
            }  
        }  
        printf("%d\n",sum);  
    }  
    return 0;  
  
}  
