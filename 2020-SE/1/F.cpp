/*************************************************************************
	> File Name: F.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六  9/26 20:11:11 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    for(int i = 11; i <= 105 ; i++){
        if((i % 7 == 4) && (i % 5 == 1) && (i % 3 == 2))
            cout << i << endl;
    }
    return 0;
}
