/*************************************************************************
	> File Name: C.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 17:21:05 2020
 ************************************************************************/

#include<iostream>
using namespace std;
bool hws(long a)
{
    long res = 0,tmp = a;
    while(tmp > 0){
        res = res * 10 + tmp % 10;
        tmp /= 10; 
    }
    if(res == a)
        return true;
    else
        return false;
}

bool zs(long a)
{
    for(long i = 2; i*i <= a; i++)
        if(a % i == 0)
            return false;
    return true;
}

int main(void)
{
    long a, b, i;
    cin >> a >> b;
    if(a % 2 == 0)      //偶数不是回文素数
        a++;
    if(b > 9989899)     //9989899后面没有回文素数  
        b = 9989899;
    for(i = a; i <= b; i = i + 2){
        if(i % 3 == 0)  //3的倍数也不是回文素数
            continue;
        if(hws(i) && zs(i))
            cout << i << endl;
    }
    return 0;
}
