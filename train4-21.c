/*
	编写一段程序，像右边这样显示以所输入整数为边长的正方形
*/

#include <stdio.h>

int main(void)
{
	int i, j, no;
	
	puts("生成一个正方形");
	printf("正方形有几层：");	scanf("%d",&no); 
	
	for(i=1; i<=no; i++){
		for(j=1; j<=no; j++)
			printf("*");
		printf("\n");
	}
	return 0;
		
} 