#include<stdio.h>
#define raws 5
#define columns 2

int main(void){
	int marks[raws][columns]={0};
	float finalmarks[raws]={0};
	int i,j;
	
	for(i=0;i<raws;i++){
		for(j=0;j<columns;j++){
			printf("enter student %d marks %d : ",i+1,j+1);
			scanf("%d",&marks[i][j]);
		}
		puts("");
	}
	
	
	for(i=0;i<raws;i++){
		finalmarks[i]=((float)marks[i][0]*40/100)+((float)marks[i][1]*60/100);	
	}
	for(i=0;i<raws;i++){
		printf("\nstudent %d final mark : %.2f",i+1,finalmarks[i]);
	}	
	
	return 0;
}
