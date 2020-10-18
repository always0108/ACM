/*************************************************************************
	> File Name: D.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六 10/17 14:27:12 2020
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;
char map[21][21];
int used[21][21][5][4] = {0};
int step[21][21][5][4] = {0};
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int sx, sy, sc, sd;
int tx, ty, tc;
typedef struct node
{
    int row;
    int col;
    int colour;
    int dire;
}Piont;

queue<Piont>q;

Piont find(Piont x,int i)
{
    if(i == 0){
        x.colour = (x.colour + 1) % 5;  // 直走
        x.row = x.row + dx[x.dire];
        x.col = x.col + dy[x.dire];
    }
    if(i == 1){
        x.dire = (x.dire + 1) % 4;      // 向右转
    }
    if(i == 2){
        x.dire = (x.dire + 3) % 4;      // 向左转
    }
    return x;
}

int bfs(int x,int y,int c,int d)
{
    int i;
    Piont u = {x,y,c,d}, v;
    q.push(u);
    while(!q.empty()){
        u = q.front();
        q.pop();
        for(i = 0; i < 3; i++){
            v = find(u,i);
            if(v.row == tx && v.col == ty && v.colour == tc)
                return step[u.row][u.col][u.colour][u.dire] + 1;
            if(v.row > 0 && v.row < 21 && v.col > 0 && v.col < 21 && used[v.row][v.col][v.colour][v.dire] == 0 && map[v.row][v.col] == '.'){
                q.push(v);
                used[v.row][v.col][v.colour][v.dire] = 1;
                step[v.row][v.col][v.colour][v.dire] = step[u.row][u.col][u.colour][u.dire] + 1;
            }
        }
    }
    return -1;
}

int changercolour(char x)
{
    if(x == 'R')  return 0;
    if(x == 'Y')  return 1;
    if(x == 'B')  return 2;
    if(x == 'W')  return 3;
    if(x == 'G')  return 4;
    return -1;
}

int changerdire(char x)
{
    if(x == 'E')  return 0;
    if(x == 'S')  return 1;
    if(x == 'W')  return 2;
    if(x == 'N')  return 3;
    return -1;
}

int main(void)
{
    int i, j, num;
    char scolour, sdire, tcolour;
    cin >> sx >> sy >> scolour >> sdire;//初始坐标颜色方向
    cin>> tx >> ty >> tcolour;
    for(i = 1; i < 21; i++)
        for(j = 1; j < 21; j++)
            cin >> map[i][j];
    sc = changercolour(scolour);
    sd = changerdire(sdire);
    tc = changercolour(tcolour);
    used[sx][sy][sc][sd] = 1;
    num = bfs(sx,sy,sc,sd);
    cout << num << endl;
    return 0;
}

/*
3 4 R N
15 17 Y
XXXXXXXXXXXXXXXXXXXX
X.X...XXXXXX......XX
X.X.X.....X..XXXX..X
X.XXXXXXX.XXXXXXXX.X
X.X.XX....X........X
X...XXXXX.X.XX.X.XXX
X.X.XX....X.X..X.X.X
X.X.X..XX...XXXX.XXX
X.X.XX.XX.X....X.X.X
X.X....XX.X.XX.X.X.X
X.X.X.XXXXX.XX.X.XXX
X.X.X.XXXXX....X...X
X.X.......X.XX...X.X
X.XXX.XXX.X.XXXXXXXX
X.....XX.......X...X
XXXXX....X.XXXXXXX.X
X..XXXXXXX.XXX.XXX.X
X.XX...........X...X
X..X.XXXX.XXXX...XXX
XXXXXXXXXXXXXXXXXXXX
*/
