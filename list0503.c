/*
	���ΰ�1��2��3��4��5��ֵ�������ÿ��Ԫ�ز���ʾ��ʹ��for��䣩
*/

#include <stdio.h>

int main(void)
{
	int i;
	int v[5];
	
	for(i=0; i<5; i++){
		v[i]=i+1;
	}
	for(i=0; i<5; i++){
		printf("v[%d]=%d\n",i,v[i]);
	}
	
	return 0;
} 