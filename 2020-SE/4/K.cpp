/*************************************************************************
	> File Name: K.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 二  9/29 22:52:16 2020
 ************************************************************************/

#include <iostream>
#include <stdio.h>
using namespace std;
 
int sx, sy, fx, fy;
int m, n;
int maze[25][25];
int visited[25][25];
bool flag = false;
int dir[4][2] = {{1,0},{-1,0},{0,-1},{0,1}};
 
void dfs(int x,int y)
{
	if(x == fx && y == fy){
        flag = true;
		return;
	}
	visited[x][y] = 1;
	for(int i = 0;i < 4;i++){
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if(nx >= 0 && nx < m && ny >= 0 && ny < n && maze[nx][ny] == 0 && visited[nx][ny] == 0)
			dfs(nx,ny);
	}
    return;
}
 
int main()
{
	cin >> m >> n;
	cin >> sx >> sy;
	cin >> fx >> fy;
	for(int i = 0;i < m;i++)
		for(int j = 0;j < n;j++)
			cin >> maze[i][j];	
	dfs(sx,sy);
	if(flag)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
