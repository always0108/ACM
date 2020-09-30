/*************************************************************************
	> File Name: C.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 10:30:33 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    for(int i = 100; i < 1000; i++){
        int a = i % 10;
        int b = (i / 10) % 10;
        int c = ((i / 10) / 10) % 10;
        if(i == a*a*a + b*b*b + c*c*c)
            cout << i << endl;
    }
    return 0;
}
