/*
	��дһ�γ���Ϊdouble�����������Ԫ�ط��侲̬�洢�ڣ�
	��ȷ�����Ƕ�����ʼ��Ϊ0.0
*/

#include <stdio.h>

int main(void)
{
	int i;
	static double v[5];
	
	for(i=0; i<5; i++){
		printf("v[%d] = %.1f\n", i, v[i]);
	}
	
	return 0;
} 