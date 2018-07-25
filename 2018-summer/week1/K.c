/*************************************************************************
	> File Name: K.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月25日 星期三 08时19分54秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int one_prime_check(int n){
    int i;
    //素数是大于１的自然数，因子只有１和它本身
    if(n<=1)
        return 0;
    for(i=2;i<=pow(n,0.5);i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main(void){
    int x,y;
    while(1){
        int flag = 1;
        scanf("%d%d",&x,&y);
        if(x==0 && y==0){
            break;
        }
        for(int i=x;i<=y;i++){
            if(one_prime_check(i*i+i+41) == 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            printf("OK\n");
        }else{
            printf("Sorry\n");
        }
    }
    return 0;
}
