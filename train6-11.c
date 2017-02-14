/*
	创建一个函数search_idx，将和有n个元素的数组v中的key相等的所有元素的下标存储在数组idx中，
	返回和key相等的元素的个数 。
		int search_idx(const int v[], int idx[], int key, int n);
	例如：如果v中所接收的数组的元素是｛1，7，5，7，2，4，7｝，
	key为7的话，｛1，3，6｝就会被存储在idx中，并返回3
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
	
	printf("要查找的值：");
	scanf("%d", &ky);
	
	printf("要查找的值有%d个。\n", search_idx(ary1, ary2, ky, 7));
	printf("ary2={ ");
	for(i=0; i<search_idx(ary1, ary2, ky, 7); i++){
		printf("%d ", ary2[i]);
	} 
	printf("}\n");
}