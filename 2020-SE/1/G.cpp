/*************************************************************************
	> File Name: G.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六  9/26 20:17:37 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int a , b , c;
    cin >> a >> b >> c;
    for(int i = 7; i <= 105; i++){
        if((i % 7 == c) && (i % 5 == b) && (i % 3 == a))
            cout << i << endl;
    }
    return 0;
}
