/*************************************************************************
	> File Name: K.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 15:41:29 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int m, n, i, j;
    cin >> m >> n;
    for(i = 1; i <= m; i++){
        for(j = i + 1; j <= m; j++){
            if(i*i + n*n == j*j){
                cout << n << " " << i << " " << j << endl;
            }
        }
    }
    return 0;
}
