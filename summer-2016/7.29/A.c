/*************************************************************************
	> File Name: A.c
	> Author:limeng 
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年07月29日 星期六 08时12分54秒
 ************************************************************************/
//Prime Ring Problem
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int book[25];
int result[25];
int n;
int num;

int prime(int n)
{
    if(n<=1)
        return 0;
    int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i*i>n)
        return 1;
    return 0;
}

int check(int i,int step)
{
    if((book[i]==0) && prime(i+result[step-1])==1)
    {
        if(step==n-1)
        {
            if(!prime(i+result[0]))
                return 0;
        }
        return 1;
    }
    return 0;
}

void dfs(int step)
{
    if(step==n)
    {
        int a;
        printf("%d",result[0]);
        for(a=1;a<n;a++)
        {
            printf(" %d",result[a]);
        }
        printf("\n");
        return ;
    }
    int i;
    for(i=2;i<=n;i++)
    {
        if(check(i,step))
        {
            book[i]=1;
            result[step]=i;
            dfs(step+1);
            book[i]=0;
        }
    }
}

int main(void)
{

    while(scanf("%d",&n)!=EOF)
    {
        num++;
        memset(result,0,sizeof(result));
        memset(book,0,sizeof(book));
        result[0]=1;
        printf("Case %d:\n",num);
        dfs(1);
        printf("\n");
    }
    return 0;
}

