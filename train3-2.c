/*
	�ж��������������
*/

#include <stdio.h>

int main(void)
{
	int no;
	
	printf("������һ��������");
	scanf("%d",&no);
	
	if(no == 0)
		puts("��������0");
	else if(no < 0)
		puts("�������Ǹ�����");
	else
		puts("��������������");
		
	return 0;
} 