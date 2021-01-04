#include <stdio.h>
int main()
{
    char ch = 'A';  //单个字符型数据要用单引号括起来
    int zs = 66;

    printf("%c, %d\n", ch, ch);   //分别以字符格式和整数格式输出变量ch的值
    printf("%d, %c\n", zs, zs);   //分别以整数格式和字符格式输出变量zs的值

    return 0;
}
//ASCII码（ASCII字符集）规定了字符和整数值的对应关系，它规定具体某字符用哪个整数值表示
