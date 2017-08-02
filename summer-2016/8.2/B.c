/*************************************************************************
	> File Name: B.c
	> Author:limeng 
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年08月02日 星期三 09时21分16秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int r, c, result;  
const int dir[4][2] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};  
int visletter[26], vis[21][21];  
char data[21][21];  
  
int  Judge(int i, int j)  
{  
    if(!visletter[data[i][j] - 'A'] && !vis[i][j] && i >= 0 && i < r && j >= 0 && j < c)
        return 1;
    return 0;
}  
  
void dfs(int i, int j, int step)  
{  
    visletter[data[i][j] - 'A'] = vis[i][j] = 1;  
    for(int k = 0; k < 4; k++)  
    {  
        int ii = i + dir[k][0];  
        int jj = j + dir[k][1];  
        if(Judge(ii, jj))  
        {  
            dfs(ii, jj, step + 1);  
            visletter[data[ii][jj] - 'A'] = vis[ii][jj] = 0;  
        }  
    }  
    if(result < step) 
        result = step;  
}  
  
int main(void)  
{  
    while(scanf("%d %d", &r, &c) != EOF)  
    {  
        result = 0;  
        for(int i = 0; i < r; i++)  
            scanf("%s", data[i]);  
        memset(visletter, 0, sizeof(visletter));  
        memset(vis, 0, sizeof(vis));  
        dfs(0, 0, 1);  
        printf("%d\n", result);  
    }  
}  
