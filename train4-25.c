/*
	��дһ�γ������ұ�������ʾ��������������µĽ�������״��
	��i����ʾi%10�Ľ����
*/

#include <stdio.h>

int main(void)
{
	int i, j, ln;
	
	puts("����������һ�����µĽ�������");
	printf("�������м��㣺");	scanf("%d",&ln);
	
	for(i=1; i<=ln; i++){
		for(j=2; j<=i; j++){
			printf(" ");
		}
		for(j=1; j<=(((ln-i+1)-1)*2+1); j++){
			printf("%d",i%10);
		}
		printf("\n");
	}
	return 0;
} 