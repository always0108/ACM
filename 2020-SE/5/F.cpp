/*************************************************************************
	> File Name: F.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 六 10/10 16:37:09 2020
 ************************************************************************/

/*	"注意：只要所报的小数字是有可能的，即认为此人说了真话",
	这句话的意思是要先判断小数字，报小数字的小朋友踩过的气球，
	则报大数字的小朋友无法再踩，
	因此要做一个访问标记
	这题的主体的思路是 假设判断数字 n 能否由1到100之间的数字相乘得到，
	则判断 n % k == 0 ? dfs(n / k, k-1) : dfs(n, k-1) 依次判断下去，如果  
	n == 1 说明能找到1到100之间的且不重复的数相乘等于原来的n
*/
 
#include <iostream>
using namespace std;
bool vis[101];
 
bool dfs(int n, int k)
{
	if(n == 1)
		return true;
	if(k > 1){
		if(n % k == 0 && vis[k] == 0){
			vis[k] = 1;
			return dfs(n / k, k - 1);
		}else{
			return dfs(n, k-1);
		}
	}
	return false;
}
 
int main(void)
{
	int a, b, low, high;
	bool flag1, flag2;
	while(cin >> a >> b && (a != 0 && b != 0)){
		if(a > b){
			low = b;
			high = a;
		}else{
			low = a;
			high = b;
		}
		memset(vis, 0, sizeof(vis));
		flag1 = dfs(low, 100);
		flag2 = dfs(high, 100);
		if((flag1 && flag2) || (!flag1 && !flag2)){
			cout << high << endl;
		}else if (flag1 && !flag2){
			cout << low << endl;
		}else{
			cout << high << endl;
		}
	}
	return 0;
}
