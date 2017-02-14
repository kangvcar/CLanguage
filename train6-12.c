/*
	创建一个函数，将4行3列矩阵a和3行4列矩阵b的乘积，
	存储在3行3列矩阵c中。
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

//输入a数组的数据	
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			printf("a[%d][%d]=", i, j);
			scanf("%d",&a[i][j]);
			}
	}
//输入b数组的数据
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("b[%d][%d]=", i, j);
			scanf("%d",&b[i][j]);
			}
	}
//显示a数据的数据
	printf("阵列a的数据：\n");
	for(i=0; i<4; i++){
		for(j=0; j<3; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	} 
//显示b数据的数据	
	printf("阵列b的数据：\n");
	for(i=0; i<3; i++){
		for(j=0; j<4; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
//将4行3列矩阵a和3行4列矩阵b的乘积，存储在3行3列矩阵c中
	mat_mul(a, b, c);
	
//显示c数据的数据
	printf("阵列c的数据：\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}	
	
	return 0;
}