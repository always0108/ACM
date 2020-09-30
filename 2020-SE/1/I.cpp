/*************************************************************************
	> File Name: I.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六  9/26 20:39:17 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int m , n;
    cin >> n >> m;
    int res = m;
    for(int i = 0; i < n; i++)
        res = (res - 1) * 2;
    cout << res << endl;
    return 0;
}
