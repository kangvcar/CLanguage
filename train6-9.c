/*
	创建一个函数，对元素个数为n的int型数组v进行倒序排列
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
	printf("数组原顺序：{ ");
	for(i=0; i<5; i++){
		printf("%d ", ary1[i]);
	}
	printf("}\n");

	printf("数组倒序排列：{ ");
	rev_intary(ary1, 5);
	printf("}\n");
	
	return 0; 
}