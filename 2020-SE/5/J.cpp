/*************************************************************************
	> File Name: J.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一 10/12 11:07:32 2020
 ************************************************************************/

#include<iostream>
using namespace std;

const int N = 20;
int n, k, m;
int a[N][N];    //邻接矩阵存储无向图
int color[N];   //顶点是否涂色
int ans = 0;

void read() {
    cin >> n >> k >> m;
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
}

bool check(int x) {
    for (int i = 0; i < n; i++)
        if (a[x][i] == 1 && color[i] == color[x])
            return false;
    return true;
}

void dfs(int x) {
    if (x >= n) {
        ans++;
        return;
    }
    for (int i = 1; i <= m; i++)
        if (!color[x]) {
            color[x] = i;
            if (check(x))
                dfs(x + 1);
            color[x] = 0;
        }
}

int main(void) {
    read();
    dfs(0);
    cout << ans << endl;
    return 0;
}

