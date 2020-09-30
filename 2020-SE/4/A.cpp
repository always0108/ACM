/*************************************************************************
	> File Name: A.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 二  9/29 10:19:14 2020
 ************************************************************************/

#include<iostream>
using namespace std;

bool zs(int a)
{
    if(a < 2)
        return false;
    for(int i = 2; i*i <= a; i++)
        if(a % i == 0)
            return false;
    return true;
}

int main(void)
{
    int a, b, i;
    cin >> a >> b;
    for(i = a; i <= b;i++)
        if(zs(i))
    cout << i << endl;
    return 0;
}
