/*
	�������������������ż���أ�
*/

#include <stdio.h>

int main(void)
{
	int retry;
	
	do{
		int no;
		
		printf("������һ��������");
		scanf("%d",&no);
		
		if(no%2)
			puts("���������������");
		else
			puts("���������ż����");
			
		printf("��Ҫ�ظ�һ���𣿡�yes������0/no������9��:");
		scanf("%d",&retry);
	}	while(retry==0);
	
	return 0;
} 