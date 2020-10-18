/*************************************************************************
	> File Name: B.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 五 10/16 19:42:22 2020
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;

int xx1, yy1, xx2, yy2;
int used[50][50] = {0} ;
int s[20][20] = {0};
char route[20][20] = {0};
int dir[4][2] = {{1,0},{-1,0},{0,-1},{0,1}};

queue <int> x;
queue <int> y;

void bfs()
{
    while(!x.empty() && !y.empty()){
        //一旦发现不是0了，说明计数已经“计到了”这个位置。当前数值也就代表了步数
        //因为采取了广搜，所以不必担心，首先到达终点的情况肯定是“最小步数”的情况
        if(s[xx2][yy2] != 0){  //在没走到终点之前，终点位置的数值始终为0
            cout << s[xx2][yy2] << endl;
            break;
        }
        xx1 = x.front();
        yy1 = y.front();
        x.pop();
        y.pop();
        used[xx1][yy1] = 1;
        for(int i = 0;i < 4;i++){
	        int nx = xx1 + dir[i][0];
		    int ny = yy1 + dir[i][1];
		    if(route[nx][ny] == '.' && used[nx][ny] == 0){
			    x.push(nx);
                y.push(ny);
                s[nx][ny] = s[xx1][yy1] + 1;
	        }
        }
    }
}

int main(void)
{
    int i,j;
    cin >> xx1 >> yy1 >> xx2 >> yy2;
    x.push(xx1);
    y.push(yy1);
    for(i=1;i<=12 ;i++)
        for(j=1;j<=12;j++)
            cin >> route[i][j];
    bfs();
    return 0;
}
