/*
	编写一段程序，像右边这样为九九乘法表增加横纵标题。
*/

#include <stdio.h>

int main(void)
{
	int i, j, k;
	
	printf(" |");
	
	for(i=1; i<=9; i++)
		printf("%3d",i);
		
	putchar('\n');
	
	printf("--");
	
	for(i=1; i<=9; i++)
		printf("---");
		
	printf("\n");
	
	for(i=1; i<=9; i++){
		printf("%d|",i);
		for(j=1; j<=9; j++)
			printf("%3d",i*j);
		putchar('\n');
	}
	
	return 0;
} 