/*
	��дһ�γ������ұ�������ȡ����������ֵ��Ȼ����������֮�����������ĺ�
*/

#include <stdio.h>


int main(void)
{
	int n1, n2, sum, i;
	
	puts("����������������");
	printf("����a:");	scanf("%d",&n1);
	printf("����b:");	scanf("%d",&n2);
	
	if(n1 >= n2){
		sum = 0;
		i = n2;
		do{
			sum = sum + i;
			i = i + 1; 
		}while(i <= n1);
		
		printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d\n", n1, n2, sum);
	}
	else{
		sum = 0;
		i = n1;
		do{
			sum = sum + i;
			i = i + 1;
		}while(i <= n2);
		
		printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d\n", n1, n2, sum);
	}

	return 0;
} 

