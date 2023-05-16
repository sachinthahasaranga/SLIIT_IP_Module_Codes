/*sachintha hasaranga
it21194962
malabe group 1.2*/
#include<stdio.h>
float circleArea(float radius);		// circleArea function declaration
int main(void){	//funtion main begins program execution
	float Radius;		//variable
	
	printf("Enter your radius :-  ");	//prompt
	scanf("%f",&Radius);		//read an float
	
	printf("\nCircle Area is %.2f",circleArea(Radius));	//invoke function and print circle area 
	
	return 0;
	
}//end of the main function
float circleArea(float radius){	//circleArea function implementation
	float area;
	area=(22/7.0)*radius*radius;	//assign area of a circle
	return area;
}//end of the circleArea function
