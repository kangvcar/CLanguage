/*
	�Դ����嵥4-10�ĳ�������޸ģ�ʹ�����ұ���������ʾ�����ͬʱ��ʾ���������ֵ��
*/

#include <stdio.h>

int main(void)
{
	int no;
	
	do{
	printf("������һ����������");
	scanf("%d",&no);
	if(no <= 0)
		puts("�벻Ҫ����Ǹ�������");
	}while(no <=0);
	
	printf("%d������ʾ�Ľ����", no); 
	while(no > 0){
		printf("%d", no%10);
		no /= 10;
	}
	
 	printf("��\n");
} 