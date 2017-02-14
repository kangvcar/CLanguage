/*
	读取一个整数并显示该整数减去6之后的结果
*/

#include <stdio.h>

int main(void)
{
	int no;
	
	printf("请输入一个整数：");
	scanf("%d", &no);		//读取一个整数 
	
	printf("它减去6之后等于%d。\n",no - 6);
	
	return 0;
} 