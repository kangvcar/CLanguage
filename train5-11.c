/*
	��дһ�γ�������6��ѧ��2�ſγ̣����ģ���ѧ���ķ�����
	��ʾ���ſγ̵��ֺܷ�ƽ���֣��Լ�����ѧ�����ֺܷ�ƽ���֡�
*/

#include <stdio.h>

int main(void)
{
	int i, j, n;
	int fenshu[6][2];
	int zongfen1, zongfen2;
	int pingjunfen;
	
	/*����6��ѧ���ķ���*/ 
	printf("������6��ѧ����2�ſγ̣����ģ���ѧ���ķ�����\n");
	for(i=0; i<6; i++){
		for(j=0; j<2; j++){
			if(j==0){
				printf("ѧ��%d���ķ�����", i+1);
				scanf("%d",&fenshu[i][j]);
			}
			if(j==1){
				printf("ѧ��%d��ѧ������", i+1);
				scanf("%d",&fenshu[i][j]);
			}
		}
		putchar('\n');
	}
	
	/*��ʾ6��ѧ���ķ���*/
	printf("      ���� ��ѧ\n");
	for(i=0; i<6; i++){
		printf("ѧ��%d", i+1);
		for(j=0; j<2; j++){
			printf("%4d", fenshu[i][j]);
		}
		putchar('\n');
	} 
	
	/*��ʾ�ܷ�*/
	zongfen1 = 0;
	for(i=0; i<6; i++){
		zongfen1 += fenshu[i][0];
	}
	printf("�����ܷ֣�%d\n", zongfen1); 
	printf("����ƽ���֣�%2.1f\n", (double)zongfen1/6);
	
	zongfen2 = 0;
	for(i=0; i<6; i++){
		zongfen2 += fenshu[i][1];
	}
	printf("��ѧ�ܷ֣�%d\n", zongfen2);	
	printf("��ѧƽ���֣�%2.1f\n", (double)zongfen2/6);
	return 0;
} 