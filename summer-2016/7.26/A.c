/*************************************************************************
	> File Name: A.c
	> Author:limeng 
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年07月26日 星期三 21时29分04秒
 ************************************************************************/

/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int x[8];
int y[8];
char a[8][8];
int sum;
void dfs(int count,int k,int n)
{
    if(count == k)
    {
        sum++;
        return ;
    }
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(x[i]==0&&y[j]==0&&a[i][j]=='#')
            {
                a[i][j]='.';
                x[i]=y[j]=1;
                dfs(count+1,k,n);
                a[i][j]='#';
                x[i]=y[j]=0;
            }
        }//会有重复的情况
    return ;
}

int main(void)
{
    int n,k;
    scanf("%d%d",&n,&k);
    getchar();
    while(1)
    {
        if(n==-1&&k==-1)
            break;
        int i,j;
        memset(x,0,8);
        memset(y,0,8);
        for(i=0;i<n;i++)
            memset(a[i],'0',n);
        sum=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                scanf("%c",&a[i][j]);
            getchar();
        }
        dfs(0,k,n);
        printf("%d\n",sum);
    }
    return 0;
}*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int n, k, ans;
char str[10][10];
int vis[100];

void dfs(int r, int k)
{
    if(k==0)
    {
        ans++;
        return;
    }

    for(int i=r; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(str[i][j]=='.' || vis[j]==1) continue;
            vis[j] = 1;
            dfs(i+1, k-1);
            vis[j] = 0;
        }
    }
}

int main(void)
{
    while(1)
    {
        scanf("%d %d", &n, &k);
        if(n==-1 && k==-1) break;
        memset(str, '\0', sizeof(str));
        memset(vis, 0, sizeof(vis));
        ans = 0;
        
        getchar();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                str[i][j] = getchar();
            getchar();
        }

        dfs(0, k);
        printf("%d\n", ans);
    }
    return 0;
}
