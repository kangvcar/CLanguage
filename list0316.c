/*
	��������������������еĽϴ�����ͽ�С��������ʾ
*/

#include <stdio.h>

int main(void)
{
	int n1, n2, max, min;
	
	puts("����������������");
	printf("����1��");	scanf("%d",&n1);
	printf("����2��");	scanf("%d",&n2);
	
	if(n1 > n2){
		max = n1;
		min = n2;
	}else{
		max = n2;
		min = n1;
	}
	
	printf("�����������У�\n�ϴ����%d\n��С����%d\n", max, min);
	
	return 0;
} 