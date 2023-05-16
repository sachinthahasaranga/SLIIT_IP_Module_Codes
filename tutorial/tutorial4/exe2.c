#include<stdio.h>
int main(void){
	char ch;	//transaction type 
	float balance,withdrawal,deposit,amount; //variable for stored inputs
	
	
	printf("Enter your transaction type :-  ");
	ch=getchar();								//for input transaction type
	
	printf("Enter your balance	:-  ");	//prompt
	scanf("%f",&balance);		//read a float
	
	
	if (ch=='w'||ch=='W'){
		printf("\nYou have selected to withdraw money\n\n");	//prompt
		
		printf("Enter your amount	:-  "); //prompt
		scanf("%f",&withdrawal);		//read a float
		
		balance=balance-withdrawal; //assign balance
		
		printf("balance :- %.2f",balance);	//print balance
	}

	else if (ch=='d'||ch=='D'){
		printf("\nYou have selected to deposit money\n\n"); //prompt
		
		printf("Enter your amount	:-  "); //prompt
		scanf("%f",&deposit);	//read a float
		
		balance=balance+deposit;	//assign balance
		
		printf("balance :- %.2f",balance); //print balance
	}
	
	else{
		printf("You have selected an invalid transaction type");
	}
	
	
	return 0;
}
