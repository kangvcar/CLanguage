/*
	��дһ�γ������ұ�������ʾ����ߺͱ�׼���صĶ��ձ�
	��ʾ����߷�Χ�ͼ�������������ֵ���п��ƣ�
	��׼���ؾ�ȷ��С�����2λ��
*/

#include <stdio.h>

int main(void)
{
	int start, end, jiange, i;
	double tz;
	
	printf("��ʼ��ֵ(cm):");	scanf("%d",&start);
	printf("������ֵ(cm):");	scanf("%d",&end);
	printf("���(cm):");	scanf("%d",&jiange);
	

	for(i=start; i<=end; i+=jiange){
		tz = (start - 100) * 0.9;
		printf("%dcm	%.2fkg\n", start, tz);
		start += jiange;
	}
	
/*	
	do{
		tz = (start-100) * (double)0.9;
		printf("%dcm	%.2fkg\n", start, tz);
		start += jiange;
	}while(start <= end);
	*/
	return 0;
} 