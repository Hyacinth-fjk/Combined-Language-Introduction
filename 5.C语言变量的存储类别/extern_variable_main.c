#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    extern int num; /*�����ⲿ���ͱ���*/
    printf("%d\n", num); /*��ʾ����ֵ*/

    return EXIT_SUCCESS; /*�������*/
}