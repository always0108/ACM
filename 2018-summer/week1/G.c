/*************************************************************************
	> File Name: G.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月24日 星期二 08时25分51秒
 ************************************************************************/

#include<stdio.h>

int main(void){
    
    int n,m,i,j;
    int num[101];
    while(1){
        scanf("%d%d",&n,&m);
        if(n==0 && m==0)
            break;
        for(i=0;i<n;i++){
            scanf("%d",&num[i]);
        }
        for(i=0;i<n;i++){
            if(num[i]>=m){
                for(j=n;j>i;j--){
                    num[j]=num[j-1];
                }
                num[i]=m;
                n++;
                break;
            }
        }
        for(i=0;i<n;i++){
            if(i<n-1){
                printf("%d ",num[i]);
            }else{
                printf("%d\n",num[i]);
            }
        }
    }
    return 0;
}
