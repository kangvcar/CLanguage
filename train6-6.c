/*
	����һ����������������n������
*/

#include <stdio.h>

void alert(int n)
{
	while(n-- > 0)
		printf("\a");
} 

int main(void)
{
	int i, n;
	
	puts("������һ��������");
	printf("����n��");
	scanf("%d",&n);
	alert(n);
	
	return 0; 
}