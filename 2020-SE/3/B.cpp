/*************************************************************************
	> File Name: B.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 16:25:24 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int getSum(int n)
{
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(void)
{
    int a[1000] = {1};
    int b[1000] = {3};
    int c[1000] = {9};
    int d[1000] = {0};
    int n, i, j, count = 0;
    for(i = 1; i < 1000; i++){
        a[i] = a[i-1] + getSum(a[i-1]);
        b[i] = b[i-1] + getSum(b[i-1]);
        c[i] = c[i-1] + getSum(c[i-1]);
    }
    cin >> n;
    while(n){
        count++;
        d[0] = n;
        for(i = 1; i < 1000; i++)        
            d[i] = d[i-1] + getSum(d[i-1]);
        int flag = 0;
        for(j = 0; j < 1000; j++){
            for(i = 0; i < 1000; i++){
                if(d[j] == a[i]){
                    flag = 1;
                    break;
                }
                if(d[j] == b[i]){
                    flag = 3;
                    break;
                }
                if(d[j] == c[i]){
                    flag = 9;
                    break;
                }
            }
            if(flag) break;
        }
        cout << "Case #" << count << endl;
        cout << "first meets river " << flag << " at " << d[j] << endl;
        cin >> n;
    }
    return 0;
}
