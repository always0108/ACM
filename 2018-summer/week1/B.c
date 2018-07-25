/*************************************************************************
	> File Name: B.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月23日 星期一 14时00分18秒
 ************************************************************************/

#include<stdio.h>
#define PI 3.1415927

int main(void){

    double r;
    while(scanf("%lf",&r)!=EOF){
        printf("%.3lf\n",(4.0/3)*PI*r*r*r);
    }
    return 0;
}
