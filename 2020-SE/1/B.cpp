/*************************************************************************
	> File Name: B.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六  9/26 19:33:01 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n; 
    long res = 0;
    for(int i = 1; i <= n; i++)
        res = res + i * i;
    cout << res << endl;
    return 0;
}
