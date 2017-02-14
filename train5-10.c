/*
	编写一段程序，求4行3列矩阵和3行4列矩阵的乘积。
	各构成元素的值从键盘输入。
*/

#include <stdio.h>

#define hang 4

#define lie 3

int main(void)
{
	int i, j, n;
	int ten1[hang][lie];
	int ten2[hang][lie];
	int ji[hang][lie];
	
	/*输入第一个4行3列矩阵数据*/ 
	puts("请输入第一个4行3列矩阵数据：");
	for(i=0; i<hang; i++){
		for(j=0; j<lie; j++){
			printf("ten1[%d][%d]:", i, j);
			scanf("%d",&ten1[i][j]);
		//	putchar('\n');
		}
		putchar('\n');
	}
	
	/*输入第二个4行3列矩阵数据*/ 
	puts("请输入第二个4行3列矩阵数据：");
	for(i=0; i<hang; i++){
		for(j=0; j<lie; j++){
			printf("ten2[%d][%d]:", i, j);
			scanf("%d",&ten2[i][j]);
		//	putchar('\n');
		}
		putchar('\n');
	}
	
	/*显示第一个4行3列矩阵数据*/
	puts("4行3列矩阵数据如下：");
	for(i=0; i<hang; i++){
		for(j=0; j<lie; j++){
			printf("%4d", ten1[i][j]);
		}
		putchar('\n');
	} 
	
	/*显示第二个4行3列矩阵数据*/
	puts("4行3列矩阵数据如下：");
	for(i=0; i<hang; i++){
		for(j=0; j<lie; j++){
			printf("%4d", ten2[i][j]);
		}
		putchar('\n');
	} 
	
	/*乘积*/
	for(i=0; i<hang; i++){
		for(j=0; j<lie; j++){
			ji[i][j]=ten1[i][j]*ten2[i][j];
		}
	} 
	
	/*显示乘积*/
	puts("两个矩阵数据的乘积。");
	for(i=0; i<hang; i++){
		for(j=0; j<lie; j++){
			printf("%4d",ji[i][j]);
		}
		putchar('\n');
	}
	
	return 0;
}