/*
	创建一个函数，对元素个数为n的int型数组v2进行倒序排列，并将其结果保存在数组v1中
*/

#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int n)
{
	int i;
	for(i=0; i<=n; i++){
		v1[i] = v2 [n-i-1];
	}
} 

int main(void)
{
	int i;
	int ary1[5]={1, 2, 3, 4, 5};
	int ary2[5]={0};
	
	printf("ary1[5]={ ");
	for(i=0; i<5; i++){
		printf("%d ",ary1[i]);
	}
	printf("}\n");
	
	printf("ary2[5]={ ");
	for(i=0; i<5; i++){
		printf("%d ",ary2[i]);
	}
	printf("}\n");
	
	printf("数组v2进行倒序排列，并将其结果保存在数组v1中\n");
	
	intary_rcpy(ary2, ary1, 5);
	
	printf("ary2[5]={ ");
	for(i=0; i<5; i++){
		printf("%d ",ary2[i]);
	}
	printf("}\n");
	
	return 0;
}