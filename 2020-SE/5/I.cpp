/*************************************************************************
	> File Name: I.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六 10/10 17:04:43 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int m,n,x,y;//迷宫行数列数和点击的位置 
int maze[1000][1000];
int used[1000][1000];
int length;
int dir[8][2]={{0,1},{0,-1},{-1,0},{1,0},{-1,1},{-1,-1},{1,1},{1,-1}};

void dfs(int x,int y);

int main()
{
	while(cin >> m >> n >> x >> y && m && n && x && y){
		cin.get();
		for(int i = 1; i <= m; i++){
			for(int j = 1; j <= n; j++){
				maze[i][j] = cin.get(); 
				used[i][j] = 0;
			}
			cin.get();
		}
		length = 0;
		dfs(x,y);
		cout << length << endl;
	} 
	return 0;
}

void dfs(int x,int y)
{
	used[x][y] = 1;
	int nx, ny;
	for(int i = 0; i < 8; i++)
	{
		nx = x + dir[i][0];
		ny = y + dir[i][1];
		if(nx <= 0 || nx > m || ny <= 0 || ny > n){
			if(i < 4) length++;
			continue;
        }else if(used[nx][ny] == 1){
            continue;
        }else if(maze[nx][ny] == '.'){
			if(i < 4) length++;
			continue;
		}
	    else dfs(nx,ny); 	
	}
}
