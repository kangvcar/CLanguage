/*
	��дһ�γ������ұ��������������������ѭ��1234567890��
	��ʾ��λ�������������ֵ��ͬ
*/

#include <stdio.h>

int main(void)
{
	int i, j, n;
	j = 1;
	printf("������һ��������");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("%d",j);
		j++;
		if(j>9)
			j-=10;
	}
	
	printf("\n");
	
	return 0;
} 