#include <stdio.h>
int main(void)
{
	int n1, n2, n3, he;
	puts("请输入三个整数。");
	printf("第一个整数：");		scanf("%d",&n1); 
	printf("第二个整数：");		scanf("%d",&n2);
	printf("第三个整数：");		scanf("%d",&n3);
	
	he = n1 + n2 + n3;
	
	printf("它们的和是%d。\n",he);
	
	return 0;	
} 