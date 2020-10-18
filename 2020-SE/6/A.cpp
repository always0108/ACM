/*************************************************************************
	> File Name: A.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 五 10/16 19:27:21 2020
 ************************************************************************/

#include <iostream>
#include <queue>
 
using namespace std;
 
int m, n;
int visited[100000];

int bfs()
{
    queue<int>q;
    q.push(m);
    visited[m] = 1;
 
    while(!q.empty()){
        int temp = q.front();
        q.pop();
 
        if(temp == n)
            return visited[n];
 
        //本题的关键新状态值小于n，否则指数级增长
        if(temp + 1 <= n && !visited[temp + 1]){
            q.push(temp + 1);
            visited[temp + 1] = visited[temp] + 1;
        }
        if(temp * temp <= n && !visited[temp * temp]){
            q.push(temp * temp);
            visited[temp * temp] = visited[temp] + 1;
        }
        if(temp * 2 <= n && !visited[temp * 2]){
            q.push(temp * 2);
            visited[temp * 2] = visited[temp] + 1;
        }
    }
    return 0;
}
 
int main(void)
{
    cin >> m >> n;
    cout << bfs() - 1 << endl;
    return 0;
}
