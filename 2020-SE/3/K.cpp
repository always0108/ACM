/*************************************************************************
	> File Name: K.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 三  9/30 12:58:56 2020
 ************************************************************************/

#include<iostream>
#define N 24
using namespace std;

bool flag = false;
char op[3] = {'+','-','*'};
char tmp[5];
int list[10];

void dfs(int a, int b, int step)
{
    if(step > 3){
        if(a == N){
            flag = true;
        }
        return ;
    }
    int i , res;
    for(i = 0; i < 3; i++){
        if(op[i] == '+'){
            res = a + b;
        }
        if(op[i] == '-'){
            res = a - b;
        }
        if(op[i] == '*'){
            res = a * b;
        }
        tmp[step - 1] = op[i];
        dfs(res,list[step+1],step+1);
    }
}

int main(void)
{
    for(int i = 0; i < 4;i++)
        cin >> list[i];
    dfs(list[0],list[1],1);
    if(flag){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    return 0;
}




