/*************************************************************************
	> File Name: B.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年08月06日 星期一 10时05分54秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(void){
    int n;
    int dp[32768];
    memset(&dp, 0, sizeof(dp));
    dp[0] = 1;
    for(int i = 1;i <= 3;i++)
        for(int j = i;j < 32768; j++)
            dp[j] += dp[j - i];
    while(scanf("%d",&n) != EOF)
        printf("%d\n",dp[n]);
    return 0;
}
