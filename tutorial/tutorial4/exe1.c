#include<stdio.h>
int main(){
	int nu;	//inputs
	
	printf("Enter your number  :- "); //prompt
	scanf("%d",&nu);	//read an integer
	
	if(nu>=0){
		printf("%d",nu); 	//print positive number	
	}
	else{
		nu=nu*-1;		//assign negetiv number to positive
		printf("%d",nu);	//print positive number
	}
	
	return 0;
}
