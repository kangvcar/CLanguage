/*
	��ȡ����������Ȼ����ʾ��ǰ���Ǻ��ߵļ���֮��
*/

#include <stdio.h>

int main(void)
{
	int x, y;
	
	printf("�������һ��������");
	scanf("%d",&x);
	
	printf("������ڶ���������");
	scanf("%d",&y);
	
	printf("%d��%d��%.lf%%\n", x, y, (double)x/y*100);
	
	return 0;
} 