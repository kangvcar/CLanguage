/*
	��4��ѧ�������ο�����3�ſγ̵��ֲܷ���ʾ
*/

#include <stdio.h>

int main(void)
{
	int i, j;
	int tenus1[4][3]={{91, 63, 78},{67, 72, 46},{89, 34, 53},{32, 54, 34}};
	int tenus2[4][3]={{97, 67, 82},{73, 43, 46},{97, 56, 21},{85, 46, 35}};
	int sum[4][3];
	
	/*�����ο��Եķ���֮��*/
	for(i=0; i<4; i++){	
		for(j=0; j<3; j++){
			sum[i][j]=tenus1[i][j]+tenus2[i][j];
		}
	}
	/*��ʾ��һ�ο��Եķ���*/ 
	puts("��һ�ο��Եķ���");	
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			printf("%4d", tenus1[i][j]);
		}
		putchar('\n');
	} 
	
	/*��ʾ�ڶ��ο��Եķ���*/
	puts("�ڶ��ο��Եķ���");
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			printf("%4d", tenus2[i][j]);
		}
		putchar('\n');
	} 
	
	/*��ʾ�ܷ�*/
	puts("�ܷ�");
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			printf("%4d", sum[i][j]);
		}
		putchar('\n');
	} 
	return 0;
}