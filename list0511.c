/*
	����ѧ���ķ�������ʾ�����е���߷ֺ���ͷ�
*/

#include <stdio.h>

#define NUMBER 5

int main(void)
{
	int i;
	int tenus[NUMBER];
	int max, min;
	
	printf("������%d��ѧ���ķ�����\n", NUMBER);
	for(i=0; i<NUMBER; i++){
		printf("%2d�ţ�", i+1);
		scanf("%d",&tenus[i]);
	}
	
	min = max = tenus[0];
	
	for(i=1; i<NUMBER; i++){
		if(tenus[i] > max)
			max = tenus[i];
		if(tenus[i] < min)
			min = tenus[i];
	}
	
	printf("��߷֣�%d\n", max);
	printf("��ͷ֣�%d\n", min);
	
	return 0;
} 