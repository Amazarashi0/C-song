/*
    时间：2020/09/12
    目的：测试转义字符
    功能：
    IDE：VSC-1.49.0
    结果：
    ----------------
    ab      12
    A\B
    I say "Thank you !"
    ----------------
    总结：
*/

# include <stdio.h>
int main()
{
    printf("ab\a\t12\n");

    printf("\101\\\x42\n");

    printf("I say \"Thank you !\"\n");

    return 0;
}
