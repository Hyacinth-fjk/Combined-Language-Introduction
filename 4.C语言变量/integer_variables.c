#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int signed_int_num = 10; /*�����з��Ż������ͱ���*/
    printf("%d\n", signed_int_num); /*��ʾ�з��Ż������ͱ���*/

    unsigned int unsigned_int_num; /*�����޷��Ż������ͱ���*/
    unsigned_int_num = 10U; /*Ϊ������ֵ*/

    short signed_short_num; /*�����з��Ŷ����ͱ���*/
    signed_short_num = 10; /*Ϊ������ֵ*/

    unsigned short unsigned_short_num; /*�����޷��Ŷ����ͱ���*/
    unsigned_short_num = 10U; /*Ϊ������ֵ*/

    long signed_long_num; /*�����з��ų����ͱ���*/
    signed_long_num = 10L; /*Ϊ������ֵ*/

    unsigned long unsigned_long_num; /*�����޷��ų����ͱ���*/
    unsigned_long_num = 10LU; /*Ϊ������ֵ*/

    long long signed_long_long_num; /*�����з���˫�����ͱ���*/
    signed_long_long_num = 10LL; /*Ϊ������ֵ*/

    unsigned long long unsigned_long_long_num; /*�����޷���˫�����ͱ���*/
    unsigned_long_long_num = 10LLU; /*Ϊ������ֵ*/

    return EXIT_SUCCESS; /*�������*/
}