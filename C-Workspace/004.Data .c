#include <stdio.h>
int main()
{
    /***********整数***********/
    int a = 88;
    unsigned int b = - 9;
    short int s = 12345;
    long int l = 123456789;

    printf("a = %o , b = %0x\n", a, b);
    printf("s = %d,l = %#x\n", s, l);

    /***********实数***********/
    float x = 3.14159e5;
    float f = 2.123456;    //初始化单精度浮点型变量f【保证6位有效数字（3.4 x e-38 ~ 3.4 x e38），4字节】
    double d = 2.123456789;    //初始化双精度浮点型变量d【保证15位有效数字（1.7 x e-308 ~ 1.7 x e308），8字节】

    printf("x = %f\n", x);
    printf("f = %.6f\nd = %.9f\n", f, d);   //输出f和d小数点后9位的值
    //%.9f表示显示小数点后9位


    /***********字符***********/
    char ch = 'A';  //单个字符型数据要用单引号括起来
    int zs = 66;

    printf("%c, %d\n", ch, ch);   //分别以字符格式和整数格式输出变量ch的值
    printf("%d, %c\n", zs, zs);   //分别以整数格式和字符格式输出变量zs的值

    //
    //ASCII码（ASCII字符集）规定了字符和整数值的对应关系，它规定具体某字符用哪个整数值表示

    return 0;
}
