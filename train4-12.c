/*
	��дһ�γ��򣬶�ȡһ������������ʾ��λ����
	��ע�⣺code list4-10�е�while����ѭ��������no��λ��һ��
*/

#include <stdio.h>

int main(void)
{
	int i, no;
	
	do{
		printf("������һ����������");
		scanf("%d",&no);
		if(no <= 0)
			printf("�벻Ҫ�������������");
	}while(no <= 0) ;
	
	printf("%d��λ����",no);
	
	i = 0;
	while(no > 0){
//		printf("%d",no%10);
		no /=10;
		i++;
	} 
	
	printf("%d\n",i);
	
	return 0;
	
	 
} 