/*
	��code list4-6�ĳ�������޸ģ�ʹ��
	���ݼ���1���ǵݼ���0
	���������ֵС��0ʱ�������л���
*/

#include <stdio.h>

int main(void)
{
	int no;
	
	printf("������һ��������");
	scanf("%d",&no);
	
	while(no > 0)
		printf("%d ",no--);
	
	printf("\n");
	
	return 0; 
} 