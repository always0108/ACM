/*************************************************************************
	> File Name: D.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月23日 星期一 17时11分48秒
 ************************************************************************/

#include<stdio.h>

int main(void){

    int a,b,c;
    while(scanf("%d%d",&a,&b)!=EOF){
        int k;
        if(a<b){
            k=a;
            a=b;
            b=k;
        }
        int sum = a*b;
        while(b!=0){
            c=a%b;
            a=b;
            b=c;
        }
        printf("%d\n",sum/a);
    }
    return 0;
}
