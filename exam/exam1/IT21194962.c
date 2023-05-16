/* IT21194962
S.A.N. sachintha hasaranga niyangoda
group1.2
malabe*/
#include<stdio.h>
//function main begins program execution
int main(void){
	int age;		//age to be entered by user
	float balance;	//variable whitch balance will be stored
	
	printf("Age : ");	//prompt
	scanf("%d",&age);	//read an integer
	
	printf("Bank balance : ");	//prompt
	scanf("%f",&balance);		//read a float
	
	if (balance<=150000){		//check balanse less or equal to Rs.150000
		if (age<=15){			//check age less or equal age 15
			printf("Gift : Backpack");	//print gift
		}
		else if(age>25){	//check age grater than age 25
			printf("Gift : Electric Kettle");	//print gift
		}
	}
	else if (balance>150000){	//check balanse grater than to Rs.150000
		if (age<=15){		//check age less or equal age 15
			printf("Gift : Mountain Bicycle");	//print gift
		}
		else if(age>25){		//check age grater than age 25
			printf("Gift : Laptop");	//print gift
		}
	}
	
	
	
	
	
	
	
	
	return 0;
	
}//end function main
