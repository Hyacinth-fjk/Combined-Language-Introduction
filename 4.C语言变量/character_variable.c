#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char char_num = 'a'; /*�����ַ��ͱ���������ֵ*/
    int int_num = 97; /*�������ͱ���������ֵ*/

    printf("%c��%d\n", char_num, char_num); /*��ʾ����char_num*/
    printf("%d��%c\n", int_num, int_num); /*��ʾ����int_num*/

    return EXIT_SUCCESS; /*�������*/
}