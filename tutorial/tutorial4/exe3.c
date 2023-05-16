#include<stdio.h>
int main(){
	float num1,num2,total; //inputs
	char ope;	//ope=operators input with keybord
	
	printf("Enter number 1 :- "); //prompt
	scanf("%f",&num1);		//read a float
	
	printf("Enter number 2 :- ");	//prompt
	scanf("%f%*c",&num2);		//read a float
	
	printf("Enter operator :- ");	//prompt
	scanf("%c",&ope);	//read a character
	
	
	if(ope=='+'){
		total=num1+num2;	//assign total
		printf("total = %.2f ",total);	 //print total
	}
	
	else if(ope=='-'){
		total=num1-num2;	//assign total
		printf("total = %.2f ",total);	 //print total
	}
	
	else if(ope=='*'){
		total=num1*num2;	//assign total
		printf("total = %.2f ",total);	 //print total
	}
	
	else if(ope=='/'){
		total=num1/num2;	//assign total
		printf("total = %.2f ",total);	 //print total
	}
	
	else{
		printf("invalid operator");
	}
	
	return 0;
	
}
