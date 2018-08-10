/*************************************************************************
	> File Name: F.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年08月10日 星期五 09时56分26秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(void){
    
    int n , k , one[2005] , two[2005] , dp[2005];
    scanf("%d",&n);
    while(n--){
        memset(&one,0,sizeof(one));
        memset(&two,0,sizeof(two));
        memset(&dp,0,sizeof(dp));
        scanf("%d",&k);
        for(int i = 1; i <= k; i++)
            scanf("%d",&one[i]);
        for(int i = 1; i < k; i++)
            scanf("%d",&two[i]);
        dp[0] = 0;
        dp[1] = one[1];
        for(int i = 2; i <= k; i++){
            if(dp[i-1] + one[i] < dp[i-2] + two[i-1])
                dp[i] = dp[i-1] + one[i];
            else
                dp[i] = dp[i-2] + two[i-1];
        }
        int s = dp[k] % 60;
        int m = (dp[k]/60) % 60;
        int h = (dp[k]/3600);
        if(h > 3)
            printf("%02d:%02d:%02d pm\n", 8+h, m, s);
        else
            printf("%02d:%02d:%02d am\n", 8+h, m, s);
    }
    return 0;
}
