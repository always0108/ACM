/*************************************************************************
	> File Name: E.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六  9/26 20:08:35 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for(int i = 10; i < 100; i++){
        int count = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0)
                count++;
            if(count > n)
                break;
        }
        if(count == n)
            cout << i << endl;
    }
    return 0;
}
