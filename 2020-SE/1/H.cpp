/*************************************************************************
	> File Name: H.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六  9/26 20:26:19 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int res = 3;
    for(int i = 0; i < 5; i++)
        res = (res - 1) * 2; 
    cout << res << endl;
    return 0;
}
