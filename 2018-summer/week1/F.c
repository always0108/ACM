/*************************************************************************
	> File Name: F.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月24日 星期二 08时13分37秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(void){
    
    int n,k;
    char str[10001];
    scanf("%d",&n);
    getchar();
    while(n--){
        memset(&str,0,sizeof(str));
        k=0;
        fgets(str,10001,stdin);
        str[strlen(str)-1] = '\n';
        for(int i=0;i<strlen(str);i++){
            if(str[i]>='0' && str[i]<='9')
                k++;
        }
        printf("%d\n",k);

    }
    return 0;
}
