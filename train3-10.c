/*
	输入三个整数，
	如果该三个数都相等，则显示“三个值都相等”。
	如果 其中两个值相等，则显示“有两个值相等”。
	如果上述两种情况都不满足，则显示“三个值都不相等”。
*/

#include <stdio.h>

int main(void)
{
	int n1, n2, n3;
	
	puts("请输入三个整数：");
	printf("整数1：");	scanf("%d",&n1);
	printf("整数2：");	scanf("%d",&n2);
	printf("整数3：");	scanf("%d",&n3);
	
	if(n1 == n2 && n2 == n3)
		printf("三个值都相等\n");
	else if(n1 == n2 || n1 == n3 || n2 == n3)
		printf("有两个值相等\n");
	else
		printf("三个值都不相等\n");
	
	return 0; 
} 