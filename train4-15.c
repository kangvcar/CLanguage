/*
	编写一段程序，像右边这样显示出身高和标准体重的对照表。
	显示的身高范围和间隔由输入的整数值进行控制，
	标准体重精确到小数点后2位。
*/

#include <stdio.h>

int main(void)
{
	int start, end, jiange, i;
	double tz;
	
	printf("开始数值(cm):");	scanf("%d",&start);
	printf("结束数值(cm):");	scanf("%d",&end);
	printf("间隔(cm):");	scanf("%d",&jiange);
	

	for(i=start; i<=end; i+=jiange){
		tz = (start - 100) * 0.9;
		printf("%dcm	%.2fkg\n", start, tz);
		start += jiange;
	}
	
/*	
	do{
		tz = (start-100) * (double)0.9;
		printf("%dcm	%.2fkg\n", start, tz);
		start += jiange;
	}while(start <= end);
	*/
	return 0;
} 