#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int int_num = 1; /*�������ͱ���*/
    char char_num = 'A'; /*ASCII��Ϊ65*/
    float float_num = 2.2F; /*����˫�������ͱ���*/

    double result = (double)int_num + char_num + float_num; /*�õ���ӵĽ��*/
    printf("%lf\n", result); /*��ʾ���*/

    return EXIT_SUCCESS; /*�������*/
}