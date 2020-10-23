/*************************************************************************
	> File Name: L.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 三  9/30 14:26:10 2020
 ************************************************************************/

/*输入4个正整数，不改变他们的顺序，问你只使用加减乘除能否得到24.*/
/*没有好的思路，暂时没有解决*/
/*答案一半对，一半错*/
#include<iostream>
#include<stack>
using namespace std;
char op[4] = {'+','-','*','/'};
double num[4];
char a[3];
int get_pre(char op){
	if(op == '+')
		return 0; 
	if(op == '-')
		return 0;
	if(op == '/')
		return 1; 
	if(op == '*')
  		return 2;
}

double cal(double x, double y, char op)
{
	if(op == '+')
		return x + y; 
	if(op == '-')
  		return x - y; 
	if(op == '*')
  		return x * y; 
	if(op == '/')
  		return x / y; 
}

double fun(char op[])
{
	stack<double> s1;
 	s1.push(num[0]);
 	s1.push(num[1]);
 	stack<char> s2;
 	s2.push(op[0]);
 	int i = 1, j = 2;
 	while(!s2.empty()){
  		char tmp = s2.top();
  		if(i < 3 && get_pre(op[i]) >= get_pre(tmp)){
   			s1.push(num[j++]);
   			s2.push(op[i++]); 
  		}else{
   			int a = s1.top();
   			s1.pop();
   			int b = s1.top();
   			s1.pop();
   			s2.pop();
   			s1.push(cal(a,b,tmp));
  		}
	}
 	return s1.top();
}

int main(void)
{
	int i,j,k;
 	for(i = 0; i < 4; i++)
  		cin >> num[i];
 	for(i = 0; i < 4; i++)
  		for(j = 0; j < 4; j++)
   			for(k = 0; k < 4;k++){
    			a[0] = op[i];
    			a[1] = op[j];
    			a[2] = op[k];
    			if(fun(a) == 24){
     				cout << "Yes" << endl;
     			return 0;
    			}
   			}
	cout << "No" << endl;
	return 0;
}