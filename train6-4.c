/*
	ʹ�ô����嵥6-3�е�sqr����������һ������������int���������Ĵ��ݡ�
		int pow4 (int x)
*/

#include <stdio.h>

int sqr(int x)
{
	return x * x;
} 

int pow4(int x)
{
	return sqr(sqr(x));
}

int main(void)
{
	int n1;
	
	puts("������һ��������");
	printf("����x��");	scanf("%d",&n1);
	
	printf("x���Ĵ�����%d��\n", pow4(n1));
	
	return 0;
}