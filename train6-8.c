/*
	����һ������������Ԫ�ظ���Ϊn��int������v�е���Сֵ
		int min_of(const int v[], int n)
*/

#include <stdio.h>

int min_of(const int v[], int n)
{
	int i;
	int min;
	min = v[0];
	for(i=1; i<n; i++){
		if(v[i]<min)
			min = v[i];
	}
	return min;
} 

int main(void)
{
	int i;
	int ary1[] = {1, 2, 3, 4, 5};
	for(i=0; i<5; i++){
		printf("ary1[%d]=%d \n", i+1, ary1[i]);
	}
	printf("�����е���Сֵ��%d\n", min_of(ary1, 5));
	
	return 0; 
}