#include<stdio.h>
#define size 5		//define array size
int main(void){		//execute main function 
	int motion[size]={0};	//motion array declaration
	int tempory=0;		//variable declaration
	int number;
	int i=0;
	
	for (i=0;i<size;i++){		//for count 5 user input
		
		printf("enter number:- ");	//prompt
		scanf("%d",&motion[i]);		//read integer and assign it to motion array
		
	}//end for loop
	
	tempory=motion[0];	//assign motion array 0 value to tempory variable
	
	for(i=0;i<size-1;i++){	//for change array values position		
		
		motion[i]=motion[i+1];	//change value position
			
	}//end for loop
	
	motion[4]=tempory;	//assign tempory value to motion array
	
	for(i=0;i<size;i++){
		printf("%d\t",motion[i]);	//print motion array value
	}//end for loop
	
	
		
	return 0;
}//end function main
