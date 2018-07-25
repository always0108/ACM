/*************************************************************************
	> File Name: J.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月25日 星期三 08时02分37秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
long long factors_sum(long long n){
    long long i;
    long long sum = 0;
    for(i=1;i<n;i++){
        if(n%i==0)
            sum+=i;
    }
    return sum;
}

int amicable_numbers(long long a,long long b){
    if(factors_sum(a)==b && factors_sum(b)==a){
        return 1;
    }else{
        return 0;
    }
}

int main(void){

    long long a,b;
    int m;
    scanf("%d",&m);
    while(m--){
        scanf("%lld%lld",&a,&b);
        if(amicable_numbers(a,b)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
