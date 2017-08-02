/*************************************************************************
	> File Name: A.c
	> Author:limeng 
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年08月02日 星期三 08时34分56秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int a[20],b[20],c[20];  
int main(void)  
{  
    long long  i;
    long long  j;  
    long long  n,T,cas=1;  
    while(scanf("%d",&n)!=EOF)
    {  
        if(n==0)
            break;
        for(i=0; i<n; i++)  
            scanf("%d %d %d",&a[i],&b[i],&c[i]);  
        for(i=0; i<1000000; i++)  //时间轴
        {  
            long long  cont=0;  
            for(j=0; j<n; j++)  
            {  
                T=a[j]+b[j];  
                if((i+c[j]-1)%T<a[j]) cont++;//醒；  
                else cont--;  
            }  
            if(cont>0)  
                break;  
        }  
        printf("Case %d: ",cas++);  
        if(i>=1000000)  
            printf("-1\n");  
        else  
        {  
            int ans=-1;  
            for(j=0; j<n; j++)  
            {  
                T=a[j]+b[j];  
                if((i+c[j]-1)%T>=a[j])//睡  
                {
                    if(ans<(T-(i+c[j]-1)%T))
                        ans=T-(i+c[j]-1)%T;//一半人以上都醒着，睡着醒来就不会再睡觉        
                }//找到最后一个人醒来所需要睡的时间
            }  
            printf("%lld\n",i+ans+1);//最后一个人睡觉结束后一分钟全部清醒  
        }  
    }  
    return 0;  
} 
