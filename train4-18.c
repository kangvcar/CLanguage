/*
	��дһ�γ�������һ������ֵ����ʾ������ֵ��'*'��
	ÿ��ʾ5���ͽ��л���
*/ 

#include <stdio.h>

int main(void)
{
	int i, j, n;
	
	printf("��ʾ���ٸ�*��");
	scanf("%d",&n);
	j = 0;
	for(i=1; i<=n; i++){
		printf("*");		
		j++;
		if(j==5){
			printf("\n");
			j = 0;
		}		
	}
	
	putchar('\n'); 
	return 0;
}