/*
	判断char型有无符号
*/

#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("这个编译器中的char型是");
	
	if(CHAR_MIN)
		puts("有符号的。");		//如果是有符号的，那么CHAR_MIN的值就为0 
	else
		puts("无符号的。");
	
	return 0; 
} 