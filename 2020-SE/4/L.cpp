/*************************************************************************
	> File Name: L.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 二  9/29 23:20:02 2020
 ************************************************************************/

#include<iostream>
#include<math.h>

using namespace std;
int n = 8, a[8] , counter=1;

void search(int m);
int  canplace(int row,int col);
void output();

int main(void)
{
	search(0);
	return 0;
}

void search(int m)//回溯法递归求解每一行的情况
{
	if(m == n)
        output();
	else{
		for(int i = 0; i < n; i++){
			if(canplace(m, i)){     //判断在该处是否能放置皇后
			    a[m] = i;           //用m表示行数，i表示列数，可以避免二维数组判断时带来的麻烦
			    search(m + 1);      //求解下一行的情况
		    }
		}
	}
}

int canplace(int row ,int col)
{
	int i, j, flag;
	flag = 1;
	for(i = 0; i < row; i++){
		if(a[i] == col || fabs(row-i) == fabs(col-a[i]) ){//判断该列是否有皇后及于此位置在同一斜线上的位置处是否有皇后
		    flag = 0;//若存在，则此处不能放置皇后
		    break;
	    }
	}
	return flag;
}

void output()
{
    int i, j;
    cout << "No " << counter << ":" << endl;
	counter++;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(j == a[i])
                cout << "A";
			else
                cout << ".";
		}
		cout << endl;
	}
}
