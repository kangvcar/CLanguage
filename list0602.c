/*
	�����������е����ֵ
*/

#include <stdio.h>

int max3(int a, int b, int c)
{
	int max = a;
	
	if(b > max)
		max = b;
	if(c > max)
		max = c;
	return max;
} 

int main(void)
{
	int a, b, c;
	
	puts("����������������");
	printf("����a��");	scanf("%d",&a);
	printf("����b��");	scanf("%d",&b);
	printf("����c��");	scanf("%d",&c);
	
	printf("���ֵ�ǣ�%d��\n", max3(a, b, c));
	
	return 0; 
} 