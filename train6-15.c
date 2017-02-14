/*
	创建函数put_count，显示被调用的次数（右面显示的是调用3次函数put_count的运算结果）
		void put_count()
*/

#include <stdio.h>

void put_count()
{
	static int i;
	printf("put_count:第%d次\n", i+1);
	i++;
} 

int main(void)
{
	put_count();
	put_count();
	put_count();
	
	return 0;
}