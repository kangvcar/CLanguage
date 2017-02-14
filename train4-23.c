/*
	对代码清单4-18和代码清单4-19中的程序进行修改，
	分别显示出直角在左上方和右上方的等腰直角三角形（生成两个程序）
*/

#include <stdio.h>

int main(void)
{
	int i, j, k, l, len, ken, ln;
	
	puts("生成直角在左上方的等腰直角三角形。");
	printf("短边：");	scanf("%d",&len);

	for(i=len; i>=1; i--){
		for(j=1; j<=i; j++)
			printf("*");
		printf("\n");
	}
/*	
	int ln, i, j;
	printf("三角形有几层：");
	scanf("%d",&ln);
     
	for (i = 1; i<=ln; i++) {
		for (j = 1; j <=ln-i+1; j++) {
             putchar('*');
         }
         putchar('\n');
	}		
*/	
     
	printf("三角形有几层：");
	scanf("%d",&ln);
     
	for (i = 1; i<=ln; i++) {   
		for (j = 2; j <=i; j++) 
			putchar(' ');
		for (j=1; j<=ln-i+1; j++) 
			putchar('*');      
		putchar('\n');
     }
	return 0;
} 