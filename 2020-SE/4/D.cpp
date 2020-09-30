/*************************************************************************
	> File Name: D.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 二  9/29 15:33:06 2020
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<stack>

using namespace std;
stack <int> s1;
char s[1000];

int main(void)
{
    int n, i, num1, num2, result;
    cin >> s;
    n = strlen(s);
    for(i = 0; i < n; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            result = s[i] - '0';
            s1.push(result);
        }else{
            num2 = s1.top();
            s1.pop();
            num1 = s1.top();
            s1.pop();
            if(s[i] == '+')
                result = num1 + num2;
            else if(s[i] == '-')
                result = num1 - num2;
            else if(s[i] == '*')
                result = num1 * num2;
            else if(s[i] == '/')
                result = num1 / num2;
            s1.push(result);
        }
    }
    cout << result << endl;
}

