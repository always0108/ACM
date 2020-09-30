/*************************************************************************
	> File Name: I.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 14:44:45 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int n, i, j;
    cin >> n;
    for(i = 1; i < n - 1; i++){
        for(j = i + 1;j < n; j++){
            if(i*i + j*j == (j+1)*(j+1)){
                cout << i << " " << j << " " << j + 1 << endl;
            }
        }
    }
    return 0;
}
