/*
	��дһ�γ������ұ�������ʾ1��n������ֵ�Ķ��η���
*/

#include <stdio.h>

int main(void)
{
	int i, n, pf;
	
	printf("n��ֵ��");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		pf = i*i;
		printf("%d�Ķ��η���%d\n", i, pf);
	} 
	
	return 0;
} 