/*
	读取表示身高的整数值，显示出标准体重的实际值。
	标准体重根据公式（身高-100）*0.9进行计算，所得结果保留一位小数。
*/

#include <stdio.h>

int main(void)
{
	int tall;
	
	printf("请输入你的身高：");
	scanf("%d",&tall);
	
	printf("你的标准体重是：%.1f公斤\n", (tall-100)*0.9);
	
	return 0;
} 