#include<stdio.h>
#define size 10		//define value array size
int main(void){		//execute main function 
	int value[size]={19,3,15,7,11,9,13,5,17,1};	//value array declaration
	int number=0;		//variable for read user input
	int i=0;		//variable for count
	int j=0;		//variable for count
	
	
	printf("Element\t\tvalue \t\tHistogram");	//print texts
	
	for(i=0;i<size;i++){	//for enter 10 values and histogram
		printf("\n%d\t\t%d \t\t",i,value[i]);	//print element and value
		
		for(j=0;j<value[i];j++){	//for count histogram value
			printf("*");			//print * for histogram value
		}//end for
	}//end for
	
	
	
	
	
	return 0;
}//end main function
