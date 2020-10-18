/*************************************************************************
	> File Name: C.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 五 10/16 20:31:17 2020
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
struct dir
{
	int x;
	int y;
};
dir D[8] = { {-2,-1},{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2} };  //马跳的8个方向
int a[6];
queue<int> Q;
int visit[201][201];  //判断是否为重复点
int cnt;

int check(int a, int b)  //检查点是否在棋盘内
{
	if (a > 0 && a <= 200 && b > 0 && b <= 200)
		return 1;
	else
		return 0;
}
void BFS()
{
	int H, L;
	cnt = 0;
	Q.push(a[0]);
	Q.push(a[1]);
	Q.push(cnt);
	visit[a[0]][a[1]] = 1;
	while (!Q.empty()){
		H = Q.front(); 
        Q.pop();
		L = Q.front(); 
        Q.pop();
		cnt = Q.front(); 
        Q.pop();
		if (H == a[2] && L == a[3]){
			cout << cnt << endl;
			return;
		}
		for (int i = 0; i < 8; i++){
				if (check(H + D[i].x, L + D[i].y) && !visit[H + D[i].x][L + D[i].y]){
					Q.push(H + D[i].x);
					Q.push(L + D[i].y);
					Q.push(cnt + 1);
					visit[H + D[i].x][L + D[i].y] = 1;
				}
		}
	}
	cout<<"can not reach!"<<endl;
}

int main(void)
{
	int n;
	cin >> n;
	while (n--){
		while (!Q.empty())
			Q.pop();
		memset(visit, 0, sizeof(visit));
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		BFS();
	}
	return 0;
}

