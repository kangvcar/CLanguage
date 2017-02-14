/*
	编写一段程序，输入6名学生2门课程（语文，数学）的分数，
	显示各门课程的总分和平均分，以及各个学生的总分和平均分。
*/

#include <stdio.h>

int main(void)
{
	int i, j, n;
	int fenshu[6][2];
	int zongfen1, zongfen2;
	int pingjunfen;
	
	/*输入6名学生的分数*/ 
	printf("请输入6名学生的2门课程（语文，数学）的分数：\n");
	for(i=0; i<6; i++){
		for(j=0; j<2; j++){
			if(j==0){
				printf("学生%d语文分数：", i+1);
				scanf("%d",&fenshu[i][j]);
			}
			if(j==1){
				printf("学生%d数学分数：", i+1);
				scanf("%d",&fenshu[i][j]);
			}
		}
		putchar('\n');
	}
	
	/*显示6名学生的分数*/
	printf("      语文 数学\n");
	for(i=0; i<6; i++){
		printf("学生%d", i+1);
		for(j=0; j<2; j++){
			printf("%4d", fenshu[i][j]);
		}
		putchar('\n');
	} 
	
	/*显示总分*/
	zongfen1 = 0;
	for(i=0; i<6; i++){
		zongfen1 += fenshu[i][0];
	}
	printf("语文总分：%d\n", zongfen1); 
	printf("语文平均分：%2.1f\n", (double)zongfen1/6);
	
	zongfen2 = 0;
	for(i=0; i<6; i++){
		zongfen2 += fenshu[i][1];
	}
	printf("数学总分：%d\n", zongfen2);	
	printf("数学平均分：%2.1f\n", (double)zongfen2/6);
	return 0;
} 