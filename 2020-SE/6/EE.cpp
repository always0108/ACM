/*************************************************************************
	> File Name: EE.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六 10/17 16:49:54 2020
 ************************************************************************/

#include <iostream>
#include <queue>
 
using namespace std;
 
int used[654322];
 
struct node
{
    int table[6];
    int num;
};
 
node start;
 
queue <node> q1;
 
/*****函数声明*******/
void init();
 
int setnum(node n1);
 
bool bfs();
 
node operate(node now, int i);
 
bool isTarget(node n1);
 
/*********************/
 
int main()
{
    while(cin>>(start.table[0]))
    {
        for(int i=1; i<6; i++)
        {
            cin>>start.table[i];
        }
        start.num=setnum(start);
 
        init();
 
        if(bfs())
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
 
void init()
{
    for(int i=123456; i<654322; i++)
    {
        used[i]=0;
    }
    while(!q1.empty())
    {
        q1.pop();
    }
    q1.push(start);
    used[start.num]=1;
}
 
int setnum(node n1)
{
    n1.num=0;
    for(int i=0; i<6; i++)
    {
        n1.num*=10;
        n1.num+=n1.table[i];
    }
    return n1.num;
}
 
bool bfs()
{
    node now,next;
    while(!q1.empty())
    {
        now=q1.front();
        q1.pop();
 
        for(int i=0; i<2; i++)  //0==alpha,1==beta
        {
            next=operate(now, i);
            if(!used[next.num])
            {
                used[next.num]=1;
                if(isTarget(next))
                {
                    return true;
                }
                else
                {
                    q1.push(next);
                }
            }
        }
    }
    return false;
}
 
node operate(node now, int i)
{
    node next;
    switch(i)
    {
        case 0: //alpha操作
        {
            next.table[0]=now.table[3];     //A
            next.table[1]=now.table[0];     //B
            next.table[2]=now.table[2];     //C
 
            next.table[3]=now.table[4];     //D
            next.table[4]=now.table[1];     //E
            next.table[5]=now.table[5];     //F
            break;
        }
        case 1: //beta操作
        {
            next.table[0]=now.table[0];     //A
            next.table[1]=now.table[4];     //B
            next.table[2]=now.table[1];     //C
 
            next.table[3]=now.table[3];     //D
            next.table[4]=now.table[5];     //E
            next.table[5]=now.table[2];     //F
            break;
        }
    }
    next.num=setnum(next);
    return next;
}
 
bool isTarget(node n1)
{
    if(n1.num==123456)
    {
        return true;
    }
    else
    {
        return false;
    }
}
