/*
	��������ֵ�Ƿ�Ϊ0
*/

#include <stdio.h>

int main(void)
{
	int num;
	
	printf("������һ��������");
	scanf("%d",&num);

	if(num)
		puts("��������Ϊ0");
	else
		puts("������Ϊ0");
/*	
	if(num == 0)
		puts("������Ϊ0");
	else
		puts("��������Ϊ0");
*/	
	return 0; 
} 