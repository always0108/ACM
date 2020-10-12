/*************************************************************************
	> File Name: L.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六 10/10 17:21:13 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
    char str[19];
    int i, sum = 0;
    cin >> str;
    for(i = 0; i < 17; i++)
        sum += (i + 1) * (str[i] - '0');
    if(sum % 11 == (str[17]-'0') || (sum % 11 == 10 && str[17] == 'Y'))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
