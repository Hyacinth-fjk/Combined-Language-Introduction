#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float float_num; /*���嵥�������ͱ���*/
    float_num = 1.23F; /*Ϊ������ֵ*/
    printf("%f\n", float_num); /*���������ֵ*/

    double double_num; /*����һ��˫�������ͱ���*/
    double_num = 61.458; /*Ϊ������ֵ*/
    printf("%lf\n", double_num); /*��ʾ����ֵ*/

    long double long_double_num; /*���峤˫���ȱ���*/
    long_double_num = 45.257; /*Ϊ������ֵ*/
    printf("%Lf\n", long_double_num); /*������ֵ�������*/

    return EXIT_SUCCESS; /*�������*/
}