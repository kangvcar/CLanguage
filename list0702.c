/*
	�ж�char�����޷���
*/

#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("����������е�char����");
	
	if(CHAR_MIN)
		puts("�з��ŵġ�");		//������з��ŵģ���ôCHAR_MIN��ֵ��Ϊ0 
	else
		puts("�޷��ŵġ�");
	
	return 0; 
} 