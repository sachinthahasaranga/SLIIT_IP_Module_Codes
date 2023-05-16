#include <stdio.h>
#define size 12				//define array size
int main(void){				//execute main function
	float maximum,minimum;	//variable for assign max average and minimum average rainfall
	float data[size];		//array for store rainfall average
	int i,j;				//variable for count 
	int maxmonth,minmonth;		//variable for assign max rainfall month and minimum rainfall month
	
	for (i=0;i<size;i++){		//Store rainfall average (float) values within the array
		
		printf("Enter month %d :- ",i+1);	//prompt
		scanf("%f",&data[i]);				//read rainfall values for the data array
		
	}
	maximum=data[0];		//assign data array 1st value for the maximum
	minimum=data[0];		//assign data array 1st value for the minimum
	
	for (j=0;j<size;j++){
		if(maximum<data[j]){	//calculate maximum fainfall and rainfall month
			maximum=data[j];
			maxmonth= j+1;
		}
		if(minimum>data[j]){	//calculate minimum fainfall and rainfall month
			minimum=data[j];
			minmonth=j+1;
		}
	}
	
	//print maximum rainfall month and it's rainfall average
	printf("\nmaximum raifall is month :-  %d and average is %.2f\n",maxmonth,maximum);
	//print minimum rainfall month and it's rainfall average
	printf("minimum raifall is month :-  %d and average is  %.2f\n",minmonth,minimum);
	
	
	
	
	
	
	return 0;
}//end function main
