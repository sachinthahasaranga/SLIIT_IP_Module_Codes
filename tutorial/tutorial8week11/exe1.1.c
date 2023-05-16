#include<stdio.h>
#define size 10		//define array size
int main(void){		//execute main function 
	int marks[size]={0};	//marks array declaration
	int number,i;	//variables 
	
	for(i=0;i<size;){
		printf("Enter marks :- ");	//prompt
		scanf("%d",&number);		//read integer to number variable
	
		if((number>=0)&&(number<=20)){	//check number between 0 and 20
			marks[i]=number;	//number assign to marks array
			i++;			//if number between 0 and 20 i increment by 1
		}//end if
		else{
			printf("invalid marks\n");		//print
		}//end else
		
	}
	
	
	for(i=0;i<size;i++){	//for print 10 statements
		printf("%d ,",marks[i]);	//print marks array values
		
	}//end if
	
	
	
	
	
	
	return 0;
}//end main function
