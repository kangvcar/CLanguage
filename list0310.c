/*
	������������ֵΪ�������жϸ�ֵ����ż�Բ���ʾ
*/

#include <stdio.h>

int main(void)
{
	int no;
	
	printf("������һ��������");
	scanf("%d",&no);
	
	if(no > 0)
		if(no % 2)
			puts("�����������Ϊ������");
		else
			puts("�����������Ϊż����");
		else
			puts("������Ĳ���������");
	
	return 0;
} 