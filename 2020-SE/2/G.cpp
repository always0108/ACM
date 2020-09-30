/*************************************************************************
	> File Name: G.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 12:13:16 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b;
    if(a < b){
        c = a;
        a = b;
        b = c;
    }
    c = a % b;
    while(c){
        a = b;
        b = c;
        c = a % b;
    }
    cout << b << endl;
    return 0;
}
