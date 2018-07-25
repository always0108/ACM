/*************************************************************************
	> File Name: A.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年07月23日 星期一 11时32分39秒
 ************************************************************************/

#include<stdio.h>

int main(void){

    char a[3];
    char t;
    int i,j;
    while(scanf("%c%c%c",&a[0],&a[1],&a[2])!=EOF){
        getchar();
        for(i=0;i<3;i++){
            for(j=0;j<3-i-1;j++){
                if(a[j+1]<a[j]){
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
        for(i=0;i<3;i++){
            if(i<2)
                printf("%c ",a[i]);
            else
             printf("%c\n",a[i]);
        }
    }
    return 0;
}
