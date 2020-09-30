/*************************************************************************
	> File Name: H.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 一  9/28 22:27:44 2020
 ************************************************************************/

#include<iostream>
using namespace std;
/*n!末尾有几个零是由这个数字的质因子中有几个成对的2 和5 决定的。我们又知道n! = n(n-1)(n-2)...... 1 ,不难看出随着n的增大，n！中质因子2要比5多的多！
那么我们可以计算n中包含5的数量
1 × 2 × 3 × 4 × 5 × 6 × 7 × 8 × 9 × 2 × 11 × 12 × 13 × 14 × 3

　　　　　　　　　　　　　　　　  × 5　　　　　　　　     ×
每有一个5，阶乘末尾就会多出来一个0，这样n / 5
就能统计完第一层5的个数，依次处理，就能统计出来所有5的个数。
*/
int trailingZeroes(int n)
{  
    int count = 0;  
    while(n != 0){    
        n /= 5;
        count += n;
    }  
    return count;  
}  

int main(void)
{
    int n, m;
    cin >> n;
    while(n--){
        cin >> m;
        cout << trailingZeroes(m) << endl;
    }
    return 0;
}
