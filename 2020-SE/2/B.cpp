/*************************************************************************
	> File Name: B.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 10:18:22 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    long x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    long a = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    long b = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
    long c = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
    if((a + b == c) || (a + c == b) || (b + c == a)){
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}
