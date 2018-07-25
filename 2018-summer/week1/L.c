/*************************************************************************
	> File Name: L.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月25日 星期三 08时40分43秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(void){
    char str[105];
    while(1){
        memset(&str,0,sizeof(str));
        gets(str);
        if(strlen(str) == 0){
            break;
        }
        int i;
        for(i=0;i<strlen(str);i++){
            if(str[i] != ' ' && str[i] >= 'a' && str[i] <= 'z'){
                str[i]=str[i]-32;
                break;
            }
        }
        for(i=0;i<strlen(str);i++){
            if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] >= 'a' && str[i+1] <= 'z'){
                    str[i+1]=str[i+1]-32;
            } 
        }
        printf("%s\n",str);
    }
    return 0;
}
