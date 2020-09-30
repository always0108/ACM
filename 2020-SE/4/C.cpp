/*************************************************************************
	> File Name: C.cpp
	> Author:Li Meng
	> Mail:ldx19980108@gmail.com
	> Created Time: 二  9/29 11:08:00 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int a, b, c, a1, b1, c1;
    a = 1;
    if (a == 1) {     //甲对则乙丙错
        b = 0; 
        c = 0;
        if (b == 0)   //乙错则丙对
            c1 = 1;
    }
    if (c == c1)      //是否矛盾
        cout << 0 << endl;

    c = 1;
    if (c == 1) {    //丙对则甲乙错
        a = 0;
        b = 0;
        if (a == 0)  //甲错则乙对
            b1 = 1;
    }
    if (b == b1)
        cout << 2 << endl;
    
    b = 1;
    if (b == 1) {    //乙对则甲丙都错
        a = 0;
        c = 0;
        if (c == 0 && b == 1)//丙是错的并且乙是对的推出甲是错的
            a1 = 0;
    }
    if (a == a1)
        cout << 1 << endl;
    return  0;
}
