/*
	��������put_count����ʾ�����õĴ�����������ʾ���ǵ���3�κ���put_count����������
		void put_count()
*/

#include <stdio.h>

void put_count()
{
	static int i;
	printf("put_count:��%d��\n", i+1);
	i++;
} 

int main(void)
{
	put_count();
	put_count();
	put_count();
	
	return 0;
}