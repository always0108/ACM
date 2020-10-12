/*************************************************************************
	> File Name: A.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 五 10/ 9 19:37:34 2020
 ************************************************************************/

#include<iostream>
using namespace std;
int w[11];
int p[11];
int m[1001][1001];

void bag(int n, int c)
{
    int i, j;
    for(i = 1; i <= n; i++)
        cin >> w[i];
    for(i = 1; i <= n; i++)
        cin >> p[i];
    memset(m, 0, sizeof(m));
    for(i = 1; i <= n; i++){
        for(j = 1; j <= c; j++){
            if(j >= w[i] && m[i-1][j-w[i]] + p[i] > m[i-1][j])
                m[i][j] = m[i-1][j-w[i]] + p[i];
            else
                m[i][j] = m[i-1][j];
        }
    }
    cout << m[n][c] << endl;
}

int main(void)
{
    int n, c;
    cin >> n >> c;
    while(true){
        if(n == 0 && c == 0)
            break;
        bag(n, c);
        cin >> n >> c;
    }
    return 0;
}
