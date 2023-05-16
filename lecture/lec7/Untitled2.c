#include<stdio.h>

int main(void){	//execute main function
	
	float temperature[24]; 	//variables
	int i;
	float total,average;
	
	for(i=0;i<24;i++){
		printf("Enter temperature %d:- ",i+1);	//prompt
		scanf("%f",&temperature[i]);	//read integer to temperature array
		total=total+temperature[i];		//assign total
	}
	
	average=(total/24);		//assign total;
	
	printf("average of temperature is :- %.2f",average);	//print temperature average
	
	
	
	
	
	return 0;
}//end main
