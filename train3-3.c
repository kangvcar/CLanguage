/*
	输入一个整数值，显示出它的绝对值
*/

#include <stdio.h>

int main(void)
{
	int no;
	
	printf("请输入一个整数：");
	scanf("%d",&no);
	
	if(no >= 0)
		printf("该整数的绝对值是%d\n", no);
	else 
		printf("该整数的绝对值是%d\n", -no);
		
	return 0; 
} 