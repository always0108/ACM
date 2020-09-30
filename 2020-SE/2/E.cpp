/*************************************************************************
	> File Name: E.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 10:40:17 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    if((n - 1) % 3 == 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
    return 0;
}
