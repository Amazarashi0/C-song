# include <stdio.h>
# include <math.h>
int main (void)
{
    int a = 1, b = 2, c = 1;
    double delta;
    double x1, x2; // ��Ž��ֵ
    //����ʹ������ӹ淶
    delta = b*b - 4*a*c; // �ʵ��ӿո�ʹ�����������

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("������, x1 = %f, x2 = %f\n", x1, x2); // ��һԪ���η�����������
    }
    else if (delta == 0)
    {
        x1 = (-b) / (2*a);
        x2 = x1;
        printf("һ����, x1 = x2 = %f\n", x1); // ��һԪ���η���������ȵĽ�
    }
    else if (delta < 0)
    {
        printf("�޽�\n"); // �޽�
    }
    
    return 0;
}