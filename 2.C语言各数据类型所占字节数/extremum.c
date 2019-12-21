#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void)
{
	printf("�������ͣ�char���洢��С��%d�ֽڡ���Сֵ��%hhd�����ֵ��%hhd\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("�������ͣ�unsigned char���洢��С��%d�ֽڡ���Сֵ��%hhu�����ֵ��%hhu\n", sizeof(unsigned char), 0U, UCHAR_MAX);
	printf("�������ͣ�short���洢��С��%d�ֽڡ���Сֵ��%hd�����ֵ��%hd\n", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("�������ͣ�unsigned short���洢��С��%d�ֽڡ���Сֵ��%hu�����ֵ��%hu\n", sizeof(unsigned short), 0U, USHRT_MAX);
	printf("�������ͣ�int���洢��С��%d�ֽڡ���Сֵ��%d�����ֵ��%d\n", sizeof(int), INT_MIN, INT_MAX);
	printf("�������ͣ�unsigned int���洢��С��%d�ֽڡ���Сֵ��%u�����ֵ��%u\n", sizeof(unsigned int), 0U, UINT_MAX);
	printf("�������ͣ�long���洢��С��%d�ֽڡ���Сֵ��%ld�����ֵ��%ld\n", sizeof(long), LONG_MIN, LONG_MAX);
	printf("�������ͣ�unsigned long���洢��С��%d�ֽڡ���Сֵ��%lu�����ֵ��%lu\n", sizeof(unsigned long), 0LU, ULONG_MAX);
	printf("�������ͣ�float���洢��С��%d�ֽڡ���Сֵ��%g�����ֵ��%g\n", sizeof(float), FLT_MIN, FLT_MAX);
	printf("�������ͣ�double���洢��С��%d�ֽڡ���Сֵ��%lg�����ֵ��%lg\n", sizeof(double), DBL_MIN, DBL_MAX);
	printf("�������ͣ�long long���洢��С��%d�ֽڡ���Сֵ��%lld�����ֵ��%lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
	printf("�������ͣ�unsigned long long���洢��С��%d�ֽڡ���Сֵ��%llu�����ֵ��%llu\n", sizeof(unsigned long long), 0LLU, ULLONG_MAX);
	printf("�������ͣ�long double���洢��С��%d�ֽڡ���Сֵ��%Lg�����ֵ��%Lg\n", sizeof(long double), LDBL_MIN, LDBL_MAX);

	return EXIT_SUCCESS;
}