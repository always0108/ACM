/*************************************************************************
	> File Name: I.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 二  9/29 22:16:24 2020
 ************************************************************************/

#include<iostream>
using namespace std;
 
int n, k;
int a[10000];
 
int findk(int st,int ed, int k);
 
int main(void)
{
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;
    cout << findk(0, n-1, k) << endl;
    return 0;
}
 
int findk(int st,int ed, int k)
{
    //先将数组分成两部分（快排思想）
    int key = a[ed];
    int left = st;
    int right = ed;
    while(left < right){
        while(left < right && a[left] <= key)
            left++;
        while(left < right && a[right] >= key)
            right--;
        if(left < right)
            swap(a[left], a[right]);
    }
    swap(a[ed], a[left]);
 
    //寻找第k小数在哪组
    if(left - st + 1 > k)
        return findk(st, left - 1, k);
    else if(left - st + 1 < k)
        return findk(left + 1, ed, k - (left - st + 1));
    else
        return a[left];
}
