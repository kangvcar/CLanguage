/*
	编写一段程序，像右边这样显示输入整数层的向下的金字塔形状。
	第i行显示i%10的结果。
*/

#include <stdio.h>

int main(void)
{
	int i, j, ln;
	
	puts("让我们来画一个向下的金字塔。");
	printf("金字塔有几层：");	scanf("%d",&ln);
	
	for(i=1; i<=ln; i++){
		for(j=2; j<=i; j++){
			printf(" ");
		}
		for(j=1; j<=(((ln-i+1)-1)*2+1); j++){
			printf("%d",i%10);
		}
		printf("\n");
	}
	return 0;
} 