/*************************************************************************
	> File Name: A.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六  9/26 21:09:35 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int w[1001], v[1001];//w存储质量，v存储价值
int dp[1001][1001];

int main(void)
{   
    int n , c , i , j;
    //输入所需数据
    cin >> n >> c;
    for(i = 1; i <= n; i++)
        cin >> w[i];
    for(i = 1; i <= n; i++)
        cin >> v[i];
    //开始填表，从第1行到第n行依次填表
    for(i = 1; i <= n; i++){
        for(j = 1; j <= c; j++){
            for(int k = 0; k * w[i] <= j; k++){
                //判断放入k个i物品，是否价值更高
                if(dp[i][j] < dp[i-1][j-k*w[i]] + k*v[i])
                    dp[i][j] = dp[i-1][j-k*w[i]] + k*v[i];
            }
        }
    }
    cout << dp[n][c] << endl;
    return 0;
}
