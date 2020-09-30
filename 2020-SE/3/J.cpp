/*************************************************************************
	> File Name: J.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 23:07:20 2020
 ************************************************************************/

#include<iostream>
#define N 24
using namespace std;

bool flag = false;
void calculate(int a,int b,int c,int d)
{
    if(a+b+c+d == N){
        flag = true;
        return ;
    }
    if(a+b+c-d == N){ 
        flag = true;
        return ;
    }
    if(a+b-c+d == N){
        flag = true;
        return ;   
    }
    if(a+b-c-d == N){
        flag = true;
        return ;
        
    }
    if(a-b+c+d == N){
        flag = true;
        return ;
        
    }
    if(a-b+c-d == N){
        flag = true;
        return ;
        
    }
    if(a-b-c+d == N){
        flag = true;
        return ;
        
    }
    if(a-b-c-d == N){
        flag = true;
        return ;
    }
}

int main(void)
{
    int a[4];
    for(int i = 0; i < 4;i++)
        cin >> a[i];
    calculate(a[0],a[1],a[2],a[3]);
    if(flag){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    return 0;
}

//全排列递归算法
/*void Perm(int list[] , int k ,int m) 
{
    if(flag == false){
	    //list 数组存放排列的数，K表示层 代表第几个数，m表示数组的长度
	    if(k == m){
		//K==m 表示到达最后一个数，不能再交换，最终的排列的数需要输出；
            calculate(list[0],list[1],list[2],list[3]);
	    }else{
	        for(int i = k;i <= m;i++){
	 		    swap(list[i],list[k]);
	 		    Perm(list,k+1,m);
	 		    swap(list[i] , list[k]);
		    }
	    } 
    }
}*/
