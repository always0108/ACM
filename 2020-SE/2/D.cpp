/*************************************************************************
	> File Name: D.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 10:35:10 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    while(n > 0){
        cout << n % 2 << endl;
        n /= 2;
    }
    return 0;
}
