/*
	��дһ�γ���ʹ֮���ұ�����������ʾ+��-��
	�ܸ������������������ֵ�����⣬������0���µ�����ʱ��
	��ʲôҲ����ʾ��
*/

#include <stdio.h>

int main(void)
{
	int i, num;
	
	printf("Ҫ��ʾ���ٸ���");
	scanf("%d",&num);
	
	i = 1;
	while(i++ <= num){
		if(i%2)
			printf("-");
		else
			printf("+");
	}
	
	printf("\n");
		
	return 0;
} 