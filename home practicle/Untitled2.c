#include<stdio.h>
int main(){
	float balance,amount;
	char transaction;
	
	printf("Enter balance :-  ");
	scanf("%f",&balance);
	
	printf("enter your amount:-  ");
	scanf("%f",&amount);
	
	printf("Enter transaction type :- ");
	getchar();
	transaction=getchar();
	getchar();
	
	
	if(transaction=='w'||transaction=='W'){
		printf("You have selected to withdraw money\n");
		balance=balance-amount;
		printf("your blance is %.2f",balance);
	}
	else if(transaction=='d'||transaction=='D'){
		printf("You have selected to deposit money");
		balance=balance+amount;
		printf("your blance is %.2f",balance);
		
	}
	else{
		printf("You have selected an invalid transaction type");
	}
	
	

	
	return 0;
	
	
}
