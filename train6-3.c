/*
	����һ������������int������������
*/

#include <stdio.h>

int cube(int x)
{
	return x*x*x;
} 

int main(void)
{
	int n1;
	
	puts("������һ��������");
	printf("����x��");
	scanf("%d",&n1);
	
	printf("x��������%d��\n", cube(n1));
	
	return 0; 
}