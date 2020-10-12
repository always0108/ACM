/*************************************************************************
	> File Name: E.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六 10/10 14:58:57 2020
 ************************************************************************/

#include<iostream>
using namespace std;
char maze[20][20];
int dir[4][2] = {{0,-1},{1,0},{0,1},{-1,0}};
bool flag = false;
int xx1,yy1,xx2,yy2;

bool check(int x,int y)
{
    if(x >= 0 && x < 20 && y >= 0 && y < 20 && maze[x][y] == '.')
        return true;
    return false;
}

void dfs(int x, int y)
{
    maze[x][y] = ' '; //走过的位置标记为空格,也可单独设置一个vis数组来记录是否走过
    if(x == xx2 && y == yy2){
        flag = true;        
        return;
    }
    int i, j, xx, yy;
    for(i = 0; i < 4; i++){
        xx = x + dir[i][0];
        yy = y + dir[i][1];
        if(check(xx,yy))
            dfs(xx,yy);
    }
}

int main(void)
{
    int n;
    cin >> n;
    while(n--){
        int i, j;
        cin >> xx1 >> yy1 >> xx2 >> yy2;
        cin.get();
        for(i = 0; i < 20; i++){
            for(j = 0; j < 20; j++)
                maze[i][j] = cin.get();
            cin.get();
        }
        flag = false;
        dfs(xx1,yy1);
        if(flag){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}

