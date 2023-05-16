#include<stdio.h>
int main(){
	float num1,num2,total; //inputs
	char ope;
	
	printf("Enter number 1 :- ");	//prompt
	scanf("%f",&num1);			//read a float
	
	printf("Enter number 2 :- ");	//prompt
	scanf("%f%*c",&num2);		//read a float
	
	printf("Enter operator :- ");	//prompt
	scanf("%c",&ope);	//read a character
	
	
	switch(ope){
		
		case '+':	total=num1+num2;	//assign total
		printf("total = %.2f ",total);	 //print total
		break;
		
		case '-':total=num1-num2;	//assign total
		printf("total = %.2f ",total);	 //print total
		break;
		
		case '*':total=num1*num2;	//assign total
		printf("total = %.2f ",total);	 //print total
		break;
		
		case '/':total=num1/num2;	//assign total
		printf("total = %.2f ",total);	 //print total
		break;
		
		default:printf("invalid operator");	 //print invalid operator
		break;
	}
	
	return 0;
	
}
