/*
	����һ��������������ʾ����������*��ʹ��for��䣩
*/

#include <stdio.h>

int main(void)
{
	int i, no;
	
	printf("��������");
	scanf("%d",&no);
	
	for(i=1; i<=no; i++)
		putchar('*');
		
	putchar('\n');
	
	return 0;
} 