/*************************************************************************
	> File Name: H.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 日 10/11 11:06:17 2020
 ************************************************************************/

#include <iostream>
using namespace std;

int m, n; 
struct Node
{
    char ch;                     //农场类型
    int visited;                 //访问标记
    int left, right, up, down;   //连通线
}maze[51][51];
int dir[4][2] = {{1,0}, {-1,0}, {0,-1}, {0,1}}; //上下左右四个方向
 
int Place(int x, int y, int nx, int ny)
{
    //未越界且没有被访问过
    if(nx > 0 && nx <= m && ny > 0 && ny <= n && !maze[nx][ny].visited){
        //向左
        if(nx == x && ny == y - 1 && maze[x][y].left && maze[nx][ny].right)
            return 1;
        //向下
        if(nx == x + 1 && ny == y && maze[x][y].down && maze[nx][ny].up)
            return 1;
        //向右
        if(nx == x && ny == y + 1 && maze[x][y].right && maze[nx][ny].left)
            return 1;
        //向上
        if(nx == x - 1 && ny == y && maze[x][y].up && maze[nx][ny].down)
            return 1;
    }
    return 0;
}

void dfs(int x, int y)
{
    maze[x][y].visited = 1;              //当前点已访问
    for(int i = 0; i < 4; i++){
        int nx = x + dir[i][0];
        int ny = y + dir[i][1];
        //将所有可连通的区域全部标记
        if(Place(x, y, nx, ny))
            dfs(nx, ny);
    }
}

int main(void)
{
    while(cin >> m >> n && (m != -1 || n != -1)){
        int cnt = 0, i, j;
        for(i = 1; i <= m; i++)
            for(j = 1; j <= n; j++){
                cin >> maze[i][j].ch;
                maze[i][j].visited = 0;
                maze[i][j].down = 0;
                maze[i][j].up = 0;
                maze[i][j].right = 0;
                maze[i][j].left = 0;
                switch(maze[i][j].ch){
                    case'A':    maze[i][j].left = 1;
                                maze[i][j].up = 1;
                                break;
                    case'B':    maze[i][j].right = 1;
                                maze[i][j].up = 1;
                                break;
                    case'C':    maze[i][j].left = 1;
                                maze[i][j].down = 1;
                                break;
                    case'D':    maze[i][j].right = 1;
                                maze[i][j].down = 1;
                                break;
                    case'E':    maze[i][j].up = 1;
                                maze[i][j].down = 1;
                                break;
                    case'F':    maze[i][j].left = 1;
                                maze[i][j].right = 1;
                                break;
                    case'G':    maze[i][j].left = 1;
                                maze[i][j].right = 1;
                                maze[i][j].up = 1;
                                break;
                    case'H':    maze[i][j].left = 1;
                                maze[i][j].up = 1;
                                maze[i][j].down = 1;
                                break;
                    case'I':    maze[i][j].left = 1;
                                maze[i][j].right = 1;
                                maze[i][j].down = 1;
                                break;
                    case'J':    maze[i][j].right = 1;
                                maze[i][j].up = 1;
                                maze[i][j].down = 1;
                                break;
                    case'K':    maze[i][j].left = 1;
                                maze[i][j].right = 1;
                                maze[i][j].up = 1;
                                maze[i][j].down = 1;
                                break;
                }
            }
        //连同区域的个数
        for(i = 1; i <= m; i++)
            for(j = 1; j <= n; j++){
                if(maze[i][j].visited == 0){
                    dfs(i, j);
                    cnt ++;
                }
            }
        cout << cnt << endl;
    }
    return 0;
}
