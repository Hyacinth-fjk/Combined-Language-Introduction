#include <stdio.h>

int main(void)
{
	char ch = 'A';
	char str[20] = "Hello World��";
	float flt = 10.234F;
	double db = 20.123456;
	int no = 150;

	printf("�ַ�Ϊ��%c\n", ch);
	putchar(ch); /*�ȼ���printf("%c", ch)*/

	printf("\n�ַ���Ϊ��%s\n", str);
	puts(str); /*�ȼ���printf("%s\n", str)��put�����м䲻��ƴ���ַ���*/

	printf("������Ϊ��%f\n", flt);
	printf("˫����ֵΪ��%lf\n", db);
	printf("����Ϊ��%d", no);
	printf("�˽���ֵΪ��%o\n", no);
	printf("ʮ������ֵΪ��%x", no);

	return 0;
}