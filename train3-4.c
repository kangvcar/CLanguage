/*
	������������
	���������ֵ��ȣ�����ʾ��A��B��ȡ�����
	���A����B������ʾ��A����B����
	���AС��B������ʾ��AС��B����
*/

#include <stdio.h>

int main(void)
{
	int a, b;
	
	puts("����������������");
	printf("����A:");	scanf("%d",&a);
	printf("����B:");	scanf("%d",&b);

	if(a == b)
		puts("A��B��ȡ�");
	else if(a > b)
		puts("A����B");
	else
		puts("AС��B");
/*
	if(a == b)
		printf("%d��%d��ȡ�\n",a,b);
	else if(a > b)
		printf("%d����%d\n",a,b);
	else
		printf("%dС��%d\n",a,b);	
*/
	return 0; 
} 