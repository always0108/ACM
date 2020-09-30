/*************************************************************************
	> File Name: G.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 22:20:12 2020
 ************************************************************************/

#include<iostream>
using namespace std;
int getSum(int n)
{
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(void)
{
    int n;
    cin >> n;
    int res = getSum(n);
    while(res >= 10)
        res = getSum(res);
    cout << res << endl;
    return 0;
}
