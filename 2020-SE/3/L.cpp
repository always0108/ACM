/*************************************************************************
	> File Name: L.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 三  9/30 14:26:10 2020
 ************************************************************************/

/*输入4个正整数，不改变他们的顺序，问你只使用加减乘除能否得到24.*/
/*没有好的思路，暂时没有解决*/
#include<iostream>
#include <cstdlib>
#include <sstream>
#include<string>
#include<stack>
using namespace std;
int a,b,c,d;
char op[4] = {'+','-','*','/'};


void expression_generation()
{
    int i,j,k;
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            for(k = 0; k < 4; k++){
                ostringstream oss;
                oss << a << op[i] << b << op[j] << c << op[k] << d; 
                cout << oss.str() << endl;
            }
}

int main(void)
{
    cin >> a >> b >> c >> d;
    expression_generation();
    return 0;
}

int priority(char ch){ //优先级 
	 if (ch == '(') return 1;  
    else if (ch == '+' || ch == '-') return 2;  
    else if (ch == '*' || ch == '/') return 3;  
    else return 4;
}

string midpresent(string str){ //转后缀
	stack<char> s;
	int len=str.length(), i=0;
	char temp;
	string res="";
	for(int i=0;i<len;i++){
		if(str[i] == ' ') continue;
        if(str[i] >='0' && str[i] <='9') res.push_back(str[i]);
		else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
			if(s.empty()) s.push(str[i]);
			else {
				while(!s.empty()){
					temp = s.top();
					if(priority(temp) >= priority(str[i])){
						res.push_back(temp);
						s.pop();
					}
					else break;
				}
				s.push(str[i]);
			}
		}
		else {
			if(str[i] == '(') s.push(str[i]);
			else{
				while(s.top() != '('){
					res.push_back(s.top());
					s.pop();
				}
				s.pop();
			}
		}
	}
	while(!s.empty()){
		res.push_back(s.top());
		s.pop();
	}
	return res;
}

double cal(string str){ //计算后缀
	int len=str.length();
	stack<double> s;
	double num1,num2;
	for(int i=0;i<len;i++){
		if(str[i] >='0' && str[i] <='9'){
		     s.push(str[i] - '0');
		}
		else{
			num2=s.top();
			s.pop();
			num1=s.top();
			s.pop();
			if(str[i] == '+'){
				s.push(num1+num2);
			}
			else if(str[i] == '-'){
				s.push(num1-num2);
			}
			if(str[i] == '*'){
				s.push(num1*num2);
			}
			if(str[i] == '/'){
				s.push(num1/num2);
			}
		}
	}
	return s.top();
}
