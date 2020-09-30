/*************************************************************************
	> File Name: C.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六  9/26 19:38:42 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    if( n <= 1)
        return -1;
    while(n > 1){
        cout << n << endl;
        if(n % 2 == 1)
            n = 3 * n + 1;
        else
            n = n / 2; 
    }
    cout << n << endl;
    return 0;
}
