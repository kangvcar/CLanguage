/*
	�������a��double�ͣ�����b��int�ͣ���˵������������ֵ��a��b��ֵ�ֱ��Ƕ��١�
	a = b = 1.5
*/

#include <stdio.h>

int main(void)
{
	double a;
	int b;
	
	a = b = 1.5;
	
	printf("a:%2.1f\nb:%d\n", a, b);
	
	return 0;
} 