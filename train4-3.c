/*
	对代码清单4-5中的程序进行修改，当输入的值为负数的时候不执行换行操作
	list4-5：从输入的整数开始倒数到0 
*/

#include <stdio.h>

int main(void)
{
	int no;
	
	printf("请输入一个整数：");
	scanf("%d",&no);
	
	while(no >= 0) {
		printf("%d ",no);
		no--;
	} 
	
	if(no >= 0)
		printf("\n");
		
	return 0;
} 