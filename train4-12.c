/*
	编写一段程序，读取一个正整数，显示其位数。
	·注意：code list4-10中的while语句的循环次数和no的位数一致
*/

#include <stdio.h>

int main(void)
{
	int i, no;
	
	do{
		printf("请输入一个正整数：");
		scanf("%d",&no);
		if(no <= 0)
			printf("请不要输入非正整数。");
	}while(no <= 0) ;
	
	printf("%d的位数是",no);
	
	i = 0;
	while(no > 0){
//		printf("%d",no%10);
		no /=10;
		i++;
	} 
	
	printf("%d\n",i);
	
	return 0;
	
	 
} 