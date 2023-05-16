/*Sachintha Hasaranga Niyangoda
IT21194962
malabe weekday group1.2*/
#include<stdio.h>
#define size 5			//define array size
int main(void){	//main function execute
	int OTHours[size]={20,22,25,19,20};		//OTHours array declaration
	float OTrate[size]={0};		//OTrate array declaration
	float payment,max;	//variable for assign float numbers
	int i,employee;		//variable for counting
	
	for(i=0;i<size;i++){	//read user input to OTrate array
		printf("Enter rate of employee %d: ",i+1);	//prompt
		scanf("%f",&OTrate[i]);		//read a float value 
	}//end for
	
	max=OTHours[0]*OTrate[0];	//assign 1st employee payment for max
	employee=1;	//employee assign to 1
	for(i=0;i<size;i++){	//assign higest payment person
		payment=OTHours[i]*OTrate[i];	
		if (payment>max){
			max=payment;	//calculate and assign highest payment payment person
			employee=i+1;
		}//end if
	}//end for
	
	//printing part
	
	printf("\n\nOTHours array\n");	//prompt
	for(i=0;i<size;i++){
		printf("%d,",OTHours[i]);	//print OTHours array data
	}//end for
	printf("\nOTrate\n");	//prompt
	for(i=0;i<size;i++){
		printf("%.2f,",OTrate[i]);	//print OTrate array data
	}
	printf("\nemployee who earned highest payment: %d",employee);	//print highest earned person
	
	return 0;
}	//end main function
