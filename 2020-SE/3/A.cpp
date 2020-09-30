/*************************************************************************
	> File Name: A.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 16:07:08 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    int i, j;
    int a[13][50] = {0};
    for(i = 10; i < 100; i++){
        int b = 0;
        for(j = 1; j <= i; j++){
            if(i % j == 0)
                b++;
        }
        a[b][0]++;
        a[b][a[b][0]] = i;
    }
    for(i = 2; i <= 12; i++){
        cout << i << ":";
        for(j = 1; j <= a[i][0];j++)
            cout << " " << a[i][j];
        cout << endl;
    }
    return 0;
}
