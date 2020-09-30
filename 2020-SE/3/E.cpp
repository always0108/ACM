/*************************************************************************
	> File Name: E.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 20:49:08 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int a[20];
int b[20];

int main(void)
{
    int n, m, i, j;
    cin >> n;
    for(i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    for(i = 0; i < m; i++)
        cin >> b[i];
    i = 0;
    j = 0;
    while(i < n && j < m){
        if(a[i] < b[j])
            cout << a[i++] << endl;
        else
            cout << b[j++] << endl;
    }
    while(i < n)
        cout << a[i++] << endl;
    while(j < m)
        cout << b[j++] << endl;
    return 0;
}
