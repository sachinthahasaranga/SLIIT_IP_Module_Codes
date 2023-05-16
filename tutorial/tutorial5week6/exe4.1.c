#include<stdio.h>
int main(){
	int j=1; //variable
	int i=1;	//variable
	
	for(j=1;j<=7;j++){	//counter control
	
		for(i=1;i<=j;i++){	//counter control
			printf("*");	//print
		}//exit for loop
		
		printf("\n");
		
	}//exit for loop
	
	for(j=7;j>=1;j-=2){	//counter control
	
		for(i=1;i<=j;i++){		//counter control
			printf("*");	//print
		}//exit for loop
		
		printf("\n");
		
	}//exit for loop
	
	
	
	
	return 0;
}//exit main
