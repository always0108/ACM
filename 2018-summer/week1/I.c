/*************************************************************************
	> File Name: I.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月24日 星期二 19时56分30秒
 ************************************************************************/

#include<stdio.h>

int main(void){

    int m;
    double a,b,c;
    scanf("%d",&m);
    while(m--){
        scanf("%lf%lf%lf",&a,&b,&c);
        if(a+b>c && b+c>a && a+c>b && a>0 && b>0 && c>0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
