#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void)
{
    printf("��ѧ������ʽ��%f\n", 123.45); /*��ѧ������*/
    printf("ָ����ʽ��%e\n", 5.458e-1); /*ָ����ʽ��ʾ*/

    printf("���������ͣ�%g������Ϊ��%d\n", 1.2345e2F, FLT_DIG); /*����������*/
    printf("˫�������ͣ�%lg������Ϊ��%d\n", 1.2345e2, DBL_DIG); /*˫��������*/
    printf("��˫�������ͣ�%Lg������Ϊ��%d\n", 5.458e-1L, LDBL_DIG); /*��˫��������*/

    return EXIT_SUCCESS;
}