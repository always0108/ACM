/*************************************************************************
	> File Name: J.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 二  9/29 22:36:19 2020
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
int a[10000][10000];

void table(int k, int n)  
{  
    int i, j, t ,s;
    for(i = 1; i <= n; i ++)  
        a[1][i] = i;  
    int m = 1;                                                 //每次填充起始位置    
    for(s = 1; s <= k; s++){  
        n /= 2;  
        for(t = 1; t <= n; t++)                             //分的块数                          
            for(i = m + 1; i <= 2 * m; i++)  
                for(j = m + 1; j <= 2 * m; j++){    
                    a[i][j+(t-1)*m*2] = a[i-m][j+(t-1)*m*2-m];  //右下角的值等于左上角的值  
                    a[i][j+(t-1)*m*2-m] = a[i-m][j+(t-1)*m*2];  //左下角的值等于右上角的值  
                }  
        m *= 2;                                               //更新填充起始位置    
    }  
}  

int main(void)  
{  
    int k, i, j, n = 1;  
    cin >> k; 
    for(i = 1; i <= k; i++)  
        n *= 2;
    table(k, n);
    for(i = 1; i <= n; i ++){  
        for(j = 1; j <= n; j ++){
            cout << a[i][j];
            if(j < n)
                cout << " ";
        }
        cout << endl;
    }
    return 0;  
}  
