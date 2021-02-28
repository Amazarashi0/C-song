#include <stdio.h>
#include <math.h>
int main ()
{
    int m , n;
    int k = 10;
    m = (3 > 2) && (k = 0);
    printf ("m = %d, k = %d\n", m, k);

    n = (k <= 5) || (k = 8);  //符号 || 左边表达式为真时不继续执行右边表达式，语句直接结束；符号 && 同理。
    printf ("n = %d, k = %d", n, k);

    return 0;
}
