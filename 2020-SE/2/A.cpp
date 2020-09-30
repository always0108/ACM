/*************************************************************************
	> File Name: A.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 10:09:38 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int n;
    bool flag = true;
    cin >> n;
    for(int i = 2; i*i <= n; i++){
        if( n % i == 0){
            flag = false;
            break;
        }
    }
    if(flag || n == 2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
