/*
	��дһ�γ�������һ������ֵ����ʾ������ֵ���µ�����������
*/

#include <stdio.h>

int main(void)
{
	int i, n;
	printf("����ֵ��");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
		if(i%2!=0)
			printf("%d ",i);
		
	putchar('\n');
	
	return 0;
}