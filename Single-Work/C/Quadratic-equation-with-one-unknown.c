#include<stdio.h>
#include<math.h>
int main (void)
{
    int a=1,b=2,c=4;
    float delta;
    delta=b*b-4*a*c;
    float x1,x2;//存放解的值
    if (delta>0)
    {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        printf("该一元二次方程有两个解，x1=%f,x2=%f\n",x1,x2);
    }
    else if (delta==0)
    {
        x1=(-b)/(2*a);
        x2=x1;
        printf("该一元二次方程两个相等的解，x1=x2=%f\n",x1,x2);
    }
    else if (delta<0)
    {
        printf("无解\n");
    }
}