/*************************************************************************
	> File Name: E.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月23日 星期一 20时51分35秒
 ************************************************************************/

#include<stdio.h>

int main(void){

    long long a,b;
    char c;
    int n;
    scanf("%d",&n);
    getchar();
    while(n--){
        scanf("%c%lld%lld",&c,&a,&b);
        getchar();
        switch(c){
            case '+':
                printf("%lld\n",a+b);
                break;
            case '-':
                printf("%lld\n",a-b);
                break;
            case '*':
                printf("%lld\n",a*b);
                break;
            case '/':
                if((a*1.0)/b - a/b == 0){
                    printf("%lld\n",a/b);
                }else{
                    printf("%.2lf\n",((a*1.0)/b));
                }
                break;
        }
    }
    return 0;
}
