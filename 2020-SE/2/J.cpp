/*************************************************************************
	> File Name: J.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 15:35:30 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int n, i, j;
    cin >> n;
    for(i = 2; i < n; i++){
        for(j = i + 1;j <= n; j++){
            if((i-1)*(i-1) + i*i == j*j){
                cout << i-1 << " " << i << " " << j << endl;
            }
        }
    }
    return 0;
}
