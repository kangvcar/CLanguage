/*
	����һ������������1��n֮�����������ĺ͡�
		int sump (int n)
*/

#include <stdio.h>

int sump(int n)
{
	int i;
	int sum = 0;
	for(i=1; i<=n; i++){
		sum += i;
	}
	return sum;
} 

int main(void)
{
	int n;
	
	printf("������һ��������");
	scanf("%d",&n);
	
	printf("1��%d֮�����������ĺ���%d��\n", n, sump(n));
	
	return 0;
}