#include <stdio.h>
#include <stdlib.h>

#define CUBOID_HEIGHT 10 /*���峣��*/

int calculate(int length, int width); /*��������*/

int main(void) {

    int cuboid_length; /*�������ͱ�������ʾ����*/
    int cuboid_width; /*�������ͱ�������ʾ���*/
    int cuboid_volume; /*�������ͱ�������ʾ����������*/

    printf("�����εĸ߶�Ϊ��%d\n", CUBOID_HEIGHT); /*��ʾ��ʾ*/

    printf("�����볤�ȣ�"); /*��ʾ��ʾ*/
    scanf_s("%d", &cuboid_length); /*���볤����ĳ���*/

    printf("�������ȣ�"); /*��ʾ��ʾ*/
    scanf_s("%d", &cuboid_width); /*���볤����Ŀ��*/

    cuboid_volume = calculate(cuboid_length, cuboid_width); /*���ú������������*/

    printf("�����������ǣ�%d", cuboid_volume); /*��������С*/

    return EXIT_SUCCESS;
}

int calculate(int length, int width) /*��������������*/
{
    int result = length * width * CUBOID_HEIGHT; /*����������*/

    return result; /*�����������������*/
}