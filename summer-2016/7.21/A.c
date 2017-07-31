/*************************************************************************
	> File Name: A.c
	> Author: limeng
	> Mail: ldx19980108@gmail.com
	> Created Time: 2017年07月21日 星期五 08时25分52秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>


int main(void)
{
    double temp,sum,aver;
    sum = 0;
    int i;
    for(i=0;i<12;i++)
    {
        scanf("%lf",&temp);
        sum+=temp;
    }
    aver = sum/12;
    printf("$%.2lf\n",aver);


    return 0;
}
