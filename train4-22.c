/*
	�Դ����嵥4-17�еĳ�������޸ģ���ʾ��һ������ϳ��ĳ����Ρ�
	����ȡ�����ߵı߳����Խ�С������Ϊ�������Խϴ������Ϊ������
*/

#include <stdio.h>

int main(void)
{
	int i, j, n1, n2;
	
	puts("����������һ�������Ρ�");
	printf("һ�ߣ�");	scanf("%d",&n1);
	printf("��һ�ߣ�");	scanf("%d",&n2);
	
	if(n1>=n2){
		for(i=1; i<=n2; i++){
			for(j=1; j<=n1; j++)
				printf("*");
			printf("\n");
		}
	}else{
		for(i=1; i<=n1; i++){
			for(j=1; j<=n2; j++)
				printf("*");
			printf("\n");
		}
	}
	
	return 0;
} 