/*
	��ȡ������������ʾ���ǵ��̺�����
	ת��˵���ж�� 
*/

#include <stdio.h>

int main(void)
{
	int a, b;
	
	printf("�������һ������a��");
	scanf("%d",&a);
	
	printf("������ڶ�������b��");
	scanf("%d",&b);
	
	printf("a����b������%d��������%d \n",	a / b,	a % b);	//ת��˵���ж��
	
	return 0; 
} 