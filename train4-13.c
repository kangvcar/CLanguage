/*
	��дһ�γ�����1��n�ĺ͡�n ��ַ�Ӽ������롣
*/

#include <stdio.h>

int main(void)
{
	int i, no;
	int sum = 0;
	
	do{
		printf("������һ����������");
		scanf("%d",&no);
		if(no <= 0)
			printf("�벻Ҫ�������������\n");
	}while(no <= 0);
	
	for(i=1; i<=no; i++){
		sum += i;
	}
	
	printf("1��%d�ĺ�Ϊ%d��\n", no, sum);
	return 0;
	
} 