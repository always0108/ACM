/*************************************************************************
	> File Name: B.c
	> Author: limeng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年07月22日 星期六 08时17分19秒
 ************************************************************************/
/*小明今年3岁了, 现在他已经能够认识100以内的非负整数, 并且能够进行100以内的非负整数的加法计算. 
对于大于等于100的整数, 小明仅保留该数的最后两位进行计算, 如果计算结果大于等于100, 那么小明也仅保留计算结果的最后两位. 

例如, 对于小明来说: 
1) 1234和34是相等的 
2) 35+80=15 

给定非负整数A和B, 你的任务是代表小明计算出A+B的值. */

#include<stdio.h>

int jishu(int a){
    int ge,shi;
    if(a>0&&a<100)
        return a;
    if(a>=100)
    {
        ge=a%10;
        shi=(a/10)%10;
    }
    a=shi*10+ge;
    return a;
}

int main(void)
{
    int T;
    int a,b;
    int sum;
    scanf("%d",&T);
    getchar();
    while(T--)
    {
        scanf("%d%d",&a,&b);
        a=jishu(a);
        b=jishu(b);
        sum=a+b;
        sum=jishu(sum);
        printf("%d\n",sum);
    }
    return 0;
}
