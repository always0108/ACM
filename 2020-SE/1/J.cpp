/*************************************************************************
	> File Name: J.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六  9/26 20:43:30 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int n,tmp;
    cin >> n;
    long sum = 0;
    while(n--){
        cin >> tmp;
        sum += tmp;
    }
    cout << sum << endl;
    return 0;
}
