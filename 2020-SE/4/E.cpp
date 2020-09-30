/*************************************************mZ***********************
	> File Name: E.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 二  9/29 16:14:37 2020
 ************************************************************************/

/*①：f(m)=f(m-1)+f(m-2)+…+f(m-k)  ②：f(m-1)=f(m-2)+f(m-3)+…+f(m-k-1)              
①-②: f(m)-f(m-1)=f(m-1)-f(m-k-1)                  
f(m)=2*f(m-1)-f(m-k-1) */

#include<iostream>
using namespace std;

long a[100001];

long getK(long n,long k)
{
    if(n < k - 1)
        return 0;
    if(a[n] == 0)
        a[n] = 2 * getK(n-1,k) - getK(n-k-1,k);
    return a[n];
}
//0 1 1 2 3
int main(void)
{
    long k , m;
    cin >> k >> m;
    a[k-1] = 1;
    a[k] = 1;
    cout << getK(m,k) << endl;
    return 0;
}
