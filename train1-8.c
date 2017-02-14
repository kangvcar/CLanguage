#include <stdio.h>

int main(void)
{
	int n1, n2, he;
	puts("请输入两个整数。"); 
//	printf("请输入两个整数。\n");		//等价于上一行puts 
	printf("第一个整数：");		scanf("%d",&n1);
	printf("第二个整数：");		scanf("%d",&n2);
	
	printf("它们的和是:%d。\n",n1 + n2);
	
	return 0;
} 