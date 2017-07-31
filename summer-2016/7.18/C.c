/*************************************************************************
	> File Name: C.c
	> Author: limeng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年07月18日 星期二 10时21分28秒
 ************************************************************************/
//C - 偶数求和
/*有一个长度为n(n<=100)的数列，该数列定义为从2开始的递增有序偶数，现在要求你按照顺序每m个数求出一个平均值，如果最后不足m个，则以实际数量求平均值。编程输出该平均值序列。
*
* 输入数据有多组，每组占一行，包含两个正整数n和m，n和m的含义如上所述。
*
* 对于每组输入数据，输出一个平均值序列，每组输出占一行。 */
#include<stdio.h>
int main(void)
{
    int m,n,i,line[104],s,j,h;
    int aver1,aver2;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        line[0]=2;
        for(i=1;i<n;i++)
        line[i]=line[i-1]+2;
        h=n%m;
        for(j=0;j<n/m;j++)
        {  
            s=0;
            for(i=j*m;i<(j+1)*m;i++)
                s=line[i]+s;
            aver1=s/m;
            if(j==0)
                printf("%d",aver1);
            else 
		    printf(" %d",aver1);
        }
    if(h!=0)
    {
        s=0;
        for(i=n-h;i<n;i++)
            s=s+line[i];
        aver2=s/h;
        printf(" %d",aver2);
    }
    printf("\n");
    }
    return 0;
}
