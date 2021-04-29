#include <stdio.h>
int main ()
{
    int i;
    scanf("%d", &i);  //：55s
    printf("%d\n", i); //：55，只读取整型数据55的代码并输出；
    scanf("%c", &i);  //：s
    printf("%c\n", i);  //：s

    return 0;
}
