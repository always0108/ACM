/*************************************************************************
	> File Name: D.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六 10/10 14:15:48 2020
 ************************************************************************/

#include<iostream>
using namespace std;
int a[21];
int cnt = 0;

bool is_prime(int num);
void print_result();
void search(int m);
void swap(int m, int n);

bool is_prime(int num)
{
    for(int i = 2; i*i <= num; i++)
        if(num % i == 0)
            return false;
    return true;
}

void print_result()
{
    for(int i = 1; i < 20; i++)
        cout << a[i] << " ";
    cout << a[20] << endl;
}

void search(int m)
{
    if(m > 20){
        if(is_prime(a[1]+a[20])){
            cnt++;
            if(cnt == 2){      //第二个搜索出来的结果满足条件
                print_result();
                exit(0);
            }
        }
        return ;
    }else{
        for(int i = m; i <= 20; i++){
            swap(m,i);
            if(is_prime(a[m-1]+a[m]))
                search(m+1);
            swap(m,i);
        }
    }
}

void swap(int m, int n)
{
    int t = a[m];
    a[m] = a[n];
    a[n] = t;
}

int main(void)
{
    for(int i = 1; i <= 20; i++)
        a[i] = i;
    search(2);
    return 0;
}
