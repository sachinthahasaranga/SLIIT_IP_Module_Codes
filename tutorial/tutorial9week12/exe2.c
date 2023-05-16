//IT21194962 Sachintha hasaranga
#include<stdio.h>
#define row 4
#define columns 4
int main(){	//execute main function begins
	int array1[row][columns]={5,7,8,10,9,3,0,6,8,1,9,2,4,7,2,1};	//array1 declaration
	int array2[row][columns]={2,2,1,3,8,1,3,1,1,2,2,4,3,1,1,2};		//array2 declaration
	int total[row][columns]={0};	//total array declaration
	int i,j;	//variable for counting
	
	for(i=0;i<row;i++){
		for(j=0;j<columns;j++){
			total[i][j]=array1[i][j]+array2[i][j];	//assing array1+array2 to total array
		}//end for
	}//end for
	
	for(i=0;i<row;i++){
		for(j=0;j<columns;j++){
			printf("%4d",total[i][j]);	//print total array
		}printf("\n");	//new line
	}
	
	
	return 0;
}//end main function
