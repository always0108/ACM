/*************************************************************************
	> File Name: F.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 21:08:09 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int a[50][50];

int main(void)
{
    int m, n, i, j, count = 0;
    cin >> m >> n;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            cin >> a[i][j];
    for(i = 1; i < m - 1; i++)
        for(j = 1; j < n - 1; j++)
    if((a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j] && a[i][j] < a[i][j-1] && a[i][j] < a[i][j+1]) || (a[i][j] < a[i-1][j] && a[i][j] < a[i+1][j] && a[i][j] > a[i][j-1] && a[i][j] > a[i][j+1]))
        count++;
    cout << count << endl;
    return 0;
}
