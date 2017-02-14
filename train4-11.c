/*
	对代码清单4-10的程序进行修改，使其像右边这样在显示结果的同时显示输入的整数值。
*/

#include <stdio.h>

int main(void)
{
	int no;
	
	do{
	printf("请输入一个正整数：");
	scanf("%d",&no);
	if(no <= 0)
		puts("请不要输入非负整数。");
	}while(no <=0);
	
	printf("%d逆向显示的结果是", no); 
	while(no > 0){
		printf("%d", no%10);
		no /= 10;
	}
	
 	printf("。\n");
} 