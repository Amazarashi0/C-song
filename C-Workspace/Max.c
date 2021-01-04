# include <stdio.h>
# include <math.h>
int main()
{
    int a, b, c;

    int max(int x, int y)
    {
        int z;

        if (x > y) z = x;
        else  z = y;

        return z;
    }

    scanf("%d %d", &a, &b);
    c = max(a, b);

    printf("最大值是%d\n", c);

    return 0;
}
/*
求两整数的最大值
输入：两个整数
输出：两个整数的最大值
*/
/*
int max(int x, int ,y)
{
    int z;

    if (x > y) z = x;
    else  z = y;

    return z;
}
*/
