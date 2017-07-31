/*************************************************************************
	> File Name: B.c
	> Author: limeng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年07月18日 星期二 10时05分57秒
 ************************************************************************/


/*青年歌手大奖赛中，评委会给参赛选手打分。选手得分规则为去掉一个最高分和一个最低分，然后计算平均得分，请编程输出某选手的得分。
 
 输入数据有多组，每组占一行，每行的第一个数是n(2<n<=100)，表示评委的人数，然后是n个评委的打分。

 对于每组输入数据，输出选手的得分，结果保留2位小数，每组输出占一行。
*/
#include<stdio.h>

int main(void)
{
    int n,i;
    float a[100];
    float max,min,sum,score;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%f",&a[i]);
        }
        max=min=a[0];
        sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
            if(a[i]>max)
                max=a[i];
            if(a[i]<min)
                min=a[i];
        }
        score=(sum-max-min)/(n-2);
        printf("%0.2f\n",score);
    }
    return 0;
}
