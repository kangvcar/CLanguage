/*
	����һ������search_idx��������n��Ԫ�ص�����v�е�key��ȵ�����Ԫ�ص��±�洢������idx�У�
	���غ�key��ȵ�Ԫ�صĸ��� ��
		int search_idx(const int v[], int idx[], int key, int n);
	���磺���v�������յ������Ԫ���ǣ�1��7��5��7��2��4��7����
	keyΪ7�Ļ�����1��3��6���ͻᱻ�洢��idx�У�������3
*/

#include <stdio.h>

int search_idx(const int v[], int idx[], int key, int n)
{
	int i;
	int j=0;
	for(i=0; i<n; i++){
		if(v[i]==key){
			idx[j] = i;
			j++;
		}
	}
	return j;
}

int main(void)
{
	int i;
	int ary1[] = {1, 7, 5, 7, 2, 4, 7};
	int ary2[] = {}; 
	int ky;
	
	printf("ary1={ ");
	for(i=0; i<7; i++){
		printf("%d ", ary1[i]);
	} 
	printf("}\n");
	
	printf("Ҫ���ҵ�ֵ��");
	scanf("%d", &ky);
	
	printf("Ҫ���ҵ�ֵ��%d����\n", search_idx(ary1, ary2, ky, 7));
	printf("ary2={ ");
	for(i=0; i<search_idx(ary1, ary2, ky, 7); i++){
		printf("%d ", ary2[i]);
	} 
	printf("}\n");
}