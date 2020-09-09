# include <stdio.h>
int main()
{
    int max(int x, int y)
    {
        int z;
        
        if (x > y) z = x;
        else  z = y; 

        return z;
    }
    
    int a, b, c;

    scanf("%d %d",&a, &b);
    c = max(a, b);

    printf("���ֵ��%d\n", c);

    return 0;
}
/*
求两整数的最大�?
输入：两个整�?
输出：两个整数的最大�?
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