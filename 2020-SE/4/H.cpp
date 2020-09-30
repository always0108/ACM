/*************************************************************************
	> File Name: H.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 二  9/29 17:19:03 2020
 ************************************************************************/

#include<iostream>
using namespace std;
 
int used[10] = {0};
int a[3][3];
 
void search(int m);
bool isOk();
void output();
 
int main(){
    search(0);
    return 0;
}
 
void search(int m){
    int i;
    if(m == 9){
        if(isOk()){
            output();
            cout << endl;
        }
    }else{
        for(i = 1; i <= 9; i++){
            if(used[i] == 0){
                a[m / 3][m % 3] = i;
                used[i] = 1;
                search(m + 1);
                used[i] = 0;
            }
        }
    }
}
 
bool isOk(){
    int flag = 1;
    int i;
    for(i = 0; i < 3; i++){
        if(a[i][0] + a[i][1] + a[i][2] != 15 || a[0][i] + a[1][i] + a[2][i] != 15){
            flag = 0;
            return false;
        }
    }
 
    if(a[0][0] + a[1][1] + a[2][2] != 15 || a[0][2] + a[1][1] + a[2][0] != 15){
            flag = 0;
            return false;
    } 
    if(flag == 1){
        return true;
    }else{
        return false;
    }
}
 
void output(){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(j == 2){
                cout << a[i][j];
            }else{
                cout << a[i][j] <<" ";
            } 
        }
        cout << endl;
    }
}
