/*
	�Դ����嵥4-5�еĳ�������޸ģ��������ֵΪ������ʱ��ִ�л��в���
	list4-5���������������ʼ������0 
*/

#include <stdio.h>

int main(void)
{
	int no;
	
	printf("������һ��������");
	scanf("%d",&no);
	
	while(no >= 0) {
		printf("%d ",no);
		no--;
	} 
	
	if(no >= 0)
		printf("\n");
		
	return 0;
} 