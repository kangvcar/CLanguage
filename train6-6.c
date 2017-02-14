/*
	创建一个函数，连续发出n次铃响
*/

#include <stdio.h>

void alert(int n)
{
	while(n-- > 0)
		printf("\a");
} 

int main(void)
{
	int i, n;
	
	puts("请输入一个整数。");
	printf("整数n：");
	scanf("%d",&n);
	alert(n);
	
	return 0; 
}