#include <stdio.h>
#include <stdlib.h>

#define PAI 3.14 /*������ű���*/

int main(void)
{
    double radius; /*����뾶����*/
    double result; /*����������*/

    printf("������Բ�İ뾶��"); /*��ʾ*/
    scanf_s("%lf", &radius); /*��������*/

    result = radius * radius * PAI; /*���м���*/

    printf("Բ�����Ϊ��%lf\n", result); /*��ʾ���*/

    return EXIT_SUCCESS; /*�������*/
}