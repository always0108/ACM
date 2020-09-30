/*************************************************************************
	> File Name: L.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 15:49:09 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int close(int n)
{
    int i, sum = 0;
    for (i = 1; i * i <= n; i++){
        if (n % i == 0){
            if (i == 1 || i * i == n)
                sum += i;
            else
                sum += i + n / i;
        }
    }
    return sum;
}

int main(void)
{
    int i, num;
    for (i = 2; i <= 10000; i++){
        num = close(i);
        if (close(num) == i && i < num)
            cout << i << " " << num << endl;
    }
    return 0;
}
