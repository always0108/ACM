/*************************************************************************
	> File Name: D.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六  9/26 19:54:31 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    for(int i = 10; i < 100; i++){
        int count = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0)
                count++;
            if(count > 4)
                break;
        }
        if(count == 4)
            cout << i << endl;
    }
    return 0;
}
