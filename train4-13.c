/*
	编写一段程序，求1到n的和。n 地址从键盘输入。
*/

#include <stdio.h>

int main(void)
{
	int i, no;
	int sum = 0;
	
	do{
		printf("请输入一个正整数：");
		scanf("%d",&no);
		if(no <= 0)
			printf("请不要输入非正整数。\n");
	}while(no <= 0);
	
	for(i=1; i<=no; i++){
		sum += i;
	}
	
	printf("1到%d的和为%d。\n", no, sum);
	return 0;
	
} 