/*
	��дһ�γ������ұ���������������ʾ��С������ֵ��������ż��
*/

#include <stdio.h>

int main(void)
{
	int i, no;
	printf("������һ��������");
	scanf("%d",&no);
/*	
	i = 0;
	while(i < no)
		printf("%d ",i+=2);			//������д��� 
*/

	i = 2;
 
 	while(i<=no){
	 	printf("%d ",i);
	 	i+=2;
	 }

/*
	for(i=2; i<=no; i+=2){
		printf("%d ",i);
	}
*/	
	printf("\n");
	
	return 0;
} 