/*************************************************************************
	> File Name: C.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年08月07日 星期二 16时20分58秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int MAX(int a, int b){
    return a > b ? a : b;
}

int main(void){
    int num[1005], dp[1005], n, i, j, maxsum;
    while(1){
        memset(&num,0,sizeof(num));
        memset(&dp,0,sizeof(dp));
        maxsum = 0;
        scanf("%d",&n);
        if(n == 0) break;
        for(i = 1; i <= n; i++)
            scanf("%d",&num[i]);
        dp[1] = num[1];
        for(i = 2;i <= n ;i++){
            for(j = 1;j < i;j++){
                if(num[i] > num[j])
                    dp[i] = MAX(dp[i],dp[j] + num[i]);
            }
            dp[i] = MAX(dp[i],num[i]);//前面没有比他小的数，只能一步跳到这
        }
        for(i = 1;i <= n;i++)
            maxsum = MAX(maxsum,dp[i]);
        printf("%d\n",maxsum);    
    }
    return 0;
}
