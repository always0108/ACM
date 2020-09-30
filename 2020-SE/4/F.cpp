/*************************************************************************
	> File Name: F.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 二  9/29 16:58:37 2020
 ************************************************************************/

#include<iostream>
using namespace std;
int a[21];
int n;

void Binary(int i)
{
    if(i >= n){
        for(int j = 0; j < n; j++)
            cout << a[j];
        cout << endl;
        return ;
    }
    a[i] = 0;
    Binary(i + 1);
    a[i] = 1;
    Binary(i + 1);
}

int main()
{
    cin >> n;
    Binary(0);
    return 0;
}
