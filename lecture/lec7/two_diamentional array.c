/* twop dimmentional array for input 12 marks and out put marks table format 
sachintha hasaranga niyangoda
IT21194962
malabe group 1.2 weekdays*/
#include<stdio.h>
#define row 3
#define columns 4
int main(){
	int marks[row][columns]={0};
	int i,j;
	
	for(i=0;i<row;i++){
		for(j=0;j<columns;j++){
			
			printf("enter your marks");
			scanf("%d",&marks[i][j]);
		}
	}	printf("\n");
	
	for(i=0;i<row;i++){
		for(j=0;j<columns;j++){
			
			printf("%d\t",marks[i][j]);
		}	printf("\n");
	}
	
		
	
	return 0;
	
}
