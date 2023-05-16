#include<stdio.h>
#define size 10
int main(void){					//execute main function
	int array[size];
	int max=0;					//variable
	int i=0,number=0;
	
	for(i=0;i<size;){
		
		printf("enter number :- ");		//prompt
		scanf("%d",&number);			//read integer to 
		
		if(number<=100&&number>=10){	 //check number between 10 and 100
			array[i]=number;			//assign number to array
			i++;
			
		}
	}
	max=array[0];				//assign array 1st  number to max
	
	for(i=0;i<size;i++){	
		if (max<array[i]){		//assign max number
			max=array[i];
		}
	}
	
	printf("maximum number is %d", max);	//print max number
	
	
	
	return 0;
}//end main
