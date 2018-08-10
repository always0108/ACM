/*************************************************************************
	> File Name: E.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年08月09日 星期四 14时53分37秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int a[105][105],dp[105][105];
int dir[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m,i,j;

int dfs(int x,int y)
{    
    if(!dp[x][y]){
        int max = 0;
        for(int i = 1; i <= m; i++){
            for(int j = 0; j < 4; j++){
                int xx = x + dir[j][0]*i;
                int yy = y + dir[j][1]*i;
                if(xx >= 0 && xx < n && yy >= 0 && yy < n && a[xx][yy] > a[x][y]){
                    int tmp = dfs(xx,yy);
                    if(tmp > max)
                        max = tmp;
                }
            }
        }
        dp[x][y] = max + a[x][y];
    }
    return dp[x][y];
}


int main(void)
{
    while(scanf("%d%d",&n,&m)){
        if(n == -1 && m == -1) break;
        memset(&a,0,sizeof(a));
        memset(&dp,0,sizeof(dp));
        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++)
                scanf("%d",&a[i][j]);
        printf("%d\n",dfs(0,0)); 
    }
    return 0;
}
