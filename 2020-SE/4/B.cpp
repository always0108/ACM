/*************************************************************************
	> File Name: B.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 二  9/29 10:38:01 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int vis[10001];

int main(void)
{
    int m, n;
    cin >> m >> n;
    int cnt_n = 0, cnt_2m = 0, i = 0;
	int flag = 1;
	while(cnt_2m < m * 2 - 1)
	{
		if(cnt_n == n-1 && vis[i] == 0){
			vis[i] = 1;
			cnt_n = 0;
			cnt_2m ++;
			if(cnt_2m == m){  //人数还剩一半，反转
				flag = -1;
			}
		}
		else{
			if(vis[i] == 0)	cnt_n ++;
		}
		i = (i + flag + m * 2) % (m * 2);		
	}
	for (i = 0; i < 2 * m; i++){
		if(vis[i] == 0){
			cout<< i + 1 <<endl;
            break;
		}
	}
    return 0;
}
