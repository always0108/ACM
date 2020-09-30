/*************************************************************************
	> File Name: H.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 12:21:13 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int i, j, k;
    for(i = 0; i <= 33; i++){
        for(j = 0; j <= 50; j++){
            if((9*i + 6*j + 100 - i -j) == 300){
                cout << i << " " << j << " " << 100 - i - j << endl;
            }
        }
    }
    return 0;
}
