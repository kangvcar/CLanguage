/*
	�����嵥3-9���ж������������ֵ�ķ��ŵĳ����뽫���дΪ���Խ����롤��ʾ��һ����ѭ������Ρ�
	�ж��������������
*/

#include <stdio.h>

int main(void)
{
	
	int retry;
	
	do{
		int no;
		
		printf("������һ��������");
		scanf("%d",&no);
		
		if(no == 0)
		puts("��������0");
	else if(no > 0)
		puts("��������������");
	else
		puts("�������Ǹ�����");
		
		printf("�Ƿ������<Yes������0/No������9>��");
		scanf("%d",&retry); 
	}while(retry==0);
		
	return 0;
} 