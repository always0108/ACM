/*************************************************************************
	> File Name: B.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 五 10/ 9 20:08:49 2020
 ************************************************************************/

#include<iostream>
using namespace std;

/* 贪心算法
 * 要使之能够多的装载集装箱，应使得每装集装箱的，和船的容量比一下，
 * 和哪个船的差值大的就装入这个集装箱里，保证能够有更多的空间装箱子
 */
/*
int main(void)
{
    int c1, c2, n, wi;
    while(true){
        bool flag = false;
        cin >> c1 >> c2 >> n;
        if(c1 == 0 && c2 == 0 && n == 0)
            break;
        while(n--){
            cin >> wi;
            if(wi <= c1 || wi <= c2){
                if(wi > c1)
                    c2 = c2 - wi;
                else if(wi > c2)
                    c1 = c1 - wi;
                else{
                    if(c1 - wi > c2 - wi)
                        c1 = c1 - wi;
                    else
                        c2 = c2 - wi;
                }
                if(c1 < 0 || c2 < 0){
                    flag = true;
                    break;
                }
            }else{
                flag = true;
                break;
            }
        }
        if(flag)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}*/

/*回溯法
 *（1） 首先将第一艘轮船尽可能装满；
 *（2） 将剩余的集装箱装上第二艘轮船。
 */

#include<iostream>   
using namespace std;   

int c1, c2, n;
int weight;
int best;
int boxw[11];

void backtrack(int a)
{
    if(a == n){
        if(weight > best)  
            best = weight;
        return ;
    }
    if(weight + boxw[a] <= c1){   
        weight = weight + boxw[a];
        backtrack(a + 1);
        weight = weight - boxw[a];
    }
    backtrack(a + 1);
}

int main(void)
{
    while(true){
        int sum = 0;
        cin >> c1 >> c2 >> n;
        if(c1 == 0 && c2 == 0 && n == 0)
            break;
        for(int i = 0; i < n; i++){
            cin >> boxw[i];
            sum += boxw[i];
        }
        best = weight = 0;
        backtrack(0);
        if(sum - best <= c2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

