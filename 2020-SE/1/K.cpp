/*************************************************************************
	> File Name: K.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六  9/26 20:46:17 2020
 ************************************************************************/

#include<iostream>
#include <climits>
using namespace std;

int main(void)
{
    int n , tmp , min = INT_MAX;
    cin >> n;
    while(n--){
        cin >> tmp;
        if(min > tmp)
            min = tmp;
    }
    cout << min << endl;
    return 0;
}
