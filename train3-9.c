/*
	ʹ�����������������ϰ3-6�ĳ����е�if��䣬ʵ��ͬ���Ĺ��ܡ�
	�������������������е���Сֵ����ʾ�� 
*/

#include <stdio.h>

int main(void)
{
	int n1, n2, n3, min;
	
	puts("����������������");
	printf("����1��");	scanf("%d",&n1);
	printf("����2��");	scanf("%d",&n2);
	printf("����3��");	scanf("%d",&n3);
	
	
	printf("���������е���Сֵ��%d��\n", (n1 > n2) ? ((n2 > n3) ? n3 : n2): n1 );
	
	return 0; 
} 