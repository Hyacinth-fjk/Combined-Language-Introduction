#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char* s = "Hello";

    printf("�ַ���Ϊ��\n\t%10s\n\t%-10s\n\t%*s\n", s, s, 10, s);
    printf("�ַ�Ϊ:%c %%\n", 65);

    printf("ʮ��������Ϊ��%i %d %.6i %.0i %+i %u\n", 1, 2, 3, 0, 4, -1);
    printf("ʮ����������Ϊ��%x %#x %X %#X\n", 5, 5, 10, 10);
    printf("�˽�������Ϊ��%o %#o %#o\n", 10, 10, 4);

    printf("ʮ���Ƹ�����Ϊ��%f %.0f %.20f\n", 1.5, 1.5, 1.3);
    printf("����λ���ĸ�����Ϊ��:%05.2f %.2f %5.2f\n", 1.500, 1.5, 10.5011);
    printf("ָ����ʽ������Ϊ��%e %E\n", 1.5, 1.5);
    printf("ʮ�����Ƹ�����Ϊ��%a %A\n", 1.5, 1.5);

    return EXIT_SUCCESS;
}