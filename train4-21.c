/*
	��дһ�γ������ұ�������ʾ������������Ϊ�߳���������
*/

#include <stdio.h>

int main(void)
{
	int i, j, no;
	
	puts("����һ��������");
	printf("�������м��㣺");	scanf("%d",&no); 
	
	for(i=1; i<=no; i++){
		for(j=1; j<=no; j++)
			printf("*");
		printf("\n");
	}
	return 0;
		
} 