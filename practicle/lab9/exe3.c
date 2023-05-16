#include<stdio.h>
#define size1 3
#define size2 3
int main(){
	float average;
	float total;
	int marks[size1][size2]={0};
	int i,j;
	
	
	for (i=0;i<size1;i++){
		printf("student no : %d \n",i+1);
		for(j=0;j<size2;j++){
			printf("Enter mark%d : ",j+1);
			scanf("%d",&marks[i][j]);
		}printf("\n");
	}
	
	printf("Student No\tExam score\t\t\tAverage\n\n");
	for (i=0;i<size1;i++){
		printf("%d\t\t",i+1);	
		for(j=0;j<size2;j++){
			printf("%d\t",marks[i][j]);
			total=total+marks[i][j];
			
		}average=((float)total)/size2;
		printf("\t%.2f\n",average);
		total=0;
	}
	
	
	
	return 0;
}
