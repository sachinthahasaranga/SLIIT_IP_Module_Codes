//implement a function call add witch two int parameters and calculate return of addition of thoes two numbers
#include<stdio.h>
int add(int x,int y);		//prototype function
int main(void){				//caling function
	int nu1,nu2;
	
	printf("Enter your number");		//prompt
	scanf("%d",&nu1);					//assign number to number 1
	printf("Enter your number");		//prompt
	scanf("%d",&nu2);					//assign number to number 2
	
	
	printf("%d",add(nu1,nu2));	//invoke function
	
	
	
	
	
	
	return 0; //end main function
}
int add(int x,int y){		//called function
	int adding;
	adding= x+y;		//calculate adding;
	return adding;
}
