/*
	对code list4-7的程序进行如下修改。
	·从1开始递增
	·输入的值小于0的时候不换行
*/

#include <stdio.h>

int main(void)
{
	int i, no;
	printf("请输入一个整数：");
	scanf("%d",&no);
	
	i = 1;
	while(i <= no)
		printf("%d ",i++);
		
	printf("\n");
	
	return 0;
} 