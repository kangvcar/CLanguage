/*
	编写一段程序，输入一个整数值，显示该整数值个'*'。
	每显示5个就进行换行
*/ 

#include <stdio.h>

int main(void)
{
	int i, j, n;
	
	printf("显示多少个*：");
	scanf("%d",&n);
	j = 0;
	for(i=1; i<=n; i++){
		printf("*");		
		j++;
		if(j==5){
			printf("\n");
			j = 0;
		}		
	}
	
	putchar('\n'); 
	return 0;
}