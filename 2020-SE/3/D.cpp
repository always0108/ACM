/*************************************************************************
	> File Name: D.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 17:51:18 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int dp[10001] = {0,1};
    int n, i, sum = 0;
    cin >> n;
    for(i = 1; i <= n; i++){
        if(dp[i] == 0)
            dp[i] = i * dp[i-1];
        sum = sum + dp[i];
    }
    cout << sum << endl;
    return 0;
}
