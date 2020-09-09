# include <stdio.h>
# include <math.h>
int main (void)
{
    int a = 1, b = 2, c = 1;
    double delta;
    double x1, x2; // 存放解的值
    //换行使代码更加规范
    delta = b*b - 4*a*c; // 适当加空格使代码更加清晰

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("两个解, x1 = %f, x2 = %f\n", x1, x2); // 该一元二次方程有两个解
    }
    else if (delta == 0)
    {
        x1 = (-b) / (2*a);
        x2 = x1;
        printf("一个解, x1 = x2 = %f\n", x1); // 该一元二次方程两个相等的解
    }
    else if (delta < 0)
    {
        printf("无解\n"); // 无解
    }
    
    return 0;
}