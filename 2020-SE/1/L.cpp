/*************************************************************************
	> File Name: L.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六  9/26 20:55:52 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    long n , low;
    cin >> n;
    while(n > 0){
        low = n % 10;
        cout << low << endl;
        n = n / 10;
    }
    return 0;
}
