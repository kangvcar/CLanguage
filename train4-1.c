/*
	代码清单3-9是判断所输入的整数值的符号的程序，请将其改写为可以将输入·显示这一过程循环任意次。
	判断输入的整数符号
*/

#include <stdio.h>

int main(void)
{
	
	int retry;
	
	do{
		int no;
		
		printf("请输入一个整数：");
		scanf("%d",&no);
		
		if(no == 0)
		puts("该整数是0");
	else if(no > 0)
		puts("该整数是正数。");
	else
		puts("该整数是负数。");
		
		printf("是否继续？<Yes···0/No···9>：");
		scanf("%d",&retry); 
	}while(retry==0);
		
	return 0;
} 