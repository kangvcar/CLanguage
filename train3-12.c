/*
	�Դ����嵥3-4�еĳ�������޸ģ���ʹ��if��䣬���Ǹ���switch�����ʵ��
	���������ֵ����������ż�� 
*/

#include <stdio.h>

int main(void)
{
	int no;
	
	printf("������һ��������");
	scanf("%d",&no);
	
	switch (no % 2){
		case 0:puts("������ż��");	break;
		case 1:puts("����������");	break; 
	} 
	return 0;
} 