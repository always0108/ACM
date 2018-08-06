/*************************************************************************
	> File Name: A.c
	> Author: Li Meng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2018年08月06日 星期一 09时38分30秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main(void){
    int a[100][100];
    int c,n,i,j;
    scanf("%d",&c);
    while(c--){
        scanf("%d",&n);
        memset(&a,0,sizeof(a));
        for(i = 0;i < n;i++)
            for(j=0;j <= i;j++)
                scanf("%d",&a[i][j]);
        for(i = n - 2;i >= 0; i--){
            for(j = 0;j < i+1;j++){
                if(a[i+1][j] > a[i+1][j+1])
                    a[i][j] += a[i+1][j];
                else
                    a[i][j] += a[i+1][j+1];
            }
        }
        printf("%d\n",a[0][0]);
    }
    return 0;
}
