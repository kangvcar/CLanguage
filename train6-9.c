/*
	����һ����������Ԫ�ظ���Ϊn��int������v���е�������
*/

#include <stdio.h>

void rev_intary(int v[], int n)
{
	int i;
	for(i=1; i<=n; i++){
		printf("%d ", v[n-i]);
	}
} 

int main(void)
{
	int i;
	int ary1[] = {1, 2, 3, 4, 5};
	printf("����ԭ˳��{ ");
	for(i=0; i<5; i++){
		printf("%d ", ary1[i]);
	}
	printf("}\n");

	printf("���鵹�����У�{ ");
	rev_intary(ary1, 5);
	printf("}\n");
	
	return 0; 
}