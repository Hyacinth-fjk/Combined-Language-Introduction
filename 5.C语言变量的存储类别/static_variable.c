#include <stdio.h>
#include <stdlib.h>

void add_one(void)
{
    static int num = 1; /*����static���ͱ���*/

    num = num + 1; /*������1*/

    printf("%d\n", num); /*��ʾ���*/
}

int main(void)
{
    printf("��һ�ε��ã�");
    add_one(); /*����add_one����*/

    printf("�ڶ��ε��ã�");
    add_one(); /*����add_one����*/

    return EXIT_SUCCESS; /*�������*/
}