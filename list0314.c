/*
	��ʾ����������������нϴ�����������������������
*/

#include <stdio.h>

int main(void)
{
	int n1, n2, max;
	
	puts("����������������");
	printf("����1��");	scanf("%d",&n1);
	printf("����2��");	scanf("%d",&n2);
	
	max = (n1 > n2) ? n1:n2;
	
	printf("�ϴ������%d\n",max);
	
	return 0;
} 