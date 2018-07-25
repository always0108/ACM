/*************************************************************************
	> File Name: C.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月23日 星期一 14时10分02秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int palindrome(char* str){
    int len = strlen(str);
    int i;
    for(i=0;i<len/2;i++){
        if(str[i] != str[len-1-i]){
            return 0;
        }
    }
    return 1;
}

int main(void){
    
    int n;
    scanf("%d",&n);
    getchar();
    while(n--){
        char str[10001];
        gets(str);
        if(palindrome(str)){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    return 0;
}

