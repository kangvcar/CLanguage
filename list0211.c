/*
	��ȡ��������������ʾ�����ǵĺϼ�ֵ��ƽ��ֵ
*/

#include <stdio.h>

int main(void)
{
	int a, b, c;
	int sum;
	double ave;
	
	puts("����������������");
	printf("����a��");	scanf("%d",&a);
	printf("����b��");	scanf("%d",&b);
	printf("����c��");	scanf("%d",&c); 
	
	sum = a+b+c;
	ave = (a+b+c)/3;
	
	printf("���ǵĺϼ�ֵ��%5d\n", sum);
	printf("���ǵ�ƽ��ֵ��%5.1f\n", ave);
	
	return 0;
} 