/*
	����һ����������4��3�о���a��3��4�о���b�ĳ˻���
	�洢��3��3�о���c�С�
		void mat_mul(const int a[4][3], const int b[3][4], int c[3][3])
*/

#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[3][3])
{
	int i, j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			c[i][j] = a[i][j] * b[i][j];
		}
	}
} 

int main(void)
{
	int i, j;
	int a[4][3];
	int b[3][4];
	int c[3][3];

//����a���������	
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			printf("a[%d][%d]=", i, j);
			scanf("%d",&a[i][j]);
			}
	}
//����b���������
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("b[%d][%d]=", i, j);
			scanf("%d",&b[i][j]);
			}
	}
//��ʾa���ݵ�����
	printf("����a�����ݣ�\n");
	for(i=0; i<4; i++){
		for(j=0; j<3; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	} 
//��ʾb���ݵ�����	
	printf("����b�����ݣ�\n");
	for(i=0; i<3; i++){
		for(j=0; j<4; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
//��4��3�о���a��3��4�о���b�ĳ˻����洢��3��3�о���c��
	mat_mul(a, b, c);
	
//��ʾc���ݵ�����
	printf("����c�����ݣ�\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}	
	
	return 0;
}