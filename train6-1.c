/*
	����һ����������������int�������н�Сһ����ֵ��
		 int min2 (int a, int b) { ��������} 
	Ϊ��ȷ�Ϻ����Ķ���������Ҫ��Ҵ���һ�����ʵ�main���������һ�������ĳ���
	��֮�����ϰҲ����ˣ�
*/ 

#include <stdio.h>

int min2(int a, int b)
{
	int min = a;
	if(b < min)
		min = b;
	return min;
}

int main(void)
{
	int n1, n2;
	
	puts("����������������");
	printf("����1��");	scanf("%d",&n1);
	printf("����2��");	scanf("%d",&n2);
	
	printf("��С��ֵ�ǣ�%d��\n",min2(n1, n2));
	
	return 0; 
}