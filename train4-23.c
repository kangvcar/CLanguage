/*
	�Դ����嵥4-18�ʹ����嵥4-19�еĳ�������޸ģ�
	�ֱ���ʾ��ֱ�������Ϸ������Ϸ��ĵ���ֱ�������Σ�������������
*/

#include <stdio.h>

int main(void)
{
	int i, j, k, l, len, ken, ln;
	
	puts("����ֱ�������Ϸ��ĵ���ֱ�������Ρ�");
	printf("�̱ߣ�");	scanf("%d",&len);

	for(i=len; i>=1; i--){
		for(j=1; j<=i; j++)
			printf("*");
		printf("\n");
	}
/*	
	int ln, i, j;
	printf("�������м��㣺");
	scanf("%d",&ln);
     
	for (i = 1; i<=ln; i++) {
		for (j = 1; j <=ln-i+1; j++) {
             putchar('*');
         }
         putchar('\n');
	}		
*/	
     
	printf("�������м��㣺");
	scanf("%d",&ln);
     
	for (i = 1; i<=ln; i++) {   
		for (j = 2; j <=i; j++) 
			putchar(' ');
		for (j=1; j<=ln-i+1; j++) 
			putchar('*');      
		putchar('\n');
     }
	return 0;
} 