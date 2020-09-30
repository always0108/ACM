/*************************************************************************
	> File Name: G.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 二  9/29 17:16:29 2020
 ************************************************************************/

#include<iostream>
using namespace std;
/*char arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
int n;
char a[10];
int used[10] = {0};
 
void search(int m){
    int i;
    if(m == n){
        for(i = 0; i < n; i++){
            cout << a[i];
        }
        cout << endl;
    }else{
        for(i = 0; i < n; i++){
            if(used[i] == 0){
                a[m] = arr[i];
                used[i] = 1;
                search(m+1);
                used[i] = 0;
            }
        }
    }
} 
 
int main(void){
    cin >> n;
    search(0);
    return 0;
}*/

int n;
char A[10]={'a','b','c','d','e','f','g','h','i','j'};
void dfs(int m)
{
    int i;
    if(m == n){
        for(i = 0; i < n; i++)
            cout << A[i];
        cout << endl;
    }
    else{
        for(i = m; i < n; i++){
            swap(A[m], A[i]);   //交换
            dfs(m + 1);
            swap(A[m], A[i]);  //回溯
        }
    }
    return ;
}

int main()
{
    cin >> n;
    dfs(0);
    return 0;
}
 
